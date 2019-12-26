// WinGdip.cpp : Implementation of CWinGdip
#include "stdafx.h"
#include "TGdi.h"
#include "WinGdip.h"

/////////////////////////////////////////////////////////////////////////////
// CWinGdip

//关于
STDMETHODIMP CWinGdip::AboutMe()
{
	MessageBox(NULL, ABOUTME, COPYRIGHT, MB_ICONWARNING | MB_OK);
	return S_OK;
}

//GDI+是否已经启动
STDMETHODIMP CWinGdip::get_HasStarted(VARIANT_BOOL *retVal)
{
	*retVal = (m_Gdip->m_pGdiToken != NULL);
	return S_OK;
}

//启动GDI+
STDMETHODIMP CWinGdip::Startup(VARIANT_BOOL *retVal)
{
	*retVal = m_Gdip->Startup();
	return S_OK;
}

//关闭GDI+
STDMETHODIMP CWinGdip::Shutdown()
{
	m_Gdip->ShutDown();
	return S_OK;
}

//设置平滑模式
STDMETHODIMP CWinGdip::SetSmoothingMode(GdipSmoothingModeConstants eMode)
{
	m_Gdip->m_eSmoothingMode = (Gdiplus::SmoothingMode) eMode;
	return S_OK;
}

//画圆
STDMETHODIMP CWinGdip::DrawCircle(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrFillColor,
	OLE_COLOR clrBorderColor, 
	OLE_COLOR clrHatchColor,
	GdipBrushTypeConstants eBrushType,
	GdipBrushHatchConstants eBrushHatch,
	GdipPenStyleConstants ePenStyle,
	int nLineWidth,
	float fAngle,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawCircle(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrFillColor, 
		(COLORREF) clrBorderColor,
		(COLORREF) clrHatchColor,
		(Win32GDIP::BrushTypeConstants) eBrushType,
		(Win32GDIP::BrushHatchConstants) eBrushHatch,
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(INT) nLineWidth,
		(FLOAT) fAngle,
		(BYTE) nAlpha);
	
	return S_OK;
}

//画线
STDMETHODIMP CWinGdip::DrawLine(
	long hDC,
	int X1,
	int Y1,
	int X2,
	int Y2,
	OLE_COLOR clrLineColor, 
	GdipPenStyleConstants ePenStyle,
	GdipLineCapConstants eStartCap,
	GdipLineCapConstants eEndCap,
	int nLineWidth,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);
	
	m_Gdip->DrawLine(
		(HDC) hDC,
		(INT) X1,
		(INT) Y1,
		(INT) X2,
		(INT) Y2,
		(COLORREF) clrLineColor, 
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(Win32GDIP::LineCapConstants) eStartCap,
		(Win32GDIP::LineCapConstants) eEndCap,
		(INT) nLineWidth,
		(BYTE) nAlpha);

	return S_OK;
}

//画弧线
STDMETHODIMP CWinGdip::DrawArc(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	float fStartAngle,
	float fSweepAngle,
	OLE_COLOR clrLineColor, 
	GdipPenStyleConstants ePenStyle,
	int nLineWidth,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawArc(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(FLOAT) fStartAngle,
		(FLOAT) fSweepAngle,
		(COLORREF) clrLineColor, 
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(INT) nLineWidth,
		(BYTE) nAlpha);

	return S_OK;
}

//画贝塞尔曲线
STDMETHODIMP CWinGdip::DrawBezier(
	long hDC,
	int X1,
	int Y1,
	int X2,
	int Y2,
	int X3,
	int Y3,
	int X4,
	int Y4,
	OLE_COLOR clrLineColor, 
	GdipPenStyleConstants ePenStyle,
	int nLineWidth,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawBezier(
		(HDC) hDC,
		(INT) X1,
		(INT) Y1,
		(INT) X2,
		(INT) Y2,
		(INT) X3,
		(INT) Y3,
		(INT) X4,
		(INT) Y4,
		(COLORREF) clrLineColor, 
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(INT) nLineWidth,
		(BYTE) nAlpha);

	return S_OK;
}

//画饼图
STDMETHODIMP CWinGdip::DrawPie(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	float fStartAngle,
	float fSweepAngle,
	OLE_COLOR clrFillColor, 
	OLE_COLOR clrBorderColor, 
	OLE_COLOR clrHatchColor,
	GdipBrushTypeConstants eBrushType,
	GdipBrushHatchConstants eBrushHatch,
	GdipPenStyleConstants ePenStyle,
	int nLineWidth,
	float fAngle,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawPie(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(FLOAT) fStartAngle,
		(FLOAT) fSweepAngle,
		(COLORREF) clrFillColor, 
		(COLORREF) clrBorderColor, 
		(COLORREF) clrHatchColor,
		(Win32GDIP::BrushTypeConstants) eBrushType,
		(Win32GDIP::BrushHatchConstants) eBrushHatch,
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(INT) nLineWidth,
		(FLOAT) fAngle,
		(BYTE) nAlpha);

	return S_OK;
}

//画区域
STDMETHODIMP CWinGdip::DrawArea(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrFillColor, 
	OLE_COLOR clrHatchColor,
	GdipBrushTypeConstants eBrushType,
	GdipBrushHatchConstants eBrushHatch,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawArea(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrFillColor, 
		(COLORREF) clrHatchColor,
		(Win32GDIP::BrushTypeConstants) eBrushType,
		(Win32GDIP::BrushHatchConstants) eBrushHatch,
		(BYTE) nAlpha);
		
	return S_OK;
}

//画边框
STDMETHODIMP CWinGdip::DrawBorder(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrBorderColor, 
	GdipPenStyleConstants ePenStyle,
	int nLineWidth,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawBorder(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrBorderColor, 
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(INT) nLineWidth,
		(BYTE) nAlpha);

	return S_OK;
}

//画区域及边框
STDMETHODIMP CWinGdip::DrawBox(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrFillColor, 
	OLE_COLOR clrBorderColor, 
	OLE_COLOR clrHatchColor,
	GdipBrushTypeConstants eBrushType,
	GdipBrushHatchConstants eBrushHatch,
	GdipPenStyleConstants ePenStyle,
	int nLineWidth,
	float fAngle,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);
	
	m_Gdip->DrawBox(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(OLE_COLOR) clrFillColor, 
		(OLE_COLOR) clrBorderColor, 
		(OLE_COLOR) clrHatchColor,
		(Win32GDIP::BrushTypeConstants) eBrushType,
		(Win32GDIP::BrushHatchConstants) eBrushHatch,
		(Win32GDIP::PenStyleConstants) ePenStyle,
		(INT) nLineWidth,
		(FLOAT) fAngle,
		(BYTE) nAlpha);
	
	return S_OK;
}

//画渐变
STDMETHODIMP CWinGdip::DrawGradient(
	long hDC,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrStartColor, 
	OLE_COLOR clrEndColor, 
	GdipGradientDirectionConstants eDirection,
	float fAngle,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	m_Gdip->DrawGradient(
		(HDC) hDC,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrStartColor, 
		(COLORREF) clrEndColor, 
		(Win32GDIP::GradientDirectionConstants) eDirection,
		(FLOAT) fAngle,
		(BYTE) nAlpha);

	return S_OK;
}

//画文本
STDMETHODIMP CWinGdip::DrawText(
	long hDC,
	BSTR strText,
	int X,
	int Y,
	int nWidth,
	int nHeight,
	OLE_COLOR clrTextColor, 
	GdipTextFormatConstants eFormat,
	GdipTextHAlignmentConstants eHAlignment,
	GdipTextVAlignmentConstants eVAlignment,
	BSTR strFontName,
	int nFontSize,
	int nFontRotationDegrees,
	VARIANT_BOOL bFontBold,
	VARIANT_BOOL bFontItalic,
	VARIANT_BOOL bFontUnderline,
	VARIANT_BOOL bFontStrikethru,
	VARIANT_BOOL bFontHighQualit,
	unsigned char nAlpha)
{
	GDIASSERT(m_Gdip->m_pGdiToken);

	LPCWSTR lpszText = (LPCWSTR)strText;//ConvertBSTRToString(strText);
	LPCWSTR lpszFont = (LPCWSTR)strFontName;//ConvertBSTRToString(strFontName);

	m_Gdip->DrawText(
		(HDC) hDC,
		lpszText,
		(INT) X,
		(INT) Y,
		(INT) nWidth,
		(INT) nHeight,
		(COLORREF) clrTextColor, 
		(Win32GDIP::TextFormatConstants) eFormat,
		(Win32GDIP::TextHAlignmentConstants) eHAlignment,
		(Win32GDIP::TextVAlignmentConstants) eVAlignment,
		lpszFont,
		(INT) nFontSize,
		(INT) nFontRotationDegrees,
		(BOOL) bFontBold,
		(BOOL) bFontItalic,
		(BOOL) bFontUnderline,
		(BOOL) bFontStrikethru,
		(BOOL) bFontHighQualit,
		(BYTE) nAlpha);

	return S_OK;
}
 