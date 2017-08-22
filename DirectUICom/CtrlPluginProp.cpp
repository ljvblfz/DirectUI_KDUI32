// CtrlPluginProp.cpp : CCtrlPluginProp µÄÊµÏÖ

#include "stdafx.h"
#include "CtrlPluginProp.h"


// CCtrlPluginProp

STDMETHODIMP CCtrlPluginProp::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ICtrlPluginProp
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


BOOL CCtrlPluginProp::IsExistedAddinProp(ICtrlPluginProp* pProp)
{
	for (size_t i=0;i<m_dequeProps.size();i++)
	{
		if (m_dequeProps[i] == pProp)
			return TRUE;
	}

	return FALSE;
}

BOOL CCtrlPluginProp::IsExistedSkinProp(IDUIPropType* pProp)
{
	for (size_t i=0;i<m_dequeSubSkinProps.size();i++)
	{
		if (m_dequeSubSkinProps[i] == pProp)
			return TRUE;
	}

	return FALSE;
}

BOOL CCtrlPluginProp::AccessConfig(OLE_HANDLE pXmlEle, VARIANT_BOOL bRead,
								   BSTR strName,IDUIPropType* pSkinPropType,
								   VARIANT_BOOL *pbResult)
{
	//IDuiXmlElement *pTiEle = (IDuiXmlElement *)pXmlEle;
	static bool bAssert = false;

	USES_CONVERSION;
	tstringex strTemp = W2T(strName);
	strTemp.replace(_T(" "),_T(""));
	_bstr_t bstrName(strTemp.c_str());

	CComVariant var;
	pSkinPropType->get_vtValue(&var);
	//_variant_t 
	VARIANT vtValue;
	LPCTSTR lpsAttr = NULL;
//	int iVal;
    tstring strAttr;

	if (bRead)
	{
		switch(var.vt)
		{
		case _PROPTYPE_IMAGESECTION:
		case _PROPTYPE_TEXTSTYLE:
			break;
		case _PROPTYPE_INT: 
//            strAttr = pTiEle->Attribute(strTemp.c_str(), &iVal);
            if (!strAttr.empty())
			{
				vtValue.vt = var.vt;
//				vtValue.intVal = iVal;
				pSkinPropType->put_vtValue(vtValue);
			}
			break;
		}
	}
	else
	{
		var.Detach(&vtValue);
//		((IDuiXmlElement *)pXmlEle)->SetAttribute(strTemp.c_str(), vtValue.intVal);
	}

	*pbResult = VARIANT_TRUE;

	return TRUE;
}

