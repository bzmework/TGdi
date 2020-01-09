Attribute VB_Name = "modMain"
Option Explicit

Public Type tagInitCommonControlsEx
   lngSize As Long
   lngICC As Long
End Type
Public Declare Function InitCommonControlsEx Lib "comctl32.dll" (iccex As tagInitCommonControlsEx) As Boolean
Public Const ICC_USEREX_CLASSES = &H200

Public Sub Main()

   ' we need to call InitCommonControls before we
   ' can use XP visual styles.  Here I'm using
   ' InitCommonControlsEx, which is the extended
   ' version provided in v4.72 upwards (you need
   ' v6.00 or higher to get XP styles)
   On Error Resume Next
   ' this will fail if Comctl not available
   '  - unlikely now though!
   Dim iccex As tagInitCommonControlsEx
   With iccex
       .lngSize = LenB(iccex)
       .lngICC = ICC_USEREX_CLASSES
   End With
   InitCommonControlsEx iccex
   
   ' now start the application
   On Error GoTo 0
   frmMain.Show
   
End Sub

