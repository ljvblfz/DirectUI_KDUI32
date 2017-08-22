#if !defined(STD_STRINGEX_H__8359A2EA_5F2E_45ac_BA46_1A58ACBD01D5__INCLUDED_)
#define STD_STRINGEX_H__8359A2EA_5F2E_45ac_BA46_1A58ACBD01D5__INCLUDED_

#include <string>
using namespace std;

#include <Windows.h>
#include <tchar.h>

#pragma once

#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

class stringex : public string
//#ifdef _UNICODE
//	public wstring
//#else
//	public string
//#endif
{
public:
	stringex(){}

	stringex(const char* lpszValue)
	{	
		assign(lpszValue);
	}

	stringex& operator=(const stringex& _Right)
	{	
		// assign _Right
		assign(_Right);
		return (*this);
	}

	stringex& operator=(const string& _Right)
	{	
		// assign _Right
		assign(_Right);

		return (*this);
	}

	stringex& operator=(const char* lpszValue)
	{	
		// assign _Right
		assign(lpszValue);

		return (*this);
	}

	stringex& operator+(const stringex& _Right)
	{	
		(append(_Right));

		return (*this);
	}

	stringex& operator+(const string& _Right)
	{	
		(append(_Right.c_str()));

		return (*this);
	}

	bool IsEmpty()
	{
		return empty();
	}

	char operator [](int nIndex)
	{
		return c_str()[nIndex];
	}

	operator LPCSTR()
	{
		return c_str();
	}

	int CompareNoCase(LPCSTR str)
	{
		#if (_MSC_VER > 1310) && !defined(_MSVCVER60) // VS2005
			return _stricmp(c_str(),str);
		#else
			return stricmp(c_str(),str);
		#endif
	}

	void format(const char * pFormat, ...)
	{
		va_list argp;
		va_start (argp, pFormat);

		char   szBuffer[255];

#if (_MSC_VER > 1310) && !defined(_MSVCVER60) // VS2005
		vsprintf_s(szBuffer,pFormat,argp);
#else
		vsprintf(szBuffer,pFormat,argp);
#endif 

		// Useless macro.
		va_end (argp);

		assign((const char*)szBuffer);
	}

	BSTR AllocSysString()
	{
		long nLength = (long)length();

		wchar_t *psz = new wchar_t[nLength+1];

		::MultiByteToWideChar(CP_ACP, NULL, c_str(), nLength+1, psz, nLength);

		BSTR strResult = ::SysAllocString(psz);

		delete[] psz;

		return strResult;
	}

	void makelower()
	{
		string::iterator it;
		for(it = begin();it!=end();++it)
		{
			if((*it)>= 'A' && (*it)<='Z')
				(*it) = (*it)-'A'+'a';
		}
	}
	void makeupper()
	{
		string::iterator it;
		for(it = begin();it!=end();++it)
		{
			if((*it)>='a' && (*it)<='z')
				(*it) = (*it)-'a'+'A';
		}
	}

	stringex left(int count)
	{
		stringex strResult;
		strResult.assign("");

		if (count <= 0 || count > (int)length())
		{
			return strResult;
		}

		string strSub = substr(0,count);
		strResult.assign(strSub);

		return strResult;
	}

	stringex right(int count)
	{
		stringex strResult;
		strResult.assign("");

		if (count <= 0 || count > (int)length())
		{
			return strResult;
		}

		string strSub = substr(length()-count,(int)length()-1);
		strResult.assign(strSub);
		return strResult;
	}

	string trimright(char* str)
	{
		int iEPos = (int)find_last_not_of(str);
		if(iEPos<0)
			return ("");

		return substr(0,iEPos+1);

		string strResult = substr(0,iEPos+1);
		assign(strResult.c_str());
		return strResult;
	}
 
	string trimrightspace()
	{		
		int iEPos = (int)find_last_not_of("\r\n\t ");
		if(iEPos<0)
			return ("");

		return substr(0,iEPos+1);

		string strResult = substr(0,iEPos+1);
		assign(strResult.c_str());
		return strResult;
	}

	string trimleftspace()
	{
		int iBPos = (int)find_first_not_of("\r\n\t ");		
		if(iBPos<0)
			return ("");

		return substr(iBPos,size()-iBPos);

		string strResult = substr(iBPos,size()-iBPos);		
		assign(strResult.c_str());
		return strResult;
	}

	string trimleft(char* str)
	{
		int iBPos = (int)find_first_not_of(str);		
		if(iBPos<0)
			return ("");

		return substr(iBPos,size()-iBPos);

		string strResult = substr(iBPos,size()-iBPos);		
		assign(strResult.c_str());
		return strResult;
	}

	int replace(string strOld,string strNew)	//返回替换的个数
	{
		int iPos=0;
		int iCurPos = 0;
		int iSize = (int)strOld.size();
		int iCount = 0;
		while(iPos>=0)
		{
			iCurPos = (int)find(strOld,iPos);
			if(iCurPos<0)
				break;
			string::replace(iCurPos,iSize,strNew);
			iCount ++;
			iPos = iCurPos+(int)strNew.size();
		}
		return iCount;		
	}
	int replacenocase(string strOld,string strNew)	//返回替换的个数
	{
		if(size()==0)
			return 0;
		int iPos=0;
		int iCurPos = 0;
		int iSize = (int)strOld.size();
		int iCount = 0;
		int i,j;
		char c;
		((stringex&)strOld).makeupper();		
		while(iPos>=0&&iPos<(int)size())
		{
			j = iPos;			
			iCurPos = -1;
			for(i = 0;i<(int)strOld.size();)
			{
				c = at(j);
				if(c>='a'&&c<='z')
					c = c-'a'+'A';
				if(c != strOld.at(i))
				{
					i = 0;
					iPos ++;
					j = iPos;
					if(j== (int)size())
						break;
				}
				else
				{
					i++;
					j++;
					if(j==(int)size())
						break;
				}
			}
			if(i == (int)strOld.size())
				iCurPos = iPos;
			if(iCurPos<0)
				break;
			string::replace(iCurPos,iSize,strNew);
			iCount ++;
			iPos = iCurPos+(int)strNew.size();
		}
		return iCount;
	}
};