STDMETHODIMP CCtrlPluginProp::get_bGroup(VARIANT_BOOL *pVal)
{
	*pVal = m_bGroup;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::put_bGroup(VARIANT_BOOL newVal)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		m_bGroup = newVal;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::get_strName(BSTR *pVal)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*pVal = m_strName.Copy();

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::put_strName(BSTR newVal)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	m_strName = newVal;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::AddSkinProp(IDUIPropType *pSkinProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (IsExistedSkinProp(pSkinProp)) return S_FALSE;

	m_dequeSubSkinProps.push_back(pSkinProp);

	pSkinProp->put_bAccess(VARIANT_TRUE);

	pSkinProp->SetParentProp(this);

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::RemoveSkinProp(IDUIPropType *pSkinProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		for (size_t i=0;i<m_dequeSubSkinProps.size();i++)
		{
			if (m_dequeSubSkinProps[i] == pSkinProp)
			{
				m_dequeSubSkinProps.erase(m_dequeSubSkinProps.begin()+i);
				break;
			}
		}

		return S_OK;
}

STDMETHODIMP CCtrlPluginProp::AddProp(ICtrlPluginProp *pSubProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	if (IsExistedAddinProp(pSubProp)) return S_FALSE;

	m_dequeProps.push_back(pSubProp);

	pSubProp->SetParent(this);

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::RemoveProp(ICtrlPluginProp *pSubProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	for (size_t i=0;i<m_dequeProps.size();i++)
	{
		if (m_dequeProps[i] == pSubProp)
		{
			m_dequeProps.erase(m_dequeProps.begin()+i);
			pSubProp->SetParent(NULL);
			break;
		}
	}
    
	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::AccessConfig3(BSTR strParentName,OLE_HANDLE pXmlEle,VARIANT_BOOL bRead,VARIANT_BOOL* pbResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CComBSTR bstrName;
	bstrName = strParentName;
	bstrName += m_strName;

	for (size_t i=0;i<m_dequePropBases.size();i++)
	{
		IDUIPropBase* pPropBase = m_dequePropBases[i];
		if (pPropBase)
		{
			enumPropType eType;
			pPropBase->GetType(&eType);
			CComBSTR bstrNameProp;
			CComBSTR bstrProp;

			if (eType == _PROPTYPE_STRING)
			{
				bstrNameProp = bstrName;
				pPropBase->GetName(&bstrProp);
				bstrNameProp += bstrProp;
				pPropBase->AccessConfig(pXmlEle,bstrNameProp,bRead,VARIANT_FALSE,pbResult);
			}
		}
	}

	for (size_t j=0;j<m_dequeProps.size();j++)
	{
		ICtrlPluginProp* pProp = m_dequeProps[j];
		if (pProp)
		{
			pProp->AccessConfig3(bstrName,pXmlEle,bRead,pbResult);
		}
	}

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::AccessConfig2(BSTR strParentName,OLE_HANDLE pXmlEle,VARIANT_BOOL bRead,VARIANT_BOOL* pbResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	//CComBSTR bstrName;
	//bstrName = strParentName;
	//bstrName += m_strName;

	//for (size_t i=0;i<m_dequePropBases.size();i++)
	//{
	//	IDUIPropBase* pPropBase = m_dequePropBases[i];
	//	if (pPropBase)
	//	{
	//		enumPropType eType;
	//		pPropBase->GetType(&eType);

	//		if (eType == _PROPTYPE_STRING) 
	//			continue;

 //           CComBSTR bstrNameProp = bstrName;
	//		CComBSTR bstrProp;
	//		pPropBase->GetName(&bstrProp);
	//		bstrNameProp += bstrProp;

	//		VARIANT_BOOL bIsStyle = VARIANT_FALSE;
	//		pPropBase->IsStyle(&bIsStyle);
	//		OLE_HANDLE pXmlNode = NULL;

	//		if (bIsStyle == VARIANT_TRUE)
	//		{
	//			pPropBase->GetStyleNode(&pXmlNode);
	//		}
	//		else
	//		{
	//			pPropBase->GetPropertyNode(&pXmlNode);
	//			//bstrNameProp = bstrProp;
	//			//pPropBase->GetPropertyNode(&pXmlNode);
	//		}

	//		if (pXmlNode == NULL) 
	//		{
	//			return S_OK;
	//		}

 //           IDuiXmlElement* pTempElem = (IDuiXmlElement*)pXmlNode;
 //           if (NULL == pTempElem)
 //               return S_OK;

 //           tstring strValue(ValueT(pTempElem));

 //           if (pXmlNode && m_pDUIResource && m_pDUIResource->GetDuiVersion() >= DUI_VERSION_2_0)
 //           {
 //               USES_CONVERSION;
 //               tstring strTempName(W2T(bstrNameProp));

 //               tstring strID;
 //               tstring strCtrlType = TrimDigits(strValue);
 //               if (!m_pDUIResource->FindAttribID(strCtrlType, strTempName, strID))
 //                   strID = strTempName;
 //               pPropBase->AccessConfig(pXmlNode, T2W(&strID[0]), bRead, VARIANT_FALSE,pbResult);
 //           }
 //           else
 //           {
 //   			pPropBase->AccessConfig(pXmlNode,bstrNameProp,bRead,VARIANT_FALSE,pbResult);
 //           }
	//	}
	//}

	//for (size_t j=0;j<m_dequeProps.size();j++)
	//{
	//	ICtrlPluginProp* pProp = m_dequeProps[j];
	//	if (pProp)
	//	{
	//		pProp->AccessConfig2(bstrName,pXmlEle,bRead,pbResult);
	//	}
	//}

	//USES_CONVERSION;
	//tstring strExpand = W2T(bstrName);
	//strExpand += _T("IsExpand");

 //   IDuiXmlElement* pElem = (IDuiXmlElement*)pXmlEle;

 //   if (pXmlEle != NULL && m_pDUIResource && m_pDUIResource->GetDuiVersion() >= DUI_VERSION_2_0)
 //   {
 //       tstring strID, strTemp(ValueT(pElem));
 //       tstring strCtrlType = TrimDigits(strTemp);
 //       if (m_pDUIResource->FindAttribID(strCtrlType, strExpand, strID) && !strID.empty())
 //           strExpand = strID;
 //   }

	//if (bRead)
	//{
	//	BOOL bIsExpand = FALSE;
	//	if (AccessAttribBOOL(pElem,strExpand.c_str(),bIsExpand,VARBOOL2BOOL(bRead)))
	//		m_bExpand = BOOL2VARBOOL(bIsExpand);
	//}
	//else
	//{
	//	if (m_funcIsExpand)
	//	{
	//		BOOL bIsExpand = m_funcIsExpand(m_lpProp);
	//		AccessAttribBOOL(pElem,strExpand.c_str(),bIsExpand,bRead);
	//	}
	//}

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::AccessConfig(OLE_HANDLE pXmlEle, VARIANT_BOOL bRead, VARIANT_BOOL *pbResult)
{
//	IDuiXmlElement * pXmlEleNew = NULL, *pXmlEleChild = (IDuiXmlElement *)pXmlEle;
//	IDuiXmlElement * pXmlElement = (IDuiXmlElement*)pXmlEle;
//
//	USES_CONVERSION;
//	tstringex strAddinName = W2T(m_strName);
//	strAddinName.replace(_T(" "),_T(""));
//	CComBSTR bstrAddinName = strAddinName.c_str();
//
//	pXmlEleNew = pXmlElement->FirstChildElement(strAddinName.c_str());
//	if (pXmlEleNew == NULL)
//	{
////		CXMLDocProxy& xmlDocProxy = m_pDUIResource->GetXmlDoc();
////		IDuiXmlDocument *pDocPtr = xmlDocProxy.GetXMLDoc();
////		pXmlEleNew = pDocPtr->AllocateElement(strAddinName.c_str(), _T(""));
//		IDuiXmlDocument *pXmlDoc = pXmlElement->ToXmlNode()->GetDocument();
//		if (pXmlDoc)
//		{
//			pXmlEleNew = pXmlDoc->AllocateElement(strAddinName.c_str(), _T(""));
//			pXmlElement->InsertEndChildElem(pXmlEleNew);
//		}
//	}
//
//	pXmlEleChild = pXmlEleNew;
//
//	size_t i=0;
//
//	for (i=0;i<m_dequeSubSkinProps.size();i++)
//	{
//		IDUIPropType* pSkinProp = m_dequeSubSkinProps[i];
//		VARIANT_BOOL bAccess;
//		pSkinProp->get_bAccess(&bAccess);
//
//		if (!bAccess)
//		{
//			continue;
//		}
//
//		CComBSTR strName;
//		pSkinProp->get_strName(&strName);
//
//		IDispatch* pDisp = NULL;
//		pSkinProp->get_pIDispatch(&pDisp);
//
//		enumPropType eType;
//		pSkinProp->get_eType(&eType);
//
//		CComVariant vtVal;
//		pSkinProp->get_vtValue(&vtVal);
//
//		if (pDisp)
//		{
//			if (eType == _PROPTYPE_IMAGESECTION ||
//				eType == _PROPTYPE_TEXTSTYLE ||
//				eType == _PROPTYPE_CURSOR ||
//				eType == _PROPTYPE_FONT)
//			{
//				ISkinShareBase *pShareBase = (ISkinShareBase*)pDisp;
//				pShareBase->AccessConfig2((OLE_HANDLE)pXmlEleChild,strName,VARIANT_TRUE,bRead,pbResult);
//			}
//			else
//			{
//
//			}
//			
//		}
//		else //if (vtVal.vt != VT_EMPTY)
//		{
//			AccessConfig((OLE_HANDLE)pXmlEleChild,bRead,strName,pSkinProp,pbResult);
//		}
//	}
//
//	for (i=0;i<m_dequeProps.size();i++)
//	{
//		ICtrlPluginProp* pAddinProp = m_dequeProps[i];
//		pAddinProp->AccessConfig((OLE_HANDLE)pXmlEleChild,bRead,pbResult);
//	}

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::Expand(VARIANT_BOOL bExpand)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		m_bExpand = bExpand;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::IsExpand(VARIANT_BOOL *pbResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		*pbResult = m_bExpand;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::SetParent(ICtrlPluginProp *pParent)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		m_pParent = pParent;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetParent(ICtrlPluginProp **pProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		*pProp = m_pParent;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetSkinPropTypeCount(long *plResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*plResult = (long)m_dequeSubSkinProps.size();

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetSkinPropTypeFromIndex(long nIndex, IDUIPropType **pPropType)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

		*pPropType = m_dequeSubSkinProps[nIndex];

	return S_OK;
}
 
STDMETHODIMP CCtrlPluginProp::GetAddinPropCount(long *plResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState())

	*plResult = (long)m_dequeProps.size();

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetAddinPropByIndex(long nIndex, ICtrlPluginProp **pAddinProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pAddinProp = m_dequeProps[nIndex];

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetDUIRes(IDUIRes** ppDUIRes)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*ppDUIRes = m_pDUIRes;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::SetDUIRes(IDUIRes *pDUIRes)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_pDUIRes = pDUIRes;
    if (m_pDUIRes)
    {
        m_pDUIRes->GetDUIResObjPtr((OLE_HANDLE*)&m_pDUIResource);
    }

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetControlBasePtr(IDUIControlBase **ppResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*ppResult = m_pControlBase;

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::SetControlBasePtr(IDUIControlBase *pCtrlBase)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	m_pControlBase = pCtrlBase;

	return S_OK;
}

BOOL CCtrlPluginProp::IsExistedPropBase(IDUIPropBase* pProp)
{
	for (size_t i=0;i<m_dequePropBases.size();i++)
	{
		IDUIPropBase* pPropBase = m_dequePropBases[i];
		if (pPropBase == pProp)
			return TRUE;
	}

	return FALSE;
}

STDMETHODIMP CCtrlPluginProp::AddPropBase(IDUIPropBase* pProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	if (IsExistedPropBase(pProp)) return S_FALSE;

	m_dequePropBases.push_back(pProp);

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::RemovePropBase(IDUIPropBase* pProp)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	for (size_t i=0;i<m_dequePropBases.size();i++)
	{
		IDUIPropBase* pPropBase = m_dequePropBases[i];
		if (pPropBase == pProp)
		{
			m_dequePropBases.erase(m_dequePropBases.begin()+i);
			return S_OK;
		}
	}

	return S_FALSE;
}

STDMETHODIMP CCtrlPluginProp::RemoveAllPropBase()
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	for (size_t i=0;i<m_dequePropBases.size();i++)
	{
		IDUIPropBase* pPropBase = m_dequePropBases[i];
		pPropBase->Release();
	}

	m_dequePropBases.clear();

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetPropBaseCount(LONG* pResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pResult = (LONG)m_dequePropBases.size();

	return S_OK;
}

STDMETHODIMP CCtrlPluginProp::GetAtPropBase(LONG nIndex,IDUIPropBase** ppResult)
{
	//AFX_MANAGE_STATE(AfxGetStaticModuleState());

	if (nIndex < 0 || nIndex >= (LONG)m_dequePropBases.size()) return S_FALSE;

	*ppResult = m_dequePropBases[nIndex];

	return S_OK;
}
