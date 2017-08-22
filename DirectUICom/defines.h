#if !defined(_DEFINES_H_INCLUDED_)
#define _DEFINES_H_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

interface IDUIRes;
interface IDUIRenderDC;
interface ICtrlPluginProp;
interface IDUIPropBase;
interface IDUIRenderImage;
interface IDirectUI;
interface IDUIControlBase;
interface IDUIPropType;

typedef
[
	uuid(18BB3B96-185D-4bd2-9745-BE277F6B2B50),
	version(1.0),
	helpstring("DirectUI enumDUIObjType"),
	public
] 
enum enumDUIObjType
{
	DUI_OBJTYPE_UNDEFINED = 100,
	DUI_OBJTYPE_IMAGE,
	DUI_OBJTYPE_IMAGEBASE,
	DUI_OBJTYPE_TEXTSTYLE,
	DUI_OBJTYPE_FONTEX,
	DUI_OBJTYPE_DIRECTUI,
	DUI_OBJTYPE_CONTROL,
	DUI_OBJTYPE_LAST	
}enumDUIObjType;



typedef
[
	uuid(BBE08163-E8B9-4d5a-884F-C06FE15A4164),
	version(1.0),
	helpstring("DirectUI enumPropType"),
	public
] 
enum enumPropType
{
	_PROPTYPE_IMAGESECTION,/* specifies a property of <link IImageSecProp>. */

	_PROPTYPE_TEXTSTYLE, /* specifies a property of <link ITextStyleProp>. */

	_PROPTYPE_INT,/* specifies a property of <link INumberLongProp>. */

	_PROPTYPE_LONG, /* specifies a property of <link INumberLongProp>. */

	_PROPTYPE_BOOL,/* specifies a property of <link IBOOLProp>. */

	_PROPTYPE_COMBO,/* specifies a property of <link IComboProp>. */

	_PROPTYPE_STRING, /* specifies a property of <link IStrProp>. */

	_PROPTYPE_FONT, /* specifies a property of <link IFontProp>. */

	_PROPTYPE_COLOR,/* specifies a property of <link IColorProp>. */

	_PROPTYPE_PLUGIN, /* specifies a property of <link IPluginProp>. */

	_PROPTYPE_CURSOR, /* specifies a property of <link ICursorProp>. */

	_PROPTYPE_FLOAT, /* specifies a property of <link INumberFloatProp>. */

	_PROPTYPE_HOTKEY, /* specifies a property of <link IHotkeyProp, IHotKeyProp>. */

	_PROPTYPE_FILLCOLOR /* specifies a property of <link IFillColorProp>. */

}enumPropType;


typedef
[
	uuid(FE329505-1827-44aa-B28E-2703C99F4D91),
	version(1.0),
	helpstring("DirectUI SkinRect Struct")
]
struct SkinRect
{
	long left;
	long top;
	long right;
	long bottom;
}SkinRect;


typedef
[
	uuid(3BACA356-E219-4257-8131-151957AB9FA5),
	version(1.0),
	helpstring("DirectUI DUIMsgID"),
	public
] 
enum DUIMsgID
{
	DUISM_RESKIN	 =	 0x0400 + 0x0001,		
	DUISM_REFRESH	=	 0x0400 + 0x0002,		
	DUISM_LBUTTONDOWN =  0x0400 + 0x0003,
	DUISM_LBUTTONUP =	0x0400 + 0x0004,
	DUISM_COMMAND	=	0x0400 + 0x0005,
	DUISM_TABITEMSELECTCHANGED =	0x0400 + 0x07D5,
	DUISM_RBUTTONDOWN	=	0x0400 + 0x07D6,
	DUISM_RBUTTONUP	=	0x0400 + 0x07D7,
	DUISM_SETTOOPTIP = 0x0400 + 0x07D8,
	DUISM_ONSETFOCUS	=	0x0400 + 0x07D9,
	DUISM_ONKILLFOCUS	 = 	0x0400 + 0x07DA,
	DUISM_INITOBJECT	 = 0x0400 + 0x0331,
	DUISM_INITDIALOG	 = 0x0400 + 0x0332,
	DUISM_DESTROYING = 0x0400 + 0x0333,
	DUISM_ENABLEOBJECT = 0x0400 + 0x0334,
	DUISM_CREATEPROP = 0x0400 + 0x0335,
	DUISM_ACCESSCONFIGED = 0x0400 + 0x0336,
	DUISM_EXPORTCONFIGED = 0x0400 + 0x0337,
	DUISM_CLONED = 0x0400 + 0x0338,
	DUISM_GETDRAGCURSOR = 0x0400 + 0x0339,
	DUISM_GETCONTROLICON = 0x0400 + 0x0340,
	DUISM_GETAUTHORINFO = 0x0400 + 0x0341,
	DUISM_GETCONTROLTYPENAME = 0x0400 + 0x0342,
	DUISM_GETCATEGORYNAME = 0x0400 + 0x0343,
	DUISM_DESTROYBMPPERPIXEL = 0x0400 + 0x0344,
	DUISM_MOUSEMOVE = 0x0400 + 0x0345,
	DUISM_LBUTTONDBCLICK = 0x0400 + 0x0346,
	DUISM_MOUSELEAVE = 0x0400 + 0x0347,
	DUISM_NOTIFYCHILDREN = 0x0400 + 0x0348,
	DUISM_SIZE = 0x0400 + 0x0350,
	DUISM_TIMER = 0x0400 + 0x0351,
	DUISM_CALLPROP = 0x0400 + 0x0352,
	DUISM_DESIGNSTATUSCHANGED = 0x0400 + 0x0353,
	DUISM_DRAWPREVIEW = 0x0400 + 0x0354,
	DUISM_FINALCREATE = 0x0400 + 0x0355,
	DUISM_IMPORTCONFIG = 0x0400 + 0x0356,
	DUISM_ISDRAGABLED = 0x0400 + 0x0357,
	DUISM_PROPCHANGEDNOTIFY = 0x0400 + 0x0358,
	DUISM_GETTABINFO = 0x0400 + 0x0359,
	DUISM_SETFOCUS	=	0x0400 + 0x0360,
	DUISM_KBHOOKPROC =	0x0400 + 0x0361,
	DUISM_HOOKPROC =	0x0400 + 0x0362,
	DUISM_MOUSEENTER = 0x0400 + 0x0363,
	DUISM_AUTORESIZE  =  0x400 + 0x364,
	DUISM_DISPOSEMOUSEMOVE = 0x400 + 0x366,
	DUISM_CHANGESKIN	= 0x400 + 0x367,
	DUISM_STARTDRAG	= 0x400 + 0x368,
	DUISM_ENDDRAG	= 0x400 + 0x369,
	DUISM_DRAGING =  0x400 + 0x370,
	DUISM_CHANGESKINSTART =  0x400 + 0x371,
	DUISM_CHANGELANGUAGE =  0x400 + 0x372,
	DUISM_AUTOLOADINIT =  0x400 + 0x373,
	DUISM_DUI_MESSAGE =  0x400 + 0x374,
	DUISM_SETRENDERDEVICED =  0x400 + 0x375

}DUIMsgID;


typedef
[
	uuid(58F2344A-34D9-4cc8-BE07-850091601448),
	version(1.0),
	helpstring("DirectUI DUINotify"),
	public
]
struct DUINotify
{
	DUIMsgID eDuiMsgId;
	LONG eWinMsgId;
	OLE_HANDLE		lParam1;
	OLE_HANDLE		lParam2;
	OLE_HANDLE		lParam3;
	OLE_HANDLE		lParam4;
	OLE_HANDLE		lParam5;
	VARIANT_BOOL bChildren;

}DUINotify;

typedef
[
	uuid(0F82FEC6-B850-419a-AB30-8C66B54A57D9),
	version(1.0),
	helpstring("DirectUI ImageBase Struct")
]
struct DUIImageBase
{
	BSTR strImagePath;
	SkinRect rect;
	SkinRect rcBorder;
	VARIANT_BOOL bStretch;
}DUIImageBase;


#endif //_DEFINES_H_INCLUDED_