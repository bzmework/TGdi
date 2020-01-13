// WinGdi.h : Declaration of the CWinGdi

#ifndef __WINGDI_H_
#define __WINGDI_H_

#include "resource.h"       // main symbols
#include "win32gdi.h"

#define GDIASSERT(p) if(!p) return S_FALSE

/////////////////////////////////////////////////////////////////////////////
// CWinGdi
class ATL_NO_VTABLE CWinGdi : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CWinGdi, &CLSID_WinGdi>,
	public IDispatchImpl<IWinGdi, &IID_IWinGdi, &LIBID_TGdi>
{
public:
	CWinGdi()
	{
		//
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_WINGDI)
	DECLARE_PROTECT_FINAL_CONSTRUCT()
	BEGIN_COM_MAP(CWinGdi)
		COM_INTERFACE_ENTRY(IWinGdi)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	//
	// 卸载所有对象
	//
	void FinalRelease()
	{	
		//
	}

private:
	
	//Convert char * to BSTR
	inline BSTR ConvertStringToBSTR(const char* pSrc)
	{
		if(!pSrc) return NULL;
		
		DWORD cwch;
		
		BSTR wsOut = NULL;
		
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
	
	//Convert BSTR to char *
	inline char* ConvertBSTRToString(BSTR pSrc)
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

// IWinGdi
public:

	//关于
	STDMETHOD(AboutMe)();

	//是否NT系统
	STDMETHOD(IsWinNT)(
	/*[out, retval]*/ VARIANT_BOOL *retVal
	);

	//是否XP及以后的操作系统
	STDMETHOD(IsWinXpOrLater)(
	/*[out, retval]*/ VARIANT_BOOL* retVal
	);

	//将对象选入设备环境"
	STDMETHOD(SelectObject)(
	/*[in]*/ long hDC, 
	/*[in]*/ long hObject, 
	/*[out, retval]*/ long *retVal
	);
	
	//删除对象
	STDMETHOD(DeleteObject)(
	/*[in]*/ long hObject, 
	/*[out, retval]*/ VARIANT_BOOL *retVal
	);

	//创建画刷
	STDMETHOD(CreateBrush)( 
	/*[in]*/ BrushTypeConstants enmBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants enmBrushStyle, 
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants enmBrushHatch, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrColor, 
	/*[in, defaultvalue(0)]*/ long hBitmap,
	/*[out, retval]*/ long *retVal
	);
	
	//创建字体
	STDMETHOD(CreateFont)(
	/*[in]*/ long hDC, 
	/*[in]*/ FontTypeConstants eFontType, 
	/*[in, defaultvalue("Arial")]*/ BSTR strFontName,
	/*[in, defaultvalue(9)]*/ int nFontSize,
	/*[in, defaultvalue(0)]*/ int nFontRotationDegrees, 
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontBold, 
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontItalic,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontUnderline,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontStrikethru,
	/*[in, defaultvalue(TRUE)]*/ VARIANT_BOOL bFontHighQuality,
	/*[out, retval]*/ long *retVal
	);

	//计算文本区域
	STDMETHOD(CalcTextArea)(
	/*[in]*/ long hDC, 
	/*[in]*/ BSTR strText, 
	/*[in, out, defaultvalue(0)]*/ int* nWidth, 
	/*[in, out, defaultvalue(0)]*/ int* nHeight,
	/*[in, defaultvalue(0)]*/ long hFont
	);

	//获得文本宽度
	STDMETHOD(TextWidth)(
	/*[in]*/ long hDC, 
	/*[in]*/ BSTR strText,
	/*[out, retval]*/ long *retVal
	);

	//获得文本高度
	STDMETHOD(TextHeight)(
	/*[in]*/ long hDC,
	/*[in]*/ BSTR strText,
	/*[out, retval]*/ long *retVal
	);

	//画文本
	STDMETHOD(DrawText)(
	/*[in]*/ long hDC, 
	/*[in]*/ BSTR strText,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrTextColor, 
	/*[in, defaultvalue(dtDefault)]*/ TextFormatConstants eFormat, 
	/*[in, defaultvalue(TRUE)]*/ VARIANT_BOOL bEnabled,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bUseCustomFont,
	/*[in, defaultvalue(ftIndirectFont)]*/ FontTypeConstants eFontType, 
	/*[in, defaultvalue("Arial")]*/ BSTR strFontName, 
	/*[in, defaultvalue(9)]*/ int nFontSize, 
	/*[in, defaultvalue(0)]*/ int nFontRotationDegrees, 
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontBold,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontItalic,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontUnderline,
	/*[in, defaultvalue(FALSE)]*/ VARIANT_BOOL bFontStrikethru,
	/*[in, defaultvalue(TRUE)]*/ VARIANT_BOOL bFontHighQuality
	);

	//画控件形状。例如，复选框、单选框、最大化、最小化、关闭按扭、菜单箭头等
	STDMETHOD(DrawControl)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ FrameControlTypeConstants eType, 
	/*[in]*/ FrameControlStateConstants eState
	);

	//画控件边缘特效。例如：凹下、突起等
	STDMETHOD(DrawControlEdge)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ EdgeStyleConstants eStyle, 
	/*[in]*/ EdgeFlagConstants eFlags
	);

	//画线
	STDMETHOD(DrawLine)(
	/*[in]*/ long hDC,
	/*[in]*/ int X1,
	/*[in]*/ int Y1,
	/*[in]*/ int X2,
	/*[in]*/ int Y2,
	/*[in]*/ OLE_COLOR clrLineColor, 
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//画圆
	STDMETHOD(DrawCircle)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrFillColor, 
	/*[in]*/ OLE_COLOR clrBorderColor,
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//画边框
	STDMETHOD(DrawBorder)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR crBorderColor, 
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(1)]*/ int nBorderWidth
	);

	//画区域
	STDMETHOD(DrawArea)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrAreaColor, 
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch, 
	/*[in, defaultvalue(0)]*/ long hAreaBitmap
	);

	//拷贝区域
	STDMETHOD(CopyArea)(
	/*[in]*/ long hDestDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ long hSrcDC, 
	/*[in]*/ int SrcX, 
	/*[in]*/ int SrcY, 
	/*[in]*/ int nSrcWidth, 
	/*[in]*/ int nSrcHeight
	);

	//画区域及边框
	STDMETHOD(DrawBox)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight, 
	/*[in]*/ OLE_COLOR clrFillColor,
	/*[in]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(0)]*/ long hFillBitmap,
	/*[in, defaultvalue(1)]*/ int nBorderWidth
	);

	//画透明区域及边框
	STDMETHOD(DrawAlphaBox)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight, 
	/*[in]*/ OLE_COLOR clrFillColor,
	/*[in]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(0)]*/ long hFillBitmap,
	/*[in, defaultvalue(1)]*/ int nBorderWidth, 
	/*[in, defaultvalue(100)]*/ byte nAlpha
	);

	//画圆角边框
	STDMETHOD(DrawRoundBorder)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(2)]*/ int nRoundValue, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR crBorderColor, 
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(1)]*/ int nBorderWidth
	);

	//画圆角形区域
	STDMETHOD(DrawRoundArea)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(2)]*/ int nRoundValue, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrAreaColor, 
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch, 
	/*[in, defaultvalue(0)]*/ long hAreaBitmap
	);

	//画圆角区域及边框
	STDMETHOD(DrawRoundBox)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight, 
	/*[in, defaultvalue(2)]*/ int nRoundValue, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrFillColor,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ptSolidPen)] */PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(0)]*/ long hFillBitmap,
	/*[in, defaultvalue(1)]*/ int nBorderWidth
	);

	//画透明圆角区域及边框
	STDMETHOD(DrawAlphaRoundBox)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight, 
	/*[in, defaultvalue(2)]*/ int nRoundValue, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrFillColor,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(btSolidBrush)]*/ BrushTypeConstants eBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants eBrushStyle,
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants eBrushHatch,
	/*[in, defaultvalue(ptSolidPen)]*/ PenTypeConstants ePenType,
	/*[in, defaultvalue(psSolid)]*/ PenStyleConstants ePenStyle, 
	/*[in, defaultvalue(0)]*/ long hFillBitmap,
	/*[in, defaultvalue(1)]*/ int nBorderWidth, 
	/*[in, defaultvalue(100)]*/ byte nAlpha
	);

	//画多边形区域
	STDMETHOD(DrawPolyArea)(
	/*[in]*/ long hDC, 
	/*[in]*/ SAFEARRAY* *tPt, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrFillColor,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(1)]*/ int nBorderWidth
	);

	//画焦点
	STDMETHOD(DrawFocus)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight
	);

	//画复选钩
	STDMETHOD(DrawCheck)(
	/*[in]*/ long hDC,
	/*[in]*/ int X , 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//画箭头
	STDMETHOD(DrawArrow)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(adEast)]*/ ArrowDirectionConstants eDirection,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor
	);

	//画关闭
	STDMETHOD(DrawClose)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(8)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(2)]*/ int nLineWidth
	);

	//画还原
	STDMETHOD(DrawRestore)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(10)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//画最大化
	STDMETHOD(DrawMax)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(8)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//画最小化
	STDMETHOD(DrawMin)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(8)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//画数字
	STDMETHOD(DrawDigit)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nDigit,
	/*[in, defaultvalue(3)]*/ int nWidth,
	/*[in, defaultvalue(0x0000FF)]*/ OLE_COLOR clrColor
	);

	//画字符
	STDMETHOD(DrawCharacter)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ BSTR strLetter,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor
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
	/*[in]*/ GradientDirectionConstants eDirection);

	//画透明渐变
	STDMETHOD(DrawAlphaGradient)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrStartColor, 
	/*[in]*/ OLE_COLOR clrEndColor, 
	/*[in]*/ GradientDirectionConstants eDirection,
	/*[in, defaultvalue(100)]*/ byte nAlpha
	);

	//位图透明拷贝(需要遮罩图片)
	STDMETHOD(TransparentPaintImage)(
	/*[in]*/ long hDestDC,
	/*[in]*/ int xDest, 
	/*[in]*/ int yDest, 
	/*[in]*/ long hImage, 
	/*[in]*/ long hMask
	);

	//位图透明拷贝(采用TransparentBlt API)
	STDMETHOD(TransparentPaintArea)( 
	/*[in]*/ long hDestDC, 
	/*[in]*/ int xDest, 
	/*[in]*/ int yDest, 
	/*[in]*/ int nDestWidth, 
	/*[in]*/ int nDestHeight, 
	/*[in]*/ long hSrcDC, 
	/*[in]*/ int xSrc, 
	/*[in]*/ int ySrc, 
	/*[in]*/ int nSrcWidth, 
	/*[in]*/ int nSrcHeight, 
	/*[in]*/ OLE_COLOR clrTransparentColor
	);

	//位图透明拷贝(采用AlphaBlend API)
	STDMETHOD(TransparentPaintAlpha)(
	/*[in]*/ long hDestDC, 
	/*[in]*/ int xDest,
	/*[in]*/ int yDest, 
	/*[in]*/ int nDestWidth, 
	/*[in]*/ int nDestHeight, 
	/*[in]*/ long hSrcDC, 
	/*[in]*/ int xSrc,
	/*[in]*/ int ySrc, 
	/*[in]*/ int nSrcWidth, 
	/*[in]*/ int nSrcHeight,
	/*[in, defaultvalue(100)]*/ byte nAlpha
	);

	//画资源图标
	STDMETHOD(DrawResIcon)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ IconNameConstants eIconName
	);

	//画图标
	STDMETHOD(DrawIcon)(
	/*[in]*/ long hDC,
	/*[in]*/ long hIcon, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ VARIANT_BOOL bEnabled,
	/*[in]*/ OLE_COLOR clrDisabledColor
	);

	//画图片
	STDMETHOD(DrawImage)(
	/*[in]*/ long hDC,
	/*[in]*/ long hImage,
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ ImageLayoutConstants eLayout
	);

	//画透明位图或图标
	STDMETHOD(DrawPic)(
	/*[in]*/ long hDC, 
	/*[in]*/ long hPic,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrMaskColor, 
	/*[in]*/ OLE_COLOR clrDisabledColor,
	/*[in]*/ VARIANT_BOOL bEnabled
	);

	//颜色混合
	STDMETHOD(BlendColor)(
	/*[in]*/ OLE_COLOR clrForeColor,
	/*[in] */OLE_COLOR clrBackColor,
	/*[in]*/ byte nAlpha,
	/*[out, retval]*/ long *retVal
	);

	//颜色透明
	STDMETHOD(AlphaColor)(
	/*[in]*/ OLE_COLOR clrColor, 
	/*[in]*/ byte nAlpha,
	/*[out, retval]*/ long *retVal
	);

	//颜色反转
	STDMETHOD(ReverseColor)(
	/*[in]*/ OLE_COLOR clrColor,
	/*[out, retval]*/ long *retVal
	);

	//转换颜色
	STDMETHOD(TranslateColor)(
	/*[in]*/ OLE_COLOR clrColor, 
	/*[in, defaultvalue(0)]*/ long hPal,
	/*[out, retval]*/ long *retVal
	);

};

#endif //__WINGDI_H_
