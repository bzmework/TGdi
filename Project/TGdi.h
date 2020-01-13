

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for TGdi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TGdi_h__
#define __TGdi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWinGdi_FWD_DEFINED__
#define __IWinGdi_FWD_DEFINED__
typedef interface IWinGdi IWinGdi;

#endif 	/* __IWinGdi_FWD_DEFINED__ */


#ifndef __IWinGdip_FWD_DEFINED__
#define __IWinGdip_FWD_DEFINED__
typedef interface IWinGdip IWinGdip;

#endif 	/* __IWinGdip_FWD_DEFINED__ */


#ifndef __WinGdi_FWD_DEFINED__
#define __WinGdi_FWD_DEFINED__

#ifdef __cplusplus
typedef class WinGdi WinGdi;
#else
typedef struct WinGdi WinGdi;
#endif /* __cplusplus */

#endif 	/* __WinGdi_FWD_DEFINED__ */


#ifndef __WinGdip_FWD_DEFINED__
#define __WinGdip_FWD_DEFINED__

#ifdef __cplusplus
typedef class WinGdip WinGdip;
#else
typedef struct WinGdip WinGdip;
#endif /* __cplusplus */

#endif 	/* __WinGdip_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IWinGdi_INTERFACE_DEFINED__
#define __IWinGdi_INTERFACE_DEFINED__

/* interface IWinGdi */
/* [unique][helpstring][dual][uuid][object] */ 

typedef struct TPoint
    {
    /* [helpstring] */ int x;
    /* [helpstring] */ int y;
    } 	TPoint;

typedef /* [helpstring][v1_enum] */ 
enum BrushTypeConstants
    {
        btDefaultBrush	= 0,
        btSolidBrush	= 1,
        btIndirectBrush	= 2,
        btHatchBrush	= 3,
        btPatternBrush	= 4
    } 	BrushTypeConstants;

typedef /* [helpstring][v1_enum] */ 
enum BrushStyleConstants
    {
        bsSolid	= 0,
        bsNull	= 1,
        bsHatched	= 2,
        bsPattern	= 3,
        bsIndexed	= 4,
        bsDibPattern	= 5,
        bsDibPatternPt	= 6,
        bsPattern8x8	= 7,
        bsDibPattern8x8	= 8,
        bsMonoPattern	= 9,
        bsHollow	= 1
    } 	BrushStyleConstants;

typedef /* [helpstring][v1_enum] */ 
enum BrushHatchConstants
    {
        hsHorizontal	= 0,
        hsVertical	= 1,
        hsFdiagonal	= 2,
        hsBdiagonal	= 3,
        hsCross	= 4,
        hsDiagcross	= 5,
        hsSolid	= 8
    } 	BrushHatchConstants;

typedef /* [helpstring][v1_enum] */ 
enum PenTypeConstants
    {
        ptDefaultPen	= 0,
        ptSolidPen	= 1,
        ptIndirectPen	= 2
    } 	PenTypeConstants;

typedef /* [helpstring][v1_enum] */ 
enum PenStyleConstants
    {
        psSolid	= 0,
        psDash	= 1,
        psDot	= 2,
        psDashDot	= 3,
        psDashDotDot	= 4,
        psNull	= 5,
        psInsideFrame	= 6
    } 	PenStyleConstants;

typedef /* [helpstring][v1_enum] */ 
enum FontTypeConstants
    {
        ftDefaultFont	= 0,
        ftSystemFont	= 0x1,
        ftIndirectFont	= 0x2,
        ftExistFont	= 0x3
    } 	FontTypeConstants;

typedef /* [helpstring][v1_enum] */ 
enum GradientDirectionConstants
    {
        dHorizontal	= 0,
        dVertical	= 0x1
    } 	GradientDirectionConstants;

typedef /* [helpstring][v1_enum] */ 
enum TextFormatConstants
    {
        dtTop	= 0,
        dtLeft	= 0,
        dtCenter	= 0x1,
        dtRight	= 0x2,
        dtVCenter	= 0x4,
        dtBottom	= 0x8,
        dtWordBreak	= 0x10,
        dtSingleLine	= 0x20,
        dtExpandTabs	= 0x40,
        dtTabStop	= 0x80,
        dtNoClip	= 0x100,
        dtExternAlleading	= 0x200,
        dtCalcRect	= 0x400,
        dtNoPrefix	= 0x800,
        dtInternal	= 0x1000,
        dtEditControl	= 0x2000,
        dtPathEllipsis	= 0x4000,
        dtEndEllipsis	= 0x8000,
        dtModifyString	= 0x10000,
        dtRtLReading	= 0x20000,
        dtWordEllipsis	= 0x40000,
        dtNoFullWidthCharBreak	= 0x80000,
        dtHidePrefix	= 0x100000,
        dtPrefixOnly	= 0x200000,
        dtPLotter	= 0,
        dtRasDisplay	= 0x1,
        dtRasPrinter	= 0x2,
        dtRasCamera	= 0x3,
        dtCharStream	= 0x4,
        dtMetaFile	= 0x5,
        dtDispFile	= 0x6,
        dtDefault	= 0x24,
        dtDefault1	= 0x40024,
        dtDefault2	= 0x40025
    } 	TextFormatConstants;

typedef 
enum IconNameConstants
    {
        idApplication	= 0x7f00,
        idError	= 0x7f01,
        idQuestion	= 0x7f02,
        idWarning	= 0x7f03,
        idInformation	= 0x7f04,
        idWinlog	= 0x7f05
    } 	IconNameConstants;

typedef /* [helpstring][v1_enum] */ 
enum FrameControlTypeConstants
    {
        fctCaption	= 0x1,
        fctMenu	= 0x2,
        ftcScroll	= 0x3,
        fctButton	= 0x4,
        fctPopupMenu	= 0x5
    } 	FrameControlTypeConstants;

typedef /* [helpstring][v1_enum] */ 
enum FrameControlStateConstants
    {
        fcsCaptionClose	= 0,
        fcsCaptionMin	= 0x1,
        fcsCaptionMax	= 0x2,
        fcsCaptionRestore	= 0x3,
        fcsCaptionHelp	= 0x4,
        fcsMenuArrow	= 0,
        fcsMenuCheck	= 0x1,
        fcsMenuBullet	= 0x2,
        fcsMenuArrowRight	= 0x4,
        fcsScrollUp	= 0,
        fcsScrollDown	= 0x1,
        fcsScrollLeft	= 0x2,
        fcsScrollRight	= 0x3,
        fcsScrollComboBox	= 0x5,
        fcsScrollSizeGrip	= 0x8,
        fcsScrollSizeGripRight	= 0x10,
        fcsButtonCheck	= 0,
        fcsButtonRadioImage	= 0x1,
        fcsButtonRadioMask	= 0x2,
        fcsButtonRadion	= 0x4,
        fcsButton3State	= 0x8,
        fcsButtonPush	= 0x10,
        fcsAdjustRect	= 0x2000,
        fcsInActive	= 0x100,
        fctPushed	= 0x200,
        fcsChecked	= 0x400,
        fcsTransparent	= 0x800,
        fcsHot	= 0x1000,
        fcsFlat	= 0x4000,
        fcsMono	= 0x8000
    } 	FrameControlStateConstants;

