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
	// ж�����ж���
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

	//����
	STDMETHOD(AboutMe)();

	//�Ƿ�NTϵͳ
	STDMETHOD(IsWinNT)(
	/*[out, retval]*/ VARIANT_BOOL *retVal
	);

	//�Ƿ�XP���Ժ�Ĳ���ϵͳ
	STDMETHOD(IsWinXpOrLater)(
	/*[out, retval]*/ VARIANT_BOOL* retVal
	);

	//������ѡ���豸����"
	STDMETHOD(SelectObject)(
	/*[in]*/ long hDC, 
	/*[in]*/ long hObject, 
	/*[out, retval]*/ long *retVal
	);
	
	//ɾ������
	STDMETHOD(DeleteObject)(
	/*[in]*/ long hObject, 
	/*[out, retval]*/ VARIANT_BOOL *retVal
	);

	//������ˢ
	STDMETHOD(CreateBrush)( 
	/*[in]*/ BrushTypeConstants enmBrushType,
	/*[in, defaultvalue(bsSolid)]*/ BrushStyleConstants enmBrushStyle, 
	/*[in, defaultvalue(hsSolid)]*/ BrushHatchConstants enmBrushHatch, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrColor, 
	/*[in, defaultvalue(0)]*/ long hBitmap,
	/*[out, retval]*/ long *retVal
	);
	
	//��������
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

	//�����ı�����
	STDMETHOD(CalcTextArea)(
	/*[in]*/ long hDC, 
	/*[in]*/ BSTR strText, 
	/*[in, out, defaultvalue(0)]*/ int* nWidth, 
	/*[in, out, defaultvalue(0)]*/ int* nHeight,
	/*[in, defaultvalue(0)]*/ long hFont
	);

	//����ı����
	STDMETHOD(TextWidth)(
	/*[in]*/ long hDC, 
	/*[in]*/ BSTR strText,
	/*[out, retval]*/ long *retVal
	);

	//����ı��߶�
	STDMETHOD(TextHeight)(
	/*[in]*/ long hDC,
	/*[in]*/ BSTR strText,
	/*[out, retval]*/ long *retVal
	);

	//���ı�
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

	//���ؼ���״�����磬��ѡ�򡢵�ѡ����󻯡���С�����رհ�Ť���˵���ͷ��
	STDMETHOD(DrawControl)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ FrameControlTypeConstants eType, 
	/*[in]*/ FrameControlStateConstants eState
	);

	//���ؼ���Ե��Ч�����磺���¡�ͻ���
	STDMETHOD(DrawControlEdge)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ EdgeStyleConstants eStyle, 
	/*[in]*/ EdgeFlagConstants eFlags
	);

	//����
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

	//��Բ
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

	//���߿�
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

	//������
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

	//��������
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

	//�����򼰱߿�
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

	//��͸�����򼰱߿�
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

	//��Բ�Ǳ߿�
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

	//��Բ��������
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

	//��Բ�����򼰱߿�
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

	//��͸��Բ�����򼰱߿�
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

	//�����������
	STDMETHOD(DrawPolyArea)(
	/*[in]*/ long hDC, 
	/*[in]*/ SAFEARRAY* *tPt, 
	/*[in, defaultvalue(0xFFFFFF)]*/ OLE_COLOR clrFillColor,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrBorderColor, 
	/*[in, defaultvalue(1)]*/ int nBorderWidth
	);

	//������
	STDMETHOD(DrawFocus)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight
	);

	//����ѡ��
	STDMETHOD(DrawCheck)(
	/*[in]*/ long hDC,
	/*[in]*/ int X , 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight, 
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//����ͷ
	STDMETHOD(DrawArrow)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in, defaultvalue(adEast)]*/ ArrowDirectionConstants eDirection,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor
	);

	//���ر�
	STDMETHOD(DrawClose)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(8)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(2)]*/ int nLineWidth
	);

	//����ԭ
	STDMETHOD(DrawRestore)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(10)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//�����
	STDMETHOD(DrawMax)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(8)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//����С��
	STDMETHOD(DrawMin)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X, 
	/*[in]*/ int Y,
	/*[in, defaultvalue(8)]*/ int nSize,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor,
	/*[in, defaultvalue(1)]*/ int nLineWidth
	);

	//������
	STDMETHOD(DrawDigit)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nDigit,
	/*[in, defaultvalue(3)]*/ int nWidth,
	/*[in, defaultvalue(0x0000FF)]*/ OLE_COLOR clrColor
	);

	//���ַ�
	STDMETHOD(DrawCharacter)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ BSTR strLetter,
	/*[in, defaultvalue(0x000000)]*/ OLE_COLOR clrColor
	);

	//������
	STDMETHOD(DrawGradient)(
	/*[in]*/ long hDC, 
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ OLE_COLOR clrStartColor, 
	/*[in]*/ OLE_COLOR clrEndColor, 
	/*[in]*/ GradientDirectionConstants eDirection);

	//��͸������
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

	//λͼ͸������(��Ҫ����ͼƬ)
	STDMETHOD(TransparentPaintImage)(
	/*[in]*/ long hDestDC,
	/*[in]*/ int xDest, 
	/*[in]*/ int yDest, 
	/*[in]*/ long hImage, 
	/*[in]*/ long hMask
	);

	//λͼ͸������(����TransparentBlt API)
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

	//λͼ͸������(����AlphaBlend API)
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

	//����Դͼ��
	STDMETHOD(DrawResIcon)(
	/*[in]*/ long hDC,
	/*[in]*/ int X,
	/*[in]*/ int Y,
	/*[in]*/ int nWidth,
	/*[in]*/ int nHeight,
	/*[in]*/ IconNameConstants eIconName
	);

	//��ͼ��
	STDMETHOD(DrawIcon)(
	/*[in]*/ long hDC,
	/*[in]*/ long hIcon, 
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ VARIANT_BOOL bEnabled,
	/*[in]*/ OLE_COLOR clrDisabledColor
	);

	//��ͼƬ
	STDMETHOD(DrawImage)(
	/*[in]*/ long hDC,
	/*[in]*/ long hImage,
	/*[in]*/ int X, 
	/*[in]*/ int Y, 
	/*[in]*/ int nWidth, 
	/*[in]*/ int nHeight,
	/*[in]*/ ImageLayoutConstants eLayout
	);

	//��͸��λͼ��ͼ��
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

	//��ɫ���
	STDMETHOD(BlendColor)(
	/*[in]*/ OLE_COLOR clrForeColor,
	/*[in] */OLE_COLOR clrBackColor,
	/*[in]*/ byte nAlpha,
	/*[out, retval]*/ long *retVal
	);

	//��ɫ͸��
	STDMETHOD(AlphaColor)(
	/*[in]*/ OLE_COLOR clrColor, 
	/*[in]*/ byte nAlpha,
	/*[out, retval]*/ long *retVal
	);

	//��ɫ��ת
	STDMETHOD(ReverseColor)(
	/*[in]*/ OLE_COLOR clrColor,
	/*[out, retval]*/ long *retVal
	);

	//ת����ɫ
	STDMETHOD(TranslateColor)(
	/*[in]*/ OLE_COLOR clrColor, 
	/*[in, defaultvalue(0)]*/ long hPal,
	/*[out, retval]*/ long *retVal
	);

};

#endif //__WINGDI_H_