class wstringex : public wstring
{
public:
	wstringex(){}

	wstringex(const wchar_t* lpszValue)
	{
		assign(lpszValue);
	}

	wstringex& operator=(const wchar_t* lpszValue)
	{	
		// assign _Right
		assign(lpszValue);
		return (*this);
	}

	wstringex& operator=(const wstringex& _Right)
	{	// assign _Right
		assign(_Right);

		return (*this);
	}

	wstringex& operator=(const wstring& _Right)
	{	// assign _Right
		assign(_Right);

		return (*this);
	}

	wstringex& operator+(const wstringex& _Right)
	{	
		(append(_Right));

		return (*this);
	}

	wstringex& operator+(const wstring& _Right)
	{	
		(append(_Right.c_str()));

		return (*this);
	}

	wchar_t operator [](int nIndex)
	{
		return c_str()[nIndex];
	}

	bool IsEmpty()
	{
		return empty();
	}

	operator LPCWSTR()
	{
		return c_str();
	}

	int CompareNoCase(LPCWSTR str)
	{
		return _wcsicmp(c_str(),str);
	}

	//#pragma optimize("",on)
	void format(const wchar_t * pFormat, ...)
	{
		va_list argp;
		va_start (argp, pFormat);

		wchar_t   szBuffer[255];   

#if (_MSC_VER > 1310) && !defined(_MSVCVER60) // VS2005
		vswprintf_s(szBuffer,pFormat,argp);
#else
		vswprintf(szBuffer,pFormat,argp);
#endif 

		// Useless macro.
		va_end (argp);

		assign((const wchar_t*)szBuffer);
	}
	//#pragma optimize("",off)

	BSTR AllocSysString()
	{
		return ::SysAllocString(c_str());
	}