typedef /* [helpstring][v1_enum] */ 
enum EdgeStyleConstants
    {
        esRaiseDouter	= 0x1,
        esSunkenOuter	= 0x2,
        esOuter	= 0x3,
        esRaisedInner	= 0x4,
        esRaised	= 0x5,
        esSunkenInner	= 0x8,
        esSunken	= 0xa,
        esInner	= 0xc
    } 	EdgeStyleConstants;

typedef /* [helpstring][v1_enum] */ 
enum EdgeFlagConstants
    {
        efLeft	= 0x1,
        efTop	= 0x2,
        efRight	= 0x4,
        efBottom	= 0x8,
        efDiagonal	= 0x10,
        efMiddle	= 0x800,
        efSoft	= 0x1000,
        efAdjust	= 0x2000,
        efFlat	= 0x4000,
        efMono	= 0x8000,
        efTopLeft	= 0x3,
        efTopRight	= 0x6,
        efBottomLeft	= 0x9,
        efBottomRight	= 0x12,
        efRect	= 0xf,
        efDiagonalEndBottomLeft	= 0x19,
        efDiagonalEndBottomRight	= 0x1c,
        efDiagonalEndTopLeft	= 0x13,
        efDiagonalEndTopRight	= 0x16
    } 	EdgeFlagConstants;

typedef /* [helpstring][v1_enum] */ 
enum ArrowDirectionConstants
    {
        adWest	= 0,
        adWestNorth	= 1,
        adNorth	= 2,
        adEastNorth	= 3,
        adEast	= 4,
        adEastSouth	= 5,
        adSouth	= 6,
        adWestSouth	= 7
    } 	ArrowDirectionConstants;

typedef /* [helpstring][v1_enum] */ 
enum ImageLayoutConstants
    {
        ilNone	= 0,
        ilTile	= 1,
        ilCenter	= 2,
        ilStretch	= 3,
        ilZoom	= 4
    } 	ImageLayoutConstants;


EXTERN_C const IID IID_IWinGdi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF3DE9B1-07D6-40D5-AF6C-FA3AA0D9D8FB")
    IWinGdi : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AboutMe( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsWinNT( 
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsWinXpOrLater( 
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectObject( 
            /* [in] */ long hDC,
            /* [in] */ long hObject,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteObject( 
            /* [in] */ long hObject,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateBrush( 
            /* [in] */ BrushTypeConstants enmBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants enmBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants enmBrushHatch,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ long hBitmap,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFont( 
            /* [in] */ long hDC,
            /* [in] */ FontTypeConstants eFontType,
            /* [defaultvalue][in] */ BSTR strFontName,
            /* [defaultvalue][in] */ int nFontSize,
            /* [defaultvalue][in] */ int nFontRotationDegrees,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontBold,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontItalic,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontUnderline,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontStrikethru,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontHighQuality,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CalcTextArea( 
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [defaultvalue][out][in] */ int *nWidth = 0,
            /* [defaultvalue][out][in] */ int *nHeight = 0,
            /* [defaultvalue][in] */ long hFont = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TextWidth( 
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TextHeight( 
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawText( 
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrTextColor = 0,
            /* [defaultvalue][in] */ TextFormatConstants eFormat = dtDefault,
            /* [defaultvalue][in] */ VARIANT_BOOL bEnabled = TRUE,
            /* [defaultvalue][in] */ VARIANT_BOOL bUseCustomFont = FALSE,
            /* [defaultvalue][in] */ FontTypeConstants eFontType = ftIndirectFont,
            /* [defaultvalue][in] */ BSTR strFontName = (BSTR)L"Arial",
            /* [defaultvalue][in] */ int nFontSize = 8,
            /* [defaultvalue][in] */ int nFontRotationDegrees = 0,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontBold = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontItalic = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontUnderline = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontStrikethru = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontHighQuality = FALSE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawControl( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ FrameControlTypeConstants eType,
            /* [in] */ FrameControlStateConstants eState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawControlEdge( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ EdgeStyleConstants eStyle,
            /* [in] */ EdgeFlagConstants eFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawLine( 
            /* [in] */ long hDC,
            /* [in] */ int X1,
            /* [in] */ int Y1,
            /* [in] */ int X2,
            /* [in] */ int Y2,
            /* [in] */ OLE_COLOR clrLineColor,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawCircle( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawBorder( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR crBorderColor,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ int nBorderWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawArea( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrAreaColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ long hAreaBitmap = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyArea( 
            /* [in] */ long hDestDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ long hSrcDC,
            /* [in] */ int SrcX,
            /* [in] */ int SrcY,
            /* [in] */ int nSrcWidth,
            /* [in] */ int nSrcHeight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawBox( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrFillColor,
            /* [in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ long hFillBitmap = 0,
            /* [defaultvalue][in] */ int nBorderWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawAlphaBox( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrFillColor,
            /* [in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ long hFillBitmap = 0,
            /* [defaultvalue][in] */ int nBorderWidth = 1,
            /* [defaultvalue][in] */ byte nAlpha = 100) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawRoundBorder( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue = 2,
            /* [defaultvalue][in] */ OLE_COLOR crBorderColor = 0,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ int nBorderWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawRoundArea( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue = 2,
            /* [defaultvalue][in] */ OLE_COLOR clrAreaColor = 0xffffff,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ long hAreaBitmap = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawRoundBox( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue = 2,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ long hFillBitmap = 0,
            /* [defaultvalue][in] */ int nBorderWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawAlphaRoundBox( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue = 2,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType = btSolidBrush,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle = bsSolid,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch = hsSolid,
            /* [defaultvalue][in] */ PenTypeConstants ePenType = ptSolidPen,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle = psSolid,
            /* [defaultvalue][in] */ long hFillBitmap = 0,
            /* [defaultvalue][in] */ int nBorderWidth = 1,
            /* [defaultvalue][in] */ byte nAlpha = 100) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawPolyArea( 
            /* [in] */ long hDC,
            /* [in] */ SAFEARRAY * *tPt,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ int nBorderWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawFocus( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawCheck( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0,
            /* [defaultvalue][in] */ int nLineWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawArrow( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ ArrowDirectionConstants eDirection = adEast,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawClose( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize = 8,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0,
            /* [defaultvalue][in] */ int nLineWidth = 2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawRestore( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize = 10,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0,
            /* [defaultvalue][in] */ int nLineWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawMax( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize = 8,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0,
            /* [defaultvalue][in] */ int nLineWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawMin( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize = 8,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0,
            /* [defaultvalue][in] */ int nLineWidth = 1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawDigit( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nDigit,
            /* [defaultvalue][in] */ int nWidth = 3,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0xff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawCharacter( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ BSTR strLetter,
            /* [defaultvalue][in] */ OLE_COLOR clrColor = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawGradient( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrStartColor,
            /* [in] */ OLE_COLOR clrEndColor,
            /* [in] */ GradientDirectionConstants eDirection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawAlphaGradient( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrStartColor,
            /* [in] */ OLE_COLOR clrEndColor,
            /* [in] */ GradientDirectionConstants eDirection,
            /* [defaultvalue][in] */ byte nAlpha = 100) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TransparentPaintImage( 
            /* [in] */ long hDestDC,
            /* [in] */ int xDest,
            /* [in] */ int yDest,
            /* [in] */ long hImage,
            /* [in] */ long hMask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TransparentPaintArea( 
            /* [in] */ long hDestDC,
            /* [in] */ int xDest,
            /* [in] */ int yDest,
            /* [in] */ int nDestWidth,
            /* [in] */ int nDestHeight,
            /* [in] */ long hSrcDC,
            /* [in] */ int xSrc,
            /* [in] */ int ySrc,
            /* [in] */ int nSrcWidth,
            /* [in] */ int nSrcHeight,
            /* [in] */ OLE_COLOR clrTransparentColor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TransparentPaintAlpha( 
            /* [in] */ long hDestDC,
            /* [in] */ int xDest,
            /* [in] */ int yDest,
            /* [in] */ int nDestWidth,
            /* [in] */ int nDestHeight,
            /* [in] */ long hSrcDC,
            /* [in] */ int xSrc,
            /* [in] */ int ySrc,
            /* [in] */ int nSrcWidth,
            /* [in] */ int nSrcHeight,
            /* [defaultvalue][in] */ byte nAlpha = 100) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawResIcon( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ IconNameConstants eIconName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawIcon( 
            /* [in] */ long hDC,
            /* [in] */ long hIcon,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ VARIANT_BOOL bEnabled,
            /* [in] */ OLE_COLOR clrDisabledColor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawImage( 
            /* [in] */ long hDC,
            /* [in] */ long hImage,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ ImageLayoutConstants eLayout) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawPic( 
            /* [in] */ long hDC,
            /* [in] */ long hPic,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrMaskColor = 0xff,
            /* [defaultvalue][in] */ OLE_COLOR clrDisabledColor = 0x808080,
            /* [defaultvalue][in] */ VARIANT_BOOL bEnabled = TRUE) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BlendColor( 
            /* [in] */ OLE_COLOR clrForeColor,
            /* [in] */ OLE_COLOR clrBackColor,
            /* [in] */ byte nAlpha,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AlphaColor( 
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ byte nAlpha,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReverseColor( 
            /* [in] */ OLE_COLOR clrColor,
            /* [retval][out] */ long *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TranslateColor( 
            /* [in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ long hPal,
            /* [retval][out] */ long *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWinGdiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWinGdi * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWinGdi * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWinGdi * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWinGdi * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWinGdi * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWinGdi * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWinGdi * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AboutMe )( 
            IWinGdi * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsWinNT )( 
            IWinGdi * This,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsWinXpOrLater )( 
            IWinGdi * This,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectObject )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ long hObject,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteObject )( 
            IWinGdi * This,
            /* [in] */ long hObject,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateBrush )( 
            IWinGdi * This,
            /* [in] */ BrushTypeConstants enmBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants enmBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants enmBrushHatch,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ long hBitmap,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFont )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ FontTypeConstants eFontType,
            /* [defaultvalue][in] */ BSTR strFontName,
            /* [defaultvalue][in] */ int nFontSize,
            /* [defaultvalue][in] */ int nFontRotationDegrees,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontBold,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontItalic,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontUnderline,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontStrikethru,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontHighQuality,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CalcTextArea )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [defaultvalue][out][in] */ int *nWidth,
            /* [defaultvalue][out][in] */ int *nHeight,
            /* [defaultvalue][in] */ long hFont);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TextWidth )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TextHeight )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawText )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrTextColor,
            /* [defaultvalue][in] */ TextFormatConstants eFormat,
            /* [defaultvalue][in] */ VARIANT_BOOL bEnabled,
            /* [defaultvalue][in] */ VARIANT_BOOL bUseCustomFont,
            /* [defaultvalue][in] */ FontTypeConstants eFontType,
            /* [defaultvalue][in] */ BSTR strFontName,
            /* [defaultvalue][in] */ int nFontSize,
            /* [defaultvalue][in] */ int nFontRotationDegrees,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontBold,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontItalic,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontUnderline,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontStrikethru,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontHighQuality);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawControl )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ FrameControlTypeConstants eType,
            /* [in] */ FrameControlStateConstants eState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawControlEdge )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ EdgeStyleConstants eStyle,
            /* [in] */ EdgeFlagConstants eFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawLine )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X1,
            /* [in] */ int Y1,
            /* [in] */ int X2,
            /* [in] */ int Y2,
            /* [in] */ OLE_COLOR clrLineColor,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawCircle )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawBorder )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR crBorderColor,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nBorderWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawArea )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrAreaColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ long hAreaBitmap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyArea )( 
            IWinGdi * This,
            /* [in] */ long hDestDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ long hSrcDC,
            /* [in] */ int SrcX,
            /* [in] */ int SrcY,
            /* [in] */ int nSrcWidth,
            /* [in] */ int nSrcHeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawBox )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrFillColor,
            /* [in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ long hFillBitmap,
            /* [defaultvalue][in] */ int nBorderWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawAlphaBox )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrFillColor,
            /* [in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ long hFillBitmap,
            /* [defaultvalue][in] */ int nBorderWidth,
            /* [defaultvalue][in] */ byte nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawRoundBorder )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue,
            /* [defaultvalue][in] */ OLE_COLOR crBorderColor,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nBorderWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawRoundArea )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue,
            /* [defaultvalue][in] */ OLE_COLOR clrAreaColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ long hAreaBitmap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawRoundBox )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ long hFillBitmap,
            /* [defaultvalue][in] */ int nBorderWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawAlphaRoundBox )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ int nRoundValue,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ BrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ BrushStyleConstants eBrushStyle,
            /* [defaultvalue][in] */ BrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ PenTypeConstants ePenType,
            /* [defaultvalue][in] */ PenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ long hFillBitmap,
            /* [defaultvalue][in] */ int nBorderWidth,
            /* [defaultvalue][in] */ byte nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawPolyArea )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ SAFEARRAY * *tPt,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ int nBorderWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawFocus )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawCheck )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawArrow )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ ArrowDirectionConstants eDirection,
            /* [defaultvalue][in] */ OLE_COLOR clrColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawClose )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawRestore )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawMax )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawMin )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [defaultvalue][in] */ int nSize,
            /* [defaultvalue][in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ int nLineWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawDigit )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nDigit,
            /* [defaultvalue][in] */ int nWidth,
            /* [defaultvalue][in] */ OLE_COLOR clrColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawCharacter )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ BSTR strLetter,
            /* [defaultvalue][in] */ OLE_COLOR clrColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawGradient )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrStartColor,
            /* [in] */ OLE_COLOR clrEndColor,
            /* [in] */ GradientDirectionConstants eDirection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawAlphaGradient )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrStartColor,
            /* [in] */ OLE_COLOR clrEndColor,
            /* [in] */ GradientDirectionConstants eDirection,
            /* [defaultvalue][in] */ byte nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TransparentPaintImage )( 
            IWinGdi * This,
            /* [in] */ long hDestDC,
            /* [in] */ int xDest,
            /* [in] */ int yDest,
            /* [in] */ long hImage,
            /* [in] */ long hMask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TransparentPaintArea )( 
            IWinGdi * This,
            /* [in] */ long hDestDC,
            /* [in] */ int xDest,
            /* [in] */ int yDest,
            /* [in] */ int nDestWidth,
            /* [in] */ int nDestHeight,
            /* [in] */ long hSrcDC,
            /* [in] */ int xSrc,
            /* [in] */ int ySrc,
            /* [in] */ int nSrcWidth,
            /* [in] */ int nSrcHeight,
            /* [in] */ OLE_COLOR clrTransparentColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TransparentPaintAlpha )( 
            IWinGdi * This,
            /* [in] */ long hDestDC,
            /* [in] */ int xDest,
            /* [in] */ int yDest,
            /* [in] */ int nDestWidth,
            /* [in] */ int nDestHeight,
            /* [in] */ long hSrcDC,
            /* [in] */ int xSrc,
            /* [in] */ int ySrc,
            /* [in] */ int nSrcWidth,
            /* [in] */ int nSrcHeight,
            /* [defaultvalue][in] */ byte nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawResIcon )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ IconNameConstants eIconName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawIcon )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ long hIcon,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ VARIANT_BOOL bEnabled,
            /* [in] */ OLE_COLOR clrDisabledColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawImage )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ long hImage,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ ImageLayoutConstants eLayout);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawPic )( 
            IWinGdi * This,
            /* [in] */ long hDC,
            /* [in] */ long hPic,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrMaskColor,
            /* [defaultvalue][in] */ OLE_COLOR clrDisabledColor,
            /* [defaultvalue][in] */ VARIANT_BOOL bEnabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BlendColor )( 
            IWinGdi * This,
            /* [in] */ OLE_COLOR clrForeColor,
            /* [in] */ OLE_COLOR clrBackColor,
            /* [in] */ byte nAlpha,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AlphaColor )( 
            IWinGdi * This,
            /* [in] */ OLE_COLOR clrColor,
            /* [in] */ byte nAlpha,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReverseColor )( 
            IWinGdi * This,
            /* [in] */ OLE_COLOR clrColor,
            /* [retval][out] */ long *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TranslateColor )( 
            IWinGdi * This,
            /* [in] */ OLE_COLOR clrColor,
            /* [defaultvalue][in] */ long hPal,
            /* [retval][out] */ long *retVal);
        
        END_INTERFACE
    } IWinGdiVtbl;

    interface IWinGdi
    {
        CONST_VTBL struct IWinGdiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWinGdi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWinGdi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWinGdi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWinGdi_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWinGdi_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWinGdi_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWinGdi_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWinGdi_AboutMe(This)	\
    ( (This)->lpVtbl -> AboutMe(This) ) 

#define IWinGdi_IsWinNT(This,retVal)	\
    ( (This)->lpVtbl -> IsWinNT(This,retVal) ) 

#define IWinGdi_IsWinXpOrLater(This,retVal)	\
    ( (This)->lpVtbl -> IsWinXpOrLater(This,retVal) ) 

#define IWinGdi_SelectObject(This,hDC,hObject,retVal)	\
    ( (This)->lpVtbl -> SelectObject(This,hDC,hObject,retVal) ) 

#define IWinGdi_DeleteObject(This,hObject,retVal)	\
    ( (This)->lpVtbl -> DeleteObject(This,hObject,retVal) ) 

#define IWinGdi_CreateBrush(This,enmBrushType,enmBrushStyle,enmBrushHatch,clrColor,hBitmap,retVal)	\
    ( (This)->lpVtbl -> CreateBrush(This,enmBrushType,enmBrushStyle,enmBrushHatch,clrColor,hBitmap,retVal) ) 

#define IWinGdi_CreateFont(This,hDC,eFontType,strFontName,nFontSize,nFontRotationDegrees,bFontBold,bFontItalic,bFontUnderline,bFontStrikethru,bFontHighQuality,retVal)	\
    ( (This)->lpVtbl -> CreateFont(This,hDC,eFontType,strFontName,nFontSize,nFontRotationDegrees,bFontBold,bFontItalic,bFontUnderline,bFontStrikethru,bFontHighQuality,retVal) ) 

#define IWinGdi_CalcTextArea(This,hDC,strText,nWidth,nHeight,hFont)	\
    ( (This)->lpVtbl -> CalcTextArea(This,hDC,strText,nWidth,nHeight,hFont) ) 

#define IWinGdi_TextWidth(This,hDC,strText,retVal)	\
    ( (This)->lpVtbl -> TextWidth(This,hDC,strText,retVal) ) 

#define IWinGdi_TextHeight(This,hDC,strText,retVal)	\
    ( (This)->lpVtbl -> TextHeight(This,hDC,strText,retVal) ) 

#define IWinGdi_DrawText(This,hDC,strText,X,Y,nWidth,nHeight,clrTextColor,eFormat,bEnabled,bUseCustomFont,eFontType,strFontName,nFontSize,nFontRotationDegrees,bFontBold,bFontItalic,bFontUnderline,bFontStrikethru,bFontHighQuality)	\
    ( (This)->lpVtbl -> DrawText(This,hDC,strText,X,Y,nWidth,nHeight,clrTextColor,eFormat,bEnabled,bUseCustomFont,eFontType,strFontName,nFontSize,nFontRotationDegrees,bFontBold,bFontItalic,bFontUnderline,bFontStrikethru,bFontHighQuality) ) 

#define IWinGdi_DrawControl(This,hDC,X,Y,nWidth,nHeight,eType,eState)	\
    ( (This)->lpVtbl -> DrawControl(This,hDC,X,Y,nWidth,nHeight,eType,eState) ) 

#define IWinGdi_DrawControlEdge(This,hDC,X,Y,nWidth,nHeight,eStyle,eFlags)	\
    ( (This)->lpVtbl -> DrawControlEdge(This,hDC,X,Y,nWidth,nHeight,eStyle,eFlags) ) 

#define IWinGdi_DrawLine(This,hDC,X1,Y1,X2,Y2,clrLineColor,ePenType,ePenStyle,nLineWidth)	\
    ( (This)->lpVtbl -> DrawLine(This,hDC,X1,Y1,X2,Y2,clrLineColor,ePenType,ePenStyle,nLineWidth) ) 

#define IWinGdi_DrawCircle(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,nLineWidth)	\
    ( (This)->lpVtbl -> DrawCircle(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,nLineWidth) ) 

#define IWinGdi_DrawBorder(This,hDC,X,Y,nWidth,nHeight,crBorderColor,ePenType,ePenStyle,nBorderWidth)	\
    ( (This)->lpVtbl -> DrawBorder(This,hDC,X,Y,nWidth,nHeight,crBorderColor,ePenType,ePenStyle,nBorderWidth) ) 

#define IWinGdi_DrawArea(This,hDC,X,Y,nWidth,nHeight,clrAreaColor,eBrushType,eBrushStyle,eBrushHatch,hAreaBitmap)	\
    ( (This)->lpVtbl -> DrawArea(This,hDC,X,Y,nWidth,nHeight,clrAreaColor,eBrushType,eBrushStyle,eBrushHatch,hAreaBitmap) ) 

#define IWinGdi_CopyArea(This,hDestDC,X,Y,nWidth,nHeight,hSrcDC,SrcX,SrcY,nSrcWidth,nSrcHeight)	\
    ( (This)->lpVtbl -> CopyArea(This,hDestDC,X,Y,nWidth,nHeight,hSrcDC,SrcX,SrcY,nSrcWidth,nSrcHeight) ) 

#define IWinGdi_DrawBox(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth)	\
    ( (This)->lpVtbl -> DrawBox(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth) ) 

#define IWinGdi_DrawAlphaBox(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth,nAlpha)	\
    ( (This)->lpVtbl -> DrawAlphaBox(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth,nAlpha) ) 

#define IWinGdi_DrawRoundBorder(This,hDC,X,Y,nWidth,nHeight,nRoundValue,crBorderColor,ePenType,ePenStyle,nBorderWidth)	\
    ( (This)->lpVtbl -> DrawRoundBorder(This,hDC,X,Y,nWidth,nHeight,nRoundValue,crBorderColor,ePenType,ePenStyle,nBorderWidth) ) 

#define IWinGdi_DrawRoundArea(This,hDC,X,Y,nWidth,nHeight,nRoundValue,clrAreaColor,eBrushType,eBrushStyle,eBrushHatch,hAreaBitmap)	\
    ( (This)->lpVtbl -> DrawRoundArea(This,hDC,X,Y,nWidth,nHeight,nRoundValue,clrAreaColor,eBrushType,eBrushStyle,eBrushHatch,hAreaBitmap) ) 

#define IWinGdi_DrawRoundBox(This,hDC,X,Y,nWidth,nHeight,nRoundValue,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth)	\
    ( (This)->lpVtbl -> DrawRoundBox(This,hDC,X,Y,nWidth,nHeight,nRoundValue,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth) ) 

#define IWinGdi_DrawAlphaRoundBox(This,hDC,X,Y,nWidth,nHeight,nRoundValue,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth,nAlpha)	\
    ( (This)->lpVtbl -> DrawAlphaRoundBox(This,hDC,X,Y,nWidth,nHeight,nRoundValue,clrFillColor,clrBorderColor,eBrushType,eBrushStyle,eBrushHatch,ePenType,ePenStyle,hFillBitmap,nBorderWidth,nAlpha) ) 

#define IWinGdi_DrawPolyArea(This,hDC,tPt,clrFillColor,clrBorderColor,nBorderWidth)	\
    ( (This)->lpVtbl -> DrawPolyArea(This,hDC,tPt,clrFillColor,clrBorderColor,nBorderWidth) ) 

#define IWinGdi_DrawFocus(This,hDC,X,Y,nWidth,nHeight)	\
    ( (This)->lpVtbl -> DrawFocus(This,hDC,X,Y,nWidth,nHeight) ) 

#define IWinGdi_DrawCheck(This,hDC,X,Y,nWidth,nHeight,clrColor,nLineWidth)	\
    ( (This)->lpVtbl -> DrawCheck(This,hDC,X,Y,nWidth,nHeight,clrColor,nLineWidth) ) 

#define IWinGdi_DrawArrow(This,hDC,X,Y,nWidth,nHeight,eDirection,clrColor)	\
    ( (This)->lpVtbl -> DrawArrow(This,hDC,X,Y,nWidth,nHeight,eDirection,clrColor) ) 

#define IWinGdi_DrawClose(This,hDC,X,Y,nSize,clrColor,nLineWidth)	\
    ( (This)->lpVtbl -> DrawClose(This,hDC,X,Y,nSize,clrColor,nLineWidth) ) 

#define IWinGdi_DrawRestore(This,hDC,X,Y,nSize,clrColor,nLineWidth)	\
    ( (This)->lpVtbl -> DrawRestore(This,hDC,X,Y,nSize,clrColor,nLineWidth) ) 

#define IWinGdi_DrawMax(This,hDC,X,Y,nSize,clrColor,nLineWidth)	\
    ( (This)->lpVtbl -> DrawMax(This,hDC,X,Y,nSize,clrColor,nLineWidth) ) 

#define IWinGdi_DrawMin(This,hDC,X,Y,nSize,clrColor,nLineWidth)	\
    ( (This)->lpVtbl -> DrawMin(This,hDC,X,Y,nSize,clrColor,nLineWidth) ) 

#define IWinGdi_DrawDigit(This,hDC,X,Y,nDigit,nWidth,clrColor)	\
    ( (This)->lpVtbl -> DrawDigit(This,hDC,X,Y,nDigit,nWidth,clrColor) ) 

#define IWinGdi_DrawCharacter(This,hDC,X,Y,strLetter,clrColor)	\
    ( (This)->lpVtbl -> DrawCharacter(This,hDC,X,Y,strLetter,clrColor) ) 

#define IWinGdi_DrawGradient(This,hDC,X,Y,nWidth,nHeight,clrStartColor,clrEndColor,eDirection)	\
    ( (This)->lpVtbl -> DrawGradient(This,hDC,X,Y,nWidth,nHeight,clrStartColor,clrEndColor,eDirection) ) 

#define IWinGdi_DrawAlphaGradient(This,hDC,X,Y,nWidth,nHeight,clrStartColor,clrEndColor,eDirection,nAlpha)	\
    ( (This)->lpVtbl -> DrawAlphaGradient(This,hDC,X,Y,nWidth,nHeight,clrStartColor,clrEndColor,eDirection,nAlpha) ) 

#define IWinGdi_TransparentPaintImage(This,hDestDC,xDest,yDest,hImage,hMask)	\
    ( (This)->lpVtbl -> TransparentPaintImage(This,hDestDC,xDest,yDest,hImage,hMask) ) 

#define IWinGdi_TransparentPaintArea(This,hDestDC,xDest,yDest,nDestWidth,nDestHeight,hSrcDC,xSrc,ySrc,nSrcWidth,nSrcHeight,clrTransparentColor)	\
    ( (This)->lpVtbl -> TransparentPaintArea(This,hDestDC,xDest,yDest,nDestWidth,nDestHeight,hSrcDC,xSrc,ySrc,nSrcWidth,nSrcHeight,clrTransparentColor) ) 

#define IWinGdi_TransparentPaintAlpha(This,hDestDC,xDest,yDest,nDestWidth,nDestHeight,hSrcDC,xSrc,ySrc,nSrcWidth,nSrcHeight,nAlpha)	\
    ( (This)->lpVtbl -> TransparentPaintAlpha(This,hDestDC,xDest,yDest,nDestWidth,nDestHeight,hSrcDC,xSrc,ySrc,nSrcWidth,nSrcHeight,nAlpha) ) 

#define IWinGdi_DrawResIcon(This,hDC,X,Y,nWidth,nHeight,eIconName)	\
    ( (This)->lpVtbl -> DrawResIcon(This,hDC,X,Y,nWidth,nHeight,eIconName) ) 

#define IWinGdi_DrawIcon(This,hDC,hIcon,X,Y,bEnabled,clrDisabledColor)	\
    ( (This)->lpVtbl -> DrawIcon(This,hDC,hIcon,X,Y,bEnabled,clrDisabledColor) ) 

#define IWinGdi_DrawImage(This,hDC,hImage,X,Y,nWidth,nHeight,eLayout)	\
    ( (This)->lpVtbl -> DrawImage(This,hDC,hImage,X,Y,nWidth,nHeight,eLayout) ) 

#define IWinGdi_DrawPic(This,hDC,hPic,X,Y,nWidth,nHeight,clrMaskColor,clrDisabledColor,bEnabled)	\
    ( (This)->lpVtbl -> DrawPic(This,hDC,hPic,X,Y,nWidth,nHeight,clrMaskColor,clrDisabledColor,bEnabled) ) 

#define IWinGdi_BlendColor(This,clrForeColor,clrBackColor,nAlpha,retVal)	\
    ( (This)->lpVtbl -> BlendColor(This,clrForeColor,clrBackColor,nAlpha,retVal) ) 

#define IWinGdi_AlphaColor(This,clrColor,nAlpha,retVal)	\
    ( (This)->lpVtbl -> AlphaColor(This,clrColor,nAlpha,retVal) ) 

#define IWinGdi_ReverseColor(This,clrColor,retVal)	\
    ( (This)->lpVtbl -> ReverseColor(This,clrColor,retVal) ) 

#define IWinGdi_TranslateColor(This,clrColor,hPal,retVal)	\
    ( (This)->lpVtbl -> TranslateColor(This,clrColor,hPal,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWinGdi_INTERFACE_DEFINED__ */


#ifndef __IWinGdip_INTERFACE_DEFINED__
#define __IWinGdip_INTERFACE_DEFINED__

/* interface IWinGdip */
/* [unique][helpstring][uuid][object] */ 

typedef /* [helpstring][v1_enum] */ 
enum GdipSmoothingModeConstants
    {
        psmInvalid	= -1,
        psmDefault	= 0,
        psmHighSpeed	= 1,
        psmHighQuality	= 2,
        psmNone	= 3,
        psmAntiAlias	= 4
    } 	GdipSmoothingModeConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipBrushTypeConstants
    {
        pbtSolidColor	= 0,
        pbtHatchFill	= 1,
        pbtGradientHorizontal	= 10,
        pbtGradientVertical	= 11,
        pbtGradientForwardDiagonal	= 12,
        pbtGradientBackwardDiagonal	= 13,
        pbtGradientAngle	= 14
    } 	GdipBrushTypeConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipBrushHatchConstants
    {
        phsHorizontal	= 0,
        phsVertical	= 1,
        phsForwardDiagonal	= 2,
        phsBackwardDiagonal	= 3,
        phsCross	= 4,
        phsDiagonalCross	= 5,
        phs05Percent	= 6,
        phs10Percent	= 7,
        phs20Percent	= 8,
        phs25Percent	= 9,
        phs30Percent	= 10,
        phs40Percent	= 11,
        phs50Percent	= 12,
        phs60Percent	= 13,
        phs70Percent	= 14,
        phs75Percent	= 15,
        phs80Percent	= 16,
        phs90Percent	= 17,
        phsLightDownwardDiagonal	= 18,
        phsLightUpwardDiagonal	= 19,
        phsDarkDownwardDiagonal	= 20,
        phsDarkUpwardDiagonal	= 21,
        phsWideDownwardDiagonal	= 22,
        phsWideUpwardDiagonal	= 23,
        phsLightVertical	= 24,
        phsLightHorizontal	= 25,
        phsNarrowVertical	= 26,
        phsNarrowHorizontal	= 27,
        phsDarkVertical	= 28,
        phsDarkHorizontal	= 29,
        phsDashedDownwardDiagonal	= 30,
        phsDashedUpwardDiagonal	= 31,
        phsDashedHorizontal	= 32,
        phsDashedVertical	= 33,
        phsSmallConfetti	= 34,
        phsLargeConfetti	= 35,
        phsZigZag	= 36,
        phsWave	= 37,
        phsDiagonalBrick	= 38,
        phsHorizontalBrick	= 39,
        phsWeave	= 40,
        phsPlaid	= 41,
        phsDivot	= 42,
        phsDottedGrid	= 43,
        phsDottedDiamond	= 44,
        phsShingle	= 45,
        phsTrellis	= 46,
        phsSphere	= 47,
        phsSmallGrid	= 48,
        phsSmallCheckerBoard	= 49,
        phsLargeCheckerBoard	= 50,
        phsOutlinedDiamond	= 51,
        phsSolidDiamond	= 52
    } 	GdipBrushHatchConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipPenStyleConstants
    {
        ppsSolid	= 0,
        ppsDash	= 1,
        ppsDot	= 2,
        ppsDashDot	= 3,
        ppsDashDotDot	= 4,
        ppsCustom	= 5
    } 	GdipPenStyleConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipLineCapConstants
    {
        plcFlat	= 0,
        plcSquare	= 1,
        plcRound	= 2,
        plcTriangle	= 3,
        plcNoAnchor	= 0x10,
        plcSquareAnchor	= 0x11,
        plcRoundAnchor	= 0x12,
        plcDiamondAnchor	= 0x13,
        plcArrowAnchor	= 0x14,
        plcCustom	= 0xff,
        plcAnchorMask	= 0xf0
    } 	GdipLineCapConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipGradientDirectionConstants
    {
        pdHorizontal	= 0,
        pdVertical	= 1,
        pdForwardDiagonal	= 2,
        pdBackwardDiagonal	= 3
    } 	GdipGradientDirectionConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipTextFormatConstants
    {
        ptfDefault	= 0,
        ptfDirectionRightToLeft	= 0x1,
        ptfDirectionVertical	= 0x2,
        ptfNoFitBlackBox	= 0x4,
        ptfNumberContextArabic	= 0x8,
        ptfDisableKashidaJustification	= 0x10,
        ptfDisplayFormatControl	= 0x20,
        ptfDisableKerning	= 0x40,
        ptfDisableLigatures	= 0x80,
        ptfLayoutLegacyBidi	= 0x100,
        ptfFlagsNoChanges	= 0x200,
        ptfNoFontFallback	= 0x400,
        ptfMeasureTrailingSpaces	= 0x800,
        ptfFlagsNoWrap	= 0x1000,
        ptfLineLimit	= 0x2000,
        ptfNoClip	= 0x4000
    } 	GdipTextFormatConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipTextHAlignmentConstants
    {
        pthaLeft	= 0,
        pthaCenter	= 1,
        pthaRight	= 2
    } 	GdipTextHAlignmentConstants;

typedef /* [helpstring][v1_enum] */ 
enum GdipTextVAlignmentConstants
    {
        ptvaTop	= 0,
        ptvaCenter	= 1,
        ptvaBottom	= 2
    } 	GdipTextVAlignmentConstants;


EXTERN_C const IID IID_IWinGdip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B78B3955-F0C3-47d3-A2E3-3881A2DF7AF1")
    IWinGdip : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AboutMe( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasStarted( 
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Startup( 
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSmoothingMode( 
            /* [defaultvalue][in] */ GdipSmoothingModeConstants eMode = psmAntiAlias) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawCircle( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor = 0,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType = pbtSolidColor,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch = phsHorizontal,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ float fAngle = 0,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawLine( 
            /* [in] */ long hDC,
            /* [in] */ int X1,
            /* [in] */ int Y1,
            /* [in] */ int X2,
            /* [in] */ int Y2,
            /* [defaultvalue][in] */ OLE_COLOR clrLineColor = 0,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ GdipLineCapConstants eStartCap = plcFlat,
            /* [defaultvalue][in] */ GdipLineCapConstants eEndCap = plcFlat,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawArc( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ float fStartAngle,
            /* [in] */ float fSweepAngle,
            /* [defaultvalue][in] */ OLE_COLOR clrLineColor = 0,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawBezier( 
            /* [in] */ long hDC,
            /* [in] */ int X1,
            /* [in] */ int Y1,
            /* [in] */ int X2,
            /* [in] */ int Y2,
            /* [in] */ int X3,
            /* [in] */ int Y3,
            /* [in] */ int X4,
            /* [in] */ int Y4,
            /* [defaultvalue][in] */ OLE_COLOR clrLineColor = 0,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawPie( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ float fStartAngle,
            /* [in] */ float fSweepAngle,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor = 0,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType = pbtSolidColor,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch = phsHorizontal,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ float fAngle = 0,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawArea( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor = 0,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType = pbtSolidColor,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch = phsHorizontal,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawBorder( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawBox( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor = 0xffffff,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor = 0,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor = 0,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType = pbtSolidColor,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch = phsHorizontal,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle = ppsSolid,
            /* [defaultvalue][in] */ int nLineWidth = 1,
            /* [defaultvalue][in] */ float fAngle = 0,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawGradient( 
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrStartColor,
            /* [in] */ OLE_COLOR clrEndColor,
            /* [defaultvalue][in] */ GdipGradientDirectionConstants eDirection = pdHorizontal,
            /* [defaultvalue][in] */ float fAngle = 0,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawText( 
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrTextColor,
            /* [defaultvalue][in] */ GdipTextFormatConstants eFormat = ptfDefault,
            /* [defaultvalue][in] */ GdipTextHAlignmentConstants eHAlignment = pthaLeft,
            /* [defaultvalue][in] */ GdipTextVAlignmentConstants eVAlignment = ptvaCenter,
            /* [defaultvalue][in] */ BSTR strFontName = (BSTR)L"Arial",
            /* [defaultvalue][in] */ int nFontSize = 8,
            /* [defaultvalue][in] */ int nFontRotationDegrees = 0,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontBold = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontItalic = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontUnderline = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontStrikethru = FALSE,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontHighQuality = FALSE,
            /* [defaultvalue][in] */ unsigned char nAlpha = 255) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWinGdipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWinGdip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWinGdip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWinGdip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWinGdip * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWinGdip * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWinGdip * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWinGdip * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AboutMe )( 
            IWinGdip * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasStarted )( 
            IWinGdip * This,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Startup )( 
            IWinGdip * This,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IWinGdip * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSmoothingMode )( 
            IWinGdip * This,
            /* [defaultvalue][in] */ GdipSmoothingModeConstants eMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawCircle )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ float fAngle,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawLine )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X1,
            /* [in] */ int Y1,
            /* [in] */ int X2,
            /* [in] */ int Y2,
            /* [defaultvalue][in] */ OLE_COLOR clrLineColor,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ GdipLineCapConstants eStartCap,
            /* [defaultvalue][in] */ GdipLineCapConstants eEndCap,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawArc )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ float fStartAngle,
            /* [in] */ float fSweepAngle,
            /* [defaultvalue][in] */ OLE_COLOR clrLineColor,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawBezier )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X1,
            /* [in] */ int Y1,
            /* [in] */ int X2,
            /* [in] */ int Y2,
            /* [in] */ int X3,
            /* [in] */ int Y3,
            /* [in] */ int X4,
            /* [in] */ int Y4,
            /* [defaultvalue][in] */ OLE_COLOR clrLineColor,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawPie )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ float fStartAngle,
            /* [in] */ float fSweepAngle,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ float fAngle,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawArea )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawBorder )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawBox )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [defaultvalue][in] */ OLE_COLOR clrFillColor,
            /* [defaultvalue][in] */ OLE_COLOR clrBorderColor,
            /* [defaultvalue][in] */ OLE_COLOR clrHatchColor,
            /* [defaultvalue][in] */ GdipBrushTypeConstants eBrushType,
            /* [defaultvalue][in] */ GdipBrushHatchConstants eBrushHatch,
            /* [defaultvalue][in] */ GdipPenStyleConstants ePenStyle,
            /* [defaultvalue][in] */ int nLineWidth,
            /* [defaultvalue][in] */ float fAngle,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawGradient )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrStartColor,
            /* [in] */ OLE_COLOR clrEndColor,
            /* [defaultvalue][in] */ GdipGradientDirectionConstants eDirection,
            /* [defaultvalue][in] */ float fAngle,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawText )( 
            IWinGdip * This,
            /* [in] */ long hDC,
            /* [in] */ BSTR strText,
            /* [in] */ int X,
            /* [in] */ int Y,
            /* [in] */ int nWidth,
            /* [in] */ int nHeight,
            /* [in] */ OLE_COLOR clrTextColor,
            /* [defaultvalue][in] */ GdipTextFormatConstants eFormat,
            /* [defaultvalue][in] */ GdipTextHAlignmentConstants eHAlignment,
            /* [defaultvalue][in] */ GdipTextVAlignmentConstants eVAlignment,
            /* [defaultvalue][in] */ BSTR strFontName,
            /* [defaultvalue][in] */ int nFontSize,
            /* [defaultvalue][in] */ int nFontRotationDegrees,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontBold,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontItalic,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontUnderline,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontStrikethru,
            /* [defaultvalue][in] */ VARIANT_BOOL bFontHighQuality,
            /* [defaultvalue][in] */ unsigned char nAlpha);
        
        END_INTERFACE
    } IWinGdipVtbl;

    interface IWinGdip
    {
        CONST_VTBL struct IWinGdipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWinGdip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWinGdip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWinGdip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWinGdip_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWinGdip_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWinGdip_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWinGdip_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWinGdip_AboutMe(This)	\
    ( (This)->lpVtbl -> AboutMe(This) ) 

#define IWinGdip_get_HasStarted(This,retVal)	\
    ( (This)->lpVtbl -> get_HasStarted(This,retVal) ) 

#define IWinGdip_Startup(This,retVal)	\
    ( (This)->lpVtbl -> Startup(This,retVal) ) 

#define IWinGdip_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define IWinGdip_SetSmoothingMode(This,eMode)	\
    ( (This)->lpVtbl -> SetSmoothingMode(This,eMode) ) 

#define IWinGdip_DrawCircle(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,clrHatchColor,eBrushType,eBrushHatch,ePenStyle,nLineWidth,fAngle,nAlpha)	\
    ( (This)->lpVtbl -> DrawCircle(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,clrHatchColor,eBrushType,eBrushHatch,ePenStyle,nLineWidth,fAngle,nAlpha) ) 

#define IWinGdip_DrawLine(This,hDC,X1,Y1,X2,Y2,clrLineColor,ePenStyle,eStartCap,eEndCap,nLineWidth,nAlpha)	\
    ( (This)->lpVtbl -> DrawLine(This,hDC,X1,Y1,X2,Y2,clrLineColor,ePenStyle,eStartCap,eEndCap,nLineWidth,nAlpha) ) 

#define IWinGdip_DrawArc(This,hDC,X,Y,nWidth,nHeight,fStartAngle,fSweepAngle,clrLineColor,ePenStyle,nLineWidth,nAlpha)	\
    ( (This)->lpVtbl -> DrawArc(This,hDC,X,Y,nWidth,nHeight,fStartAngle,fSweepAngle,clrLineColor,ePenStyle,nLineWidth,nAlpha) ) 

#define IWinGdip_DrawBezier(This,hDC,X1,Y1,X2,Y2,X3,Y3,X4,Y4,clrLineColor,ePenStyle,nLineWidth,nAlpha)	\
    ( (This)->lpVtbl -> DrawBezier(This,hDC,X1,Y1,X2,Y2,X3,Y3,X4,Y4,clrLineColor,ePenStyle,nLineWidth,nAlpha) ) 

#define IWinGdip_DrawPie(This,hDC,X,Y,nWidth,nHeight,fStartAngle,fSweepAngle,clrFillColor,clrBorderColor,clrHatchColor,eBrushType,eBrushHatch,ePenStyle,nLineWidth,fAngle,nAlpha)	\
    ( (This)->lpVtbl -> DrawPie(This,hDC,X,Y,nWidth,nHeight,fStartAngle,fSweepAngle,clrFillColor,clrBorderColor,clrHatchColor,eBrushType,eBrushHatch,ePenStyle,nLineWidth,fAngle,nAlpha) ) 

#define IWinGdip_DrawArea(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrHatchColor,eBrushType,eBrushHatch,nAlpha)	\
    ( (This)->lpVtbl -> DrawArea(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrHatchColor,eBrushType,eBrushHatch,nAlpha) ) 

#define IWinGdip_DrawBorder(This,hDC,X,Y,nWidth,nHeight,clrBorderColor,ePenStyle,nLineWidth,nAlpha)	\
    ( (This)->lpVtbl -> DrawBorder(This,hDC,X,Y,nWidth,nHeight,clrBorderColor,ePenStyle,nLineWidth,nAlpha) ) 

#define IWinGdip_DrawBox(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,clrHatchColor,eBrushType,eBrushHatch,ePenStyle,nLineWidth,fAngle,nAlpha)	\
    ( (This)->lpVtbl -> DrawBox(This,hDC,X,Y,nWidth,nHeight,clrFillColor,clrBorderColor,clrHatchColor,eBrushType,eBrushHatch,ePenStyle,nLineWidth,fAngle,nAlpha) ) 

#define IWinGdip_DrawGradient(This,hDC,X,Y,nWidth,nHeight,clrStartColor,clrEndColor,eDirection,fAngle,nAlpha)	\
    ( (This)->lpVtbl -> DrawGradient(This,hDC,X,Y,nWidth,nHeight,clrStartColor,clrEndColor,eDirection,fAngle,nAlpha) ) 

#define IWinGdip_DrawText(This,hDC,strText,X,Y,nWidth,nHeight,clrTextColor,eFormat,eHAlignment,eVAlignment,strFontName,nFontSize,nFontRotationDegrees,bFontBold,bFontItalic,bFontUnderline,bFontStrikethru,bFontHighQuality,nAlpha)	\
    ( (This)->lpVtbl -> DrawText(This,hDC,strText,X,Y,nWidth,nHeight,clrTextColor,eFormat,eHAlignment,eVAlignment,strFontName,nFontSize,nFontRotationDegrees,bFontBold,bFontItalic,bFontUnderline,bFontStrikethru,bFontHighQuality,nAlpha) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWinGdip_INTERFACE_DEFINED__ */



#ifndef __TGdi_LIBRARY_DEFINED__
#define __TGdi_LIBRARY_DEFINED__

/* library TGdi */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TGdi;

EXTERN_C const CLSID CLSID_WinGdi;

#ifdef __cplusplus

class DECLSPEC_UUID("F968F3E8-4AB0-451D-B176-6999E705A3FD")
WinGdi;
#endif

EXTERN_C const CLSID CLSID_WinGdip;

#ifdef __cplusplus

class DECLSPEC_UUID("FBE5E37F-C78C-4383-8788-E6D4DEB1E6E2")
WinGdip;
#endif
#endif /* __TGdi_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


