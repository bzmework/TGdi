// WinGdi.cpp : Implementation of CWinGdi
#include "stdafx.h"
#include "TGdi.h"
#include "WinGdi.h"

/////////////////////////////////////////////////////////////////////////////
// CWinGdi

//����
STDMETHODIMP CWinGdi::AboutMe()
{
	MessageBox(NULL, ABOUTME, COPYRIGHT, MB_ICONWARNING | MB_OK);
	return S_OK;
}

//�Ƿ�NTϵͳ
STDMETHODIMP CWinGdi::IsWinNT(VARIANT_BOOL *retVal)
{
	*retVal = (BOOL)Win32GDI::IsWinNT();
	return S_OK;
}

//������ѡ���豸����"
STDMETHODIMP CWinGdi::SelectObject(
	long hDC, 
	long hObject, 
	long *retVal)
{
	*retVal = (long)Win32GDI::SelectAObject((HDC)hDC, (HGDIOBJ)hObject);
	return S_OK;
}


//ɾ������
STDMETHODIMP CWinGdi::DeleteObject(
	long hObject, 
	VARIANT_BOOL *retVal)
{
	*retVal = (VARIANT_BOOL)Win32GDI::DeleteAObject((HGDIOBJ)hObject);
	return S_OK;
}

//������ˢ
STDMETHODIMP CWinGdi::CreateBrush( 
	BrushTypeConstants enmBrushType,
	BrushStyleConstants enmBrushStyle, 
	BrushHatchConstants enmBrushHatch, 
	OLE_COLOR clrColor, 
	long hBitmap,
	long *retVal)
{
	HBRUSH hBrush;
	
	hBrush = Win32GDI::CreateABrush(
		(Win32GDI::BrushTypeConstants) enmBrushType, 
		(Win32GDI::BrushStyleConstants) enmBrushStyle, 
		(Win32GDI::BrushHatchConstants) enmBrushHatch, 
		(COLORREF) clrColor, 
		(HBITMAP) hBitmap);
	*retVal = (long)hBrush;
	
	return S_OK;
}

//��������
STDMETHODIMP CWinGdi::CreateFont(
	long hDC, 
	FontTypeConstants eFontType, 
	BSTR strFontName,
	int nFontSize,
	int nFontRotationDegrees, 
	VARIANT_BOOL bFontBold, 
	VARIANT_BOOL bFontItalic,
	VARIANT_BOOL bFontUnderline,
	VARIANT_BOOL bFontStrikethru,
	VARIANT_BOOL bFontHighQuality,
	long *retVal)
{
	HFONT hFont;
	//LPTSTR lpszFont = _com_util::ConvertBSTRToString(strFontName);
	LPTSTR lpszFont = ConvertBSTRToString(strFontName);

	hFont = Win32GDI::CreateAFont(
		(HDC) hDC,
		(Win32GDI::FontTypeConstants) eFontType,
		lpszFont,
		(UINT) nFontSize,
		(INT) nFontRotationDegrees,
		(BOOL) bFontBold,
		(BOOL) bFontItalic,
		(BOOL) bFontUnderline,
		(BOOL) bFontStrikethru,
		(BOOL) bFontHighQuality
		);
	*retVal = (long)hFont;
	
	if(lpszFont)
		delete[] lpszFont;

	return S_OK;
}

//�����ı�����
STDMETHODIMP CWinGdi::CalcTextArea(
	long hDC, 
	BSTR strText, 
	int* nWidth, 
	int* nHeight,
	long hFont)
{

	//Ҫʹ��_com_util::ConvertBSTRToString���������룺comsupp.lib #include <comutil.h>

	//_bstr_t��ת��BSTRʱ������_com_util::ConvertBSTRToString
	//_bstr_t b = strText;
	//LPTSTR lpszText = b; 

	//ע��ConvertBSTRToString��̬�����ڴ棬Ϊ��ֹ�ڴ�й©��ʹ����ɺ������delete[]ɾ�����μ�_bstr_t��
	//LPTSTR lpszText = _com_util::ConvertBSTRToString(strText);
	
	//�����Զ���ConvertBSTRToString
	LPTSTR lpszText = ConvertBSTRToString(strText);

	Win32GDI::CalcTextArea(
		(HDC) hDC,
		lpszText,
		(INT*) nWidth,
		(INT*) nHeight,
		(HFONT) hFont);

	if(lpszText)
		delete[] lpszText;
	
	return S_OK;
}

//����ı����
STDMETHODIMP CWinGdi::TextWidth(
	long hDC, 
	BSTR strText,
	long *retVal)
{
	//LPTSTR lpszText = _com_util::ConvertBSTRToString(strText);
	LPTSTR lpszText = ConvertBSTRToString(strText);

	*retVal = (long)Win32GDI::TextWidth(
		(HDC) hDC,
		lpszText);

	if(lpszText)
		delete[] lpszText;

	return S_OK;
}

//����ı��߶�
STDMETHODIMP CWinGdi::TextHeight(
	long hDC,
	BSTR strText,
	long *retVal)
{
	//LPTSTR lpszText = _com_util::ConvertBSTRToString(strText);
	LPTSTR lpszText = ConvertBSTRToString(strText);

	*retVal = (long)Win32GDI::TextHeight(
		(HDC) hDC,
		(LPTSTR) strText);

	if(lpszText)
		delete[] lpszText;

	return S_OK;
}

//���ı�
STDMETHODIMP CWinGdi::DrawText(
	long hDC, 
	BSTR strText,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrTextColor, 
	TextFormatConstants eFormat, 
	VARIANT_BOOL bEnabled,
	VARIANT_BOOL bUseCustomFont,
	FontTypeConstants eFontType, 
	BSTR strFontName, 
	int nFontSize, 
	int nFontRotationDegrees, 
	VARIANT_BOOL bFontBold,
	VARIANT_BOOL bFontItalic,
	VARIANT_BOOL bFontUnderline,
	VARIANT_BOOL bFontStrikethru,
	VARIANT_BOOL bFontHighQuality)
{
	//LPTSTR lpszText = _com_util::ConvertBSTRToString(strText);
	//LPTSTR lpszFont = _com_util::ConvertBSTRToString(strFontName);
	LPTSTR lpszText = ConvertBSTRToString(strText);
	LPTSTR lpszFont = ConvertBSTRToString(strFontName);

	Win32GDI::DrawAText(
		(HDC) hDC, 
		lpszText,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrTextColor, 
		(Win32GDI::TextFormatConstants) eFormat, 
		(BOOL) bEnabled,
		(BOOL) bUseCustomFont,
		(Win32GDI::FontTypeConstants) eFontType, 
		lpszFont, 
		(UINT) nFontSize, 
		(INT) nFontRotationDegrees, 
		(BOOL) bFontBold,
		(BOOL) bFontItalic,
		(BOOL) bFontUnderline,
		(BOOL) bFontStrikethru,
		(BOOL) bFontHighQuality);
	
	if(lpszText)
		delete[] lpszText;

	if(lpszFont)
		delete[] lpszFont;

	return S_OK;
}

//���ؼ���״�����磬��ѡ�򡢵�ѡ����󻯡���С�����رհ�Ť���˵���ͷ��
STDMETHODIMP CWinGdi::DrawControl(
	long hDC, 
	int X,
	int Y,
	int nWidth, 
	int nHeight,
	FrameControlTypeConstants eType, 
	FrameControlStateConstants eState)
{
	Win32GDI::DrawControl(
	(HDC) hDC,
	(INT) X,
	(INT) Y,
	(INT) nWidth,
	(INT) nHeight,
	(Win32GDI::FrameControlTypeConstants) eType,
	(Win32GDI::FrameControlStateConstants) eState);

	return S_OK;
}


//���ؼ���Ե��Ч�����磺���¡�ͻ���
STDMETHODIMP CWinGdi::DrawControlEdge(
	long hDC, 
	int X, 
	int Y,
	int nWidth, 
	int nHeight,
	EdgeStyleConstants eStyle, 
	EdgeFlagConstants eFlags)
{
	Win32GDI::DrawControlEdge(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(Win32GDI::EdgeStyleConstants) eStyle,
		(Win32GDI::EdgeFlagConstants) eFlags
		);
	
	return S_OK;
}

//����
STDMETHODIMP CWinGdi::DrawLine(
	long hDC,
	int X1,
	int Y1,
	int X2,
	int Y2,
	OLE_COLOR clrLineColor, 
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	int nLineWidth)
{
	Win32GDI::DrawLine(
		(HDC) hDC,
		(INT) X1,
		(INT) Y1,
		(INT) X2,
		(INT) Y2,
		(COLORREF) clrLineColor,
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(INT) nLineWidth
		);

	return S_OK;
}

//��Բ
STDMETHODIMP CWinGdi::DrawCircle(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch,
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	int nLineWidth)
{
	Win32GDI::DrawCircle(
	(HDC) hDC,
	(INT) X,
	(INT) Y,
	(INT) nWidth,
	(INT) nHeight,
	(COLORREF) clrFillColor, 
	(COLORREF) clrBorderColor,
	(Win32GDI::BrushTypeConstants) eBrushType,
	(Win32GDI::BrushStyleConstants) eBrushStyle,
	(Win32GDI::BrushHatchConstants) eBrushHatch,
	(Win32GDI::PenTypeConstants) ePenType,
	(Win32GDI::PenStyleConstants) ePenStyle, 
	(INT) nLineWidth);
 
	return S_OK;
}

//���߿�
STDMETHODIMP CWinGdi::DrawBorder(
	long hDC, 
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR crBorderColor, 
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	int nBorderWidth)
{
	Win32GDI::DrawBorder(
		(HDC) hDC, 
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) crBorderColor,
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(INT) nBorderWidth
		);

	return S_OK;
}

//������
STDMETHODIMP CWinGdi::DrawArea(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrAreaColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch, 
	long hAreaBitmap)
{
	Win32GDI::DrawArea(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrAreaColor, 
		(Win32GDI::BrushTypeConstants) eBrushType,
		(Win32GDI::BrushStyleConstants) eBrushStyle,
		(Win32GDI::BrushHatchConstants) eBrushHatch, 
		(HBITMAP) hAreaBitmap
		);

	return S_OK;
}

//��������
STDMETHODIMP CWinGdi::CopyArea(
	long hDestDC, 
	int X, 
	int Y, 
	int nWidth, 
	int nHeight,
	long hSrcDC, 
	int SrcX, 
	int SrcY, 
	int nSrcWidth, 
	int nSrcHeight)
{
	Win32GDI::CopyArea(
		(HDC) hDestDC, 
		(INT) X, 
		(INT) Y, 
		(INT) nWidth, 
		(INT) nHeight,
		(HDC) hSrcDC, 
		(INT) SrcX, 
		(INT) SrcY, 
		(INT) nSrcWidth, 
		(INT) nSrcHeight
		);

	return S_OK;
}

//�����򼰱߿�
STDMETHODIMP CWinGdi::DrawBox(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight, 
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch,
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	long hFillBitmap,
	int nBorderWidth)
{
	Win32GDI::DrawBox(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight, 
		(COLORREF) clrFillColor,
		(COLORREF) clrBorderColor, 
		(Win32GDI::BrushTypeConstants) eBrushType,
		(Win32GDI::BrushStyleConstants) eBrushStyle,
		(Win32GDI::BrushHatchConstants) eBrushHatch,
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(HBITMAP) hFillBitmap,
		(INT) nBorderWidth
		);

	return S_OK;
}

//��͸�����򼰱߿�
STDMETHODIMP CWinGdi::DrawAlphaBox(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight, 
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch,
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	long hFillBitmap,
	int nBorderWidth, 
	byte nAlpha)
{
	Win32GDI::DrawAlphaBox(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight, 
		(COLORREF) clrFillColor,
		(COLORREF) clrBorderColor, 
		(Win32GDI::BrushTypeConstants) eBrushType,
		(Win32GDI::BrushStyleConstants) eBrushStyle,
		(Win32GDI::BrushHatchConstants) eBrushHatch,
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(HBITMAP) hFillBitmap,
		(INT) nBorderWidth, 
		(BYTE) nAlpha
		);

	return S_OK;
}

//��Բ�Ǳ߿�
STDMETHODIMP CWinGdi::DrawRoundBorder(
	long hDC, 
	int X,
	int Y,
	int nWidth,
	int nHeight,
	int nRoundValue, 
	OLE_COLOR crBorderColor, 
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	int nBorderWidth)
{
	Win32GDI::DrawRoundBorder(
		(HDC) hDC, 
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(INT) nRoundValue, 
		(COLORREF) crBorderColor, 
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(INT) nBorderWidth
		);

	return S_OK;
}


//��Բ��������
STDMETHODIMP CWinGdi::DrawRoundArea(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	int nRoundValue, 
	OLE_COLOR clrAreaColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch, 
	long hAreaBitmap)
{
	Win32GDI::DrawRoundArea(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(INT) nRoundValue, 
		(COLORREF) clrAreaColor, 
		(Win32GDI::BrushTypeConstants) eBrushType,
		(Win32GDI::BrushStyleConstants) eBrushStyle,
		(Win32GDI::BrushHatchConstants) eBrushHatch, 
		(HBITMAP) hAreaBitmap
		);

	return S_OK;
}

//��Բ�����򼰱߿�
STDMETHODIMP CWinGdi::DrawRoundBox(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight, 
	int nRoundValue, 
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch,
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	long hFillBitmap,
	int nBorderWidth)
{
	Win32GDI::DrawRoundBox(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight, 
		(INT) nRoundValue, 
		(COLORREF) clrFillColor,
		(COLORREF) clrBorderColor, 
		(Win32GDI::BrushTypeConstants) eBrushType,
		(Win32GDI::BrushStyleConstants) eBrushStyle,
		(Win32GDI::BrushHatchConstants) eBrushHatch,
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(HBITMAP) hFillBitmap,
		(INT) nBorderWidth
		);

	return S_OK;
}

//��͸��Բ�����򼰱߿�
STDMETHODIMP CWinGdi::DrawAlphaRoundBox(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight, 
	int nRoundValue, 
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	BrushTypeConstants eBrushType,
	BrushStyleConstants eBrushStyle,
	BrushHatchConstants eBrushHatch,
	PenTypeConstants ePenType,
	PenStyleConstants ePenStyle, 
	long hFillBitmap,
	int nBorderWidth, 
	byte nAlpha)
{
	Win32GDI::DrawAlphaRoundBox(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight, 
		(INT) nRoundValue, 
		(COLORREF) clrFillColor,
		(COLORREF) clrBorderColor, 
		(Win32GDI::BrushTypeConstants) eBrushType,
		(Win32GDI::BrushStyleConstants) eBrushStyle,
		(Win32GDI::BrushHatchConstants) eBrushHatch,
		(Win32GDI::PenTypeConstants) ePenType,
		(Win32GDI::PenStyleConstants) ePenStyle, 
		(HBITMAP) hFillBitmap,
		(INT) nBorderWidth, 
		(BYTE) nAlpha
		);

	return S_OK;
}

//�����������
STDMETHODIMP CWinGdi::DrawPolyArea(
	long hDC, 
	SAFEARRAY* *tPt, 
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	int nBorderWidth)
{
	
	SAFEARRAY* p = *tPt;
	UINT nDims = p->cDims;//����ά��
	LONG nUbound = 0;//�����ϱ�
	LONG nLbound = 0;//�����±�
	LONG ix[2]; 
	TPoint v;//IDL�ӿ���ָ����SAFEARRAY(Point)���˴����붨�����Ҫ���ͣ�����ȡ����ȷ��ֵ��
	POINT *pt = new POINT[nDims];

	UINT n=0;
	LONG i=0;

	for (n=1; n<=nDims; n++)
	{
		SafeArrayGetUBound(p, n, &nUbound);
		SafeArrayGetLBound(p, n, &nLbound);
		for(i=nLbound; i<=nUbound; i++)
		{
			ix[1]=n;//n��
			ix[0]=i;//i��
			SafeArrayGetElement(p, ix, &v);
			
			(*pt).x = v.x;
			(*pt).y = v.y;
			pt++;
		}
	}
	
	Win32GDI::DrawPolyArea(
		(HDC) hDC, 
		pt, 
		(COLORREF) clrFillColor,
		(COLORREF) clrBorderColor, 
		(INT) nBorderWidth
		);
	
	delete[] pt;

	return S_OK;
}

//������
STDMETHODIMP CWinGdi::DrawFocus(
	long hDC, 
	int X, 
	int Y, 
	int nWidth, 
	int nHeight)
{
	Win32GDI::DrawFocus(
		(HDC) hDC, 
		(INT) X, 
		(INT) Y, 
		(INT) nWidth, 
		(INT) nHeight
		);
	
	return S_OK;
}

//����ѡ��
STDMETHODIMP CWinGdi::DrawCheck(
	long hDC,
	int X , 
	int Y, 
	int nWidth, 
	int nHeight, 
	OLE_COLOR clrColor,
	int nLineWidth)
{
	Win32GDI::DrawCheck(
		(HDC) hDC,
		(INT) X , 
		(INT) Y, 
		(INT) nWidth, 
		(INT) nHeight, 
		(COLORREF) clrColor,
		(INT) nLineWidth
		);

	return S_OK;
}


//����ͷ
STDMETHODIMP CWinGdi::DrawArrow(
	long hDC, 
	int X, 
	int Y, 
	int nWidth, 
	int nHeight,
	ArrowDirectionConstants eDirection,
	OLE_COLOR clrColor)
{
	Win32GDI::DrawArrow(
		(HDC) hDC, 
		(INT) X, 
		(INT) Y, 
		(INT) nWidth, 
		(INT) nHeight,
		(Win32GDI::ArrowDirectionConstants) eDirection,
		(COLORREF) clrColor
		);

	return S_OK;
}

//���ر�
STDMETHODIMP CWinGdi::DrawClose(
	long hDC, 
	int X, 
	int Y,
	int nSize,
	OLE_COLOR clrColor,
	int nLineWidth)
{
	Win32GDI::DrawClose(
		(HDC) hDC, 
		(INT) X, 
		(INT) Y,
		(INT) nSize,
		(COLORREF) clrColor,
		(INT) nLineWidth
		);

	return S_OK;
}

//����ԭ
STDMETHODIMP CWinGdi::DrawRestore(
	long hDC, 
	int X, 
	int Y,
	int nSize,
	OLE_COLOR clrColor,
	int nLineWidth)
{
	Win32GDI::DrawRestore(
		(HDC) hDC, 
		(INT) X, 
		(INT) Y,
		(INT) nSize,
		(COLORREF) clrColor,
		(INT) nLineWidth
		);

	return S_OK;
}

//�����
STDMETHODIMP CWinGdi::DrawMax(
	long hDC, 
	int X, 
	int Y,
	int nSize,
	OLE_COLOR clrColor,
	int nLineWidth)
{
	Win32GDI::DrawMax(
		(HDC) hDC, 
		(INT) X, 
		(INT) Y,
		(INT) nSize,
		(COLORREF) clrColor,
		(INT) nLineWidth
		);

	return S_OK;
}

//����С��
STDMETHODIMP CWinGdi::DrawMin(
	long hDC, 
	int X, 
	int Y,
	int nSize,
	OLE_COLOR clrColor,
	int nLineWidth)
{
	Win32GDI::DrawMin(
		(HDC) hDC, 
		(INT) X, 
		(INT) Y,
		(INT) nSize,
		(COLORREF) clrColor,
		(INT) nLineWidth
		);

	return S_OK;
}

//������
STDMETHODIMP CWinGdi::DrawDigit(
	long hDC,
	int X,
	int Y,
	int nDigit,
	int nWidth,
	OLE_COLOR clrColor)
{
	Win32GDI::DrawDigit(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nDigit,
		(INT) nWidth,
		(COLORREF) clrColor
		);

	return S_OK;
}

//���ַ�
STDMETHODIMP CWinGdi::DrawCharacter(
	long hDC,
	int X,
	int Y,
	BSTR strLetter,
	OLE_COLOR clrColor)
{
	//LPTSTR lpszText = _com_util::ConvertBSTRToString(strLetter);
	LPTSTR lpszText = ConvertBSTRToString(strLetter);

	Win32GDI::DrawCharacter(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		lpszText,
		(COLORREF) clrColor
		);
	
	if(lpszText)
		delete[] lpszText;

	return S_OK;
}

//������
STDMETHODIMP CWinGdi::DrawGradient(
	long hDC, 
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrStartColor, 
	OLE_COLOR clrEndColor, 
	GradientDirectionConstants eDirection)
{
	Win32GDI::DrawGradient(
		(HDC) hDC, 
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrStartColor, 
		(COLORREF) clrEndColor, 
		(Win32GDI::GradientDirectionConstants) eDirection
		);

	return S_OK;
}

//��͸������
STDMETHODIMP CWinGdi::DrawAlphaGradient(
	long hDC, 
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrStartColor, 
	OLE_COLOR clrEndColor, 
	GradientDirectionConstants eDirection,
	byte nAlpha)
{
	Win32GDI::DrawAlphaGradient(
		(HDC) hDC, 
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrStartColor, 
		(COLORREF) clrEndColor, 
		(Win32GDI::GradientDirectionConstants) eDirection,
		(BYTE) nAlpha
		);

	return S_OK;
}

//λͼ͸������(��Ҫ����ͼƬ)
STDMETHODIMP CWinGdi::TransparentPaintImage(
	long hDestDC,
	int xDest, 
	int yDest, 
	long hImage, 
	long hMask)
{
	Win32GDI::TransparentPaintImage(
		(HDC) hDestDC,
		(INT) xDest, 
		(INT) yDest, 
		(HBITMAP) hImage, 
		(HBITMAP) hMask
		);

	return S_OK;
}

//λͼ͸������(����TransparentBlt API)
STDMETHODIMP CWinGdi::TransparentPaintArea( 
	long hDestDC, 
	int xDest, 
	int yDest, 
	int nDestWidth, 
	int nDestHeight, 
	long hSrcDC, 
	int xSrc, 
	int ySrc, 
	int nSrcWidth, 
	int nSrcHeight, 
	OLE_COLOR clrTransparentColor)
{
	Win32GDI::TransparentPaintArea(
		(HDC) hDestDC, 
		(INT) xDest, 
		(INT) yDest, 
		(INT) nDestWidth, 
		(INT) nDestHeight, 
		(HDC) hSrcDC, 
		(INT) xSrc, 
		(INT) ySrc, 
		(INT) nSrcWidth, 
		(INT) nSrcHeight, 
		(COLORREF) clrTransparentColor
		);

	return S_OK;
}

//λͼ͸������(����AlphaBlend API)
STDMETHODIMP CWinGdi::TransparentPaintAlpha(
	long hDestDC, 
	int xDest,
	int yDest, 
	int nDestWidth, 
	int nDestHeight, 
	long hSrcDC, 
	int xSrc,
	int ySrc, 
	int nSrcWidth, 
	int nSrcHeight,
	byte nAlpha)
{
	Win32GDI::TransparentPaintAlpha(
		(HDC) hDestDC, 
		(INT) xDest,
		(INT) yDest, 
		(INT) nDestWidth, 
		(INT) nDestHeight, 
		(HDC) hSrcDC, 
		(INT) xSrc,
		(INT) ySrc, 
		(INT) nSrcWidth, 
		(INT) nSrcHeight,
		(BYTE) nAlpha
		);

	return S_OK;
}

//��ͼ��
STDMETHODIMP CWinGdi::DrawIcon(
	long hDC,
	long hIcon, 
	int X, 
	int Y, 
	VARIANT_BOOL bEnabled,
	OLE_COLOR clrDisenableColor)
{
	Win32GDI::DrawIcon(
		(HDC) hDC,
		(HGDIOBJ) hIcon, 
		(INT) X, 
		(INT) Y, 
		(BOOL) bEnabled,
		(COLORREF) clrDisenableColor
		);

	return S_OK;
}

//��ͼƬ
STDMETHODIMP CWinGdi::DrawImage(
	long hDC,
	long hImage,
	int X, 
	int Y, 
	int nWidth, 
	int nHeight,
	ImageLayoutConstants eLayout)
{
	Win32GDI::DrawImage(
		(HDC) hDC,
		(HGDIOBJ) hImage,
		(INT) X, 
		(INT) Y, 
		(INT) nWidth, 
		(INT) nHeight,
		(Win32GDI::ImageLayoutConstants) eLayout
		);

	return S_OK;
}


//��͸��λͼ��ͼ��
STDMETHODIMP CWinGdi::DrawPic(
	long hDC, 
	long hPic,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrMaskColor, 
	OLE_COLOR clrDisabledColor,
	VARIANT_BOOL bEnabled)
{
	Win32GDI::DrawPic(
		(HDC) hDC, 
		(HGDIOBJ) hPic,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrMaskColor, 
		(COLORREF) clrDisabledColor,
		(BOOL) bEnabled
		);

	return S_OK;
}

//��ɫ���
STDMETHODIMP CWinGdi::BlendColor(
	OLE_COLOR clrForeColor,
	OLE_COLOR clrBackColor,
	byte nAlpha,
	long *retVal)
{
	*retVal = (long)Win32GDI::BlendColor(
		(COLORREF) clrForeColor,
		(COLORREF) clrBackColor,
		(BYTE) nAlpha
		);

	return S_OK;
}

//��ɫ͸��
STDMETHODIMP CWinGdi::AlphaColor(
	OLE_COLOR clrColor, 
	byte nAlpha,
	long *retVal)
{
	*retVal = (long)Win32GDI::AlphaColor(
		(COLORREF) clrColor, 
		(BYTE) nAlpha
		);

	return S_OK;
}

//��ɫ��ת
STDMETHODIMP CWinGdi::ReverseColor(
	OLE_COLOR clrColor,
	long *retVal)
{
	*retVal = (long)Win32GDI::ReverseColor((COLORREF) clrColor);
	return S_OK;
}


//ת����ɫ
STDMETHODIMP CWinGdi::TranslateColor(
	OLE_COLOR clrColor, 
	long hPal,
	long *retVal)
{
	*retVal = (long)Win32GDI::TranslateColor(
		(COLORREF) clrColor, 
		(HPALETTE) hPal
		);
	
	return S_OK;
}