	void makelower()
	{
		wstring::iterator it;
		for(it = begin();it!=end();++it)
		{
			if((*it)>='A' && (*it)<='Z')
				(*it) = (*it)-'A'+'a';
		}
	}
	void makeupper()
	{
		wstring::iterator it;
		for(it = begin();it!=end();++it)
		{
			if((*it)>='a' && (*it)<='z')
				(*it) = (*it)-'a'+'A';
		}
	}

	wstringex left(int count)
	{
		wstringex strResult;
		strResult.assign(L"");

		if (count <= 0 || count > (int)length())
		{
			return strResult;
		}

		wstring strSub = substr(0,count);
		strResult.assign(strSub);

		return strResult;
	}

	//#pragma optimize("",on)
	wstringex right(int count)
	{
		wstringex strResult;
		strResult.assign(L"");

		if (count <= 0 || count > (int)length())
		{
			return strResult;
		}

		wstring strSub = substr(length()-count,(int)length()-1);
		strResult.assign(strSub);
		return strResult;
	}
	//#pragma optimize("",off)

	wstring trimrightspace()
	{		
		int iEPos = (int)find_last_not_of(L"\r\n\t ");
		if(iEPos<0)
			return L"";

		return substr(0,iEPos+1);

		wstring strResult = substr(0,iEPos+1);
		assign(strResult.c_str());
		return strResult;
	}

	//#pragma optimize("",on)
	wstring trimright(wchar_t* str)
	{		
		int iEPos = (int)find_last_not_of(str);
		if(iEPos<0)
			return L"";

		return substr(0,iEPos+1);
		wstring strResult = substr(0,iEPos+1);
		assign(strResult.c_str());
		return strResult;
	}
	//#pragma optimize("",off)

	wstring trimleftspace()
	{
		int iBPos = (int)find_first_not_of(L"\r\n\t ");		
		if(iBPos<0)
			return L"";

		return substr(iBPos,size()-iBPos);
		wstring strResult = substr(iBPos,size()-iBPos);		
		assign(strResult.c_str());
		return strResult;
	}

	//#pragma optimize("",on)
	wstring trimleft(wchar_t *str)
	{
		int iBPos = (int)find_first_not_of(str);		
		if(iBPos<0)
			return L"";

		return substr(iBPos,size()-iBPos);
		wstring strResult = substr(iBPos,size()-iBPos);		
		assign(strResult.c_str());
		return strResult;
	}
	//#pragma optimize("",off)

	int replace(wstring strOld,wstring strNew)	//返回替换的个数
	{
		int iPos=0;
		int iCurPos = 0;
		int iSize = (int)strOld.size();
		int iCount = 0;
		while(iPos>=0)
		{
			iCurPos = (int)find(strOld,iPos);
			if(iCurPos<0)
				break;
			wstring::replace(iCurPos,iSize,strNew);
			iCount ++;
			iPos = iCurPos+(int)strNew.size();
		}
		return iCount;		
	}
	int replacenocase(wstring strOld,wstring strNew)	//返回替换的个数
	{
		if(size()==0)
			return 0;
		int iPos=0;
		int iCurPos = 0;
		int iSize = (int)strOld.size();
		int iCount = 0;
		int i,j;
		wchar_t c;
		((stringex&)strOld).makeupper();		
		while(iPos>=0&&iPos<(int)size())
		{
			j = iPos;			
			iCurPos = -1;
			for(i = 0;i<(int)strOld.size();)
			{
				c = at(j);
				if(c>='a'&&c<='z')
					c = c-'a'+'A';
				if(c != strOld.at(i))
				{
					i = 0;
					iPos ++;
					j = iPos;
					if(j==(int)size())
						break;
				}
				else
				{
					i++;
					j++;
					if(j==(int)size())
						break;
				}
			}
			if(i == (int)strOld.size())
				iCurPos = iPos;
			if(iCurPos<0)
				break;
			wstring::replace(iCurPos,iSize,strNew);
			iCount ++;
			iPos = iCurPos+(int)strNew.size();
		}
		return iCount;
	}
};

#ifdef _UNICODE
#define tstringex wstringex
#else
#define tstringex stringex
#endif

#endif //STD_STRINGEX_H__8359A2EA_5F2E_45ac_BA46_1A58ACBD01D5__INCLUDED_