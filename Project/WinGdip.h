// WinGdip.h : Declaration of the CWinGdip

#ifndef __WINGDIP_H_
#define __WINGDIP_H_

#include "resource.h"       // main symbols
#include "win32gdip.h"

#define GDIASSERT(p) if(!p) return S_FALSE

/////////////////////////////////////////////////////////////////////////////
// CWinGdip
class ATL_NO_VTABLE CWinGdip : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CWinGdip, &CLSID_WinGdip>,
	public IDispatchImpl<IWinGdip, &IID_IWinGdip, &LIBID_TGdi>
{
public:
	CWinGdip()
	{
		m_Gdip = new Win32GDIP();
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_WINGDIP)
	DECLARE_PROTECT_FINAL_CONSTRUCT()
	BEGIN_COM_MAP(CWinGdip)
		COM_INTERFACE_ENTRY(IWinGdip)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	//
	// 卸载所有对象
	//
	void FinalRelease()
	{	
		m_Gdip->ShutDown();
		delete m_Gdip;
	}

private:
	
	//Convert char * to wchar_t(BSTR)
	inline wchar_t* CA2W(const char* pSrc)
	{
		if(!pSrc) return NULL;
		
		DWORD cwch;
		wchar_t* wsOut = NULL;
		
		if(cwch = ::MultiByteToWideChar(CP_ACP, 0, pSrc, -1, NULL, 0))//get size minus NULL terminator
		{
			cwch--;
			wsOut = ::SysAllocStringLen(NULL, cwch);
			
			if(wsOut)
			{
				if(!::MultiByteToWideChar(CP_ACP, 0, pSrc, -1, wsOut, cwch))
				{
					if(ERROR_INSUFFICIENT_BUFFER == ::GetLastError())
						return wsOut;
					::SysFreeString(wsOut);//must clean up
					wsOut = NULL;
				}
			}
			
		};
		
		return wsOut;
	};
	
	//Convert wchar_t(BSTR) to char *
	inline char* CW2A(wchar_t* pSrc)
	{
		if(!pSrc) return NULL;
		
		DWORD cb,cwch = ::SysStringLen(pSrc);//convert even embeded NULL
		
		char *szOut = NULL;
		
		if(cb = ::WideCharToMultiByte(CP_ACP, 0, pSrc, cwch + 1, NULL, 0, 0, 0))
		{
			szOut = new char[cb];
			if(szOut)
			{
				szOut[cb - 1]  = '\0';
				
				if(!::WideCharToMultiByte(CP_ACP, 0, pSrc, cwch + 1, szOut, cb, 0, 0))
				{
					delete[] szOut;//clean up if failed;
					szOut = NULL;
				}
			}
		}
		
		return szOut;
	};

private:
	
	Win32GDIP *m_Gdip;

// IWinGdip
public:

	//关于
	STDMETHOD(AboutMe)();

	//GDI+是否已经启动
	STDMETHOD(get_HasStarted)(
	/*[out, retval]*/ VARIANT_BOOL *retVal
	);

	//启动GDI+
	STDMETHOD(Startup)(
	/*[out, retval]*/ VARIANT_BOOL *retVal
	);
	
	//关闭GDI+
	STDMETHOD(Shutdown)();
	
	//设置平滑模式
	STDMETHOD(SetSmoothingMode)(
		/*[in, defaultvalue(psmAntiAlias)]*/ GdipSmoothingModeConstants eMode
	);

	//画圆
	STDMETHOD(DrawCircle)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrFillColor, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrHatchColor,
	/*[in, defaultvalue(pbtSolidColor)]*/ GdipBrushTypeConstants eBrushType,
	/*[in, defaultvalue(phsHorizontal)]*/ GdipBrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(0)]*/ float fAngle,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);
 
	//画线
	STDMETHOD(DrawLine)(
	/*[in]*/ long hDC,
	/*[in]*/ int X1,
	/*[in]*/ int Y1,
	/*[in]*/ int X2,
	/*[in]*/ int Y2,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrLineColor, 
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(plcFlat)]*/ GdipLineCapConstants eStartCap,
	/*[in, defaultvalue(plcFlat)]*/ GdipLineCapConstants eEndCap,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画弧线
	STDMETHOD(DrawArc)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ float fStartAngle,
	/*[in]*/ float fSweepAngle,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrLineColor, 
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画贝塞尔曲线
	STDMETHOD(DrawBezier)(
	/*[in]*/ long hDC,
	/*[in]*/ int X1,
	/*[in]*/ int Y1,
	/*[in]*/ int X2,
	/*[in]*/ int Y2,
	/*[in]*/ int X3,
	/*[in]*/ int Y3,
	/*[in]*/ int X4,
	/*[in]*/ int Y4,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrLineColor, 
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画饼图
	STDMETHOD(DrawPie)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ float fStartAngle,
	/*[in]*/ float fSweepAngle,
	/*[in, defaultvalue(0xffffff)]*/ OLE_COLOR clrFillColor, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrHatchColor,
	/*[in, defaultvalue(pbtSolidColor)]*/ GdipBrushTypeConstants eBrushType,
	/*[in, defaultvalue(phsHorizontal)]*/ GdipBrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(0)]*/ float fAngle,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画区域
	STDMETHOD(DrawArea)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(0xffffff)]*/ OLE_COLOR clrFillColor, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrHatchColor,
	/*[in, defaultvalue(pbtSolidColor)]*/ GdipBrushTypeConstants eBrushType,
	/*[in, defaultvalue(phsHorizontal)]*/ GdipBrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画边框
	STDMETHOD(DrawBorder)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画区域及边框
	STDMETHOD(DrawBox)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(0xffffff)]*/ OLE_COLOR clrFillColor, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrHatchColor,
	/*[in, defaultvalue(pbtSolidColor)]*/ GdipBrushTypeConstants eBrushType,
	/*[in, defaultvalue(phsHorizontal)]*/ GdipBrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ppsSolid)]*/ GdipPenStyleConstants ePenStyle,
	/*[in, defaultvalue(1)]*/ int nLineWidth,
	/*[in, defaultvalue(0)]*/ float fAngle,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);
	
	//画渐变
	STDMETHOD(DrawGradient)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrStartColor, 
	/*[in]*/ OLE_COLOR clrEndColor, 
	/*[in, defaultvalue(pdHorizontal)]*/ GdipGradientDirectionConstants eDirection,
	/*[in, defaultvalue(0)]*/ float fAngle,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);

	//画文本
	STDMETHOD(DrawText)(
	/*[in]*/ long hDC,
	/*[in]*/ BSTR strText,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrTextColor, 
	/*[in, defaultvalue(ptfDefault)]*/ GdipTextFormatConstants eFormat,
	/*[in, defaultvalue(pthaLeft)]*/ GdipTextHAlignmentConstants eHAlignment,
	/*[in, defaultvalue(ptvaCenter)]*/ GdipTextVAlignmentConstants eVAlignment,
	/*[in, defaultvalue("Arial")]*/ BSTR strFontName,
	/*[in, defaultvalue(8)]*/ int nFontSize,
	/*[in, defaultvalue(0)]*/ int nFontRotationDegrees,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontBold,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontItalic,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontUnderline,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontStrikethru,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontHighQuality,
	/*[in, defaultvalue(255)]*/ unsigned char nAlpha
	);
 

};

#endif //__WINGDIP_H_
