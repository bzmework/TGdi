VERSION 5.00
Begin VB.Form frmMain 
   Caption         =   "ͼ�����"
   ClientHeight    =   8760
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   13005
   LinkTopic       =   "Form1"
   ScaleHeight     =   584
   ScaleMode       =   3  'Pixel
   ScaleWidth      =   867
   StartUpPosition =   1  '����������
   Begin VB.CommandButton cmdIcon 
      Caption         =   "ͼ�����"
      Height          =   525
      Left            =   9180
      TabIndex        =   7
      Top             =   930
      Width           =   1515
   End
   Begin VB.CommandButton Command2 
      Caption         =   "���ܲ���"
      Height          =   555
      Left            =   11400
      TabIndex        =   6
      Top             =   870
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "���ܲ���"
      Height          =   555
      Left            =   11400
      TabIndex        =   5
      Top             =   210
      Width           =   1335
   End
   Begin VB.PictureBox picIcon 
      AutoRedraw      =   -1  'True
      BackColor       =   &H000000FF&
      BorderStyle     =   0  'None
      Height          =   1635
      Left            =   9180
      ScaleHeight     =   109
      ScaleMode       =   3  'Pixel
      ScaleWidth      =   153
      TabIndex        =   4
      Top             =   7590
      Width           =   2295
   End
   Begin VB.PictureBox picImage 
      AutoRedraw      =   -1  'True
      BackColor       =   &H000000FF&
      BorderStyle     =   0  'None
      Height          =   1635
      Left            =   9180
      ScaleHeight     =   109
      ScaleMode       =   3  'Pixel
      ScaleWidth      =   153
      TabIndex        =   3
      Top             =   5850
      Width           =   2295
   End
   Begin VB.PictureBox picText 
      AutoRedraw      =   -1  'True
      BorderStyle     =   0  'None
      BeginProperty Font 
         Name            =   "Arial"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1635
      Left            =   9180
      ScaleHeight     =   109
      ScaleMode       =   3  'Pixel
      ScaleWidth      =   153
      TabIndex        =   2
      Top             =   4080
      Width           =   2295
   End
   Begin VB.CommandButton cmdDraw 
      Caption         =   "����"
      Height          =   555
      Left            =   9150
      TabIndex        =   0
      Top             =   210
      Width           =   1545
   End
   Begin VB.Image Image1 
      Height          =   240
      Index           =   3
      Left            =   0
      Picture         =   "frmMain.frx":0000
      Top             =   0
      Width           =   240
   End
   Begin VB.Image Image1 
      Height          =   240
      Index           =   1
      Left            =   360
      Picture         =   "frmMain.frx":058A
      Top             =   0
      Width           =   240
   End
   Begin VB.Image Image1 
      Height          =   240
      Index           =   2
      Left            =   720
      Picture         =   "frmMain.frx":0B14
      Top             =   0
      Width           =   240
   End
   Begin VB.Image imgIcon 
      Height          =   480
      Left            =   9720
      Picture         =   "frmMain.frx":109E
      Top             =   1620
      Width           =   480
   End
   Begin VB.Image imgBmp 
      Height          =   480
      Left            =   9180
      Picture         =   "frmMain.frx":17A50
      Top             =   1620
      Width           =   480
   End
   Begin VB.Label lblText 
      Caption         =   $"frmMain.frx":18A92
      BeginProperty Font 
         Name            =   "Arial"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1635
      Left            =   9180
      TabIndex        =   1
      Top             =   2370
      Width           =   2295
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private mclsGdi  As TGdi.WinGdi
Private mclsGdip As TGdi.WinGdip

Private Sub Form_Load()
  
    Set mclsGdi = New TGdi.WinGdi
    Set mclsGdip = New TGdi.WinGdip
  
    mclsGdip.Startup  '����GDI+��Ϊ�˲�����GDI+��Դ���˷ѣ���ʹ��ǰ��������
    
End Sub

Private Sub Form_Unload(Cancel As Integer)
    
    mclsGdip.Shutdown '�ر�GDI+����ʹ����ʽ�ر�GDI+��һ��GDI+��������ϵͳ�����ܹ��ɹ��عر�
    Set mclsGdi = Nothing
    Set mclsGdip = Nothing
    
End Sub

Private Sub cmdDraw_Click()
    Dim i As Long
    Dim strKey As String
    Dim dX As Long
    Dim dY As Long
    
    Me.Cls
    
    mclsGdip.DrawText Me.hDC, "hello���", 10, 10, 100, 100, RGB(255, 0, 0)
    
    '���˵�������
    mclsGdi.DrawArea Me.hDC, 50, 275, 500, 25, RGB(215, 233, 255)
    '���˵���ѡ��״̬
    mclsGdi.DrawRoundBox Me.hDC, 100, 278, 50, 21, 2, RGB(255, 128, 0), RGB(255, 128, 0)
    mclsGdi.DrawGradient Me.hDC, 100, 279, 49, 19, RGB(255, 174, 57), RGB(255, 128, 0), dVertical

    '���˵�����
    mclsGdi.DrawArea Me.hDC, 100, 301, 300, 200, RGB(255, 255, 255)  ' RGB(215, 233, 255)
    '���˵�������
    mclsGdi.DrawGradient Me.hDC, 100, 301, 22, 200, RGB(215, 233, 255), RGB(115, 167, 202), dHorizontal

    '���˵����߿�
    mclsGdi.DrawBorder Me.hDC, 100, 320, 300, 21, RGB(215, 128, 0)
    '͸�����˵�������
    mclsGdi.DrawAlphaGradient Me.hDC, 101, 321, 299, 20, RGB(255, 249, 125), RGB(255, 139, 69), dVertical, 100
    '͸�����˵�������
    mclsGdi.DrawAlphaBox Me.hDC, 101, 360, 298, 20, RGB(255, 249, 125), vbRed, btSolidBrush, bsSolid, hsSolid, ptSolidPen, psSolid, , 1, 100  ' RGB(215, 128, 0)
    
    '����ͷ
    mclsGdi.DrawArrow Me.hDC, 101, 400, 8, 8, adWestNorth

    Dim lngTextWidth As Long
    Dim lngTextHeight As Long
    
    '���ı�
    picText.Cls
    lngTextWidth = picText.ScaleWidth
    lngTextHeight = picText.Height
    mclsGdi.CalcTextArea picText.hDC, lblText.Caption, lngTextWidth, lngTextHeight
    mclsGdi.DrawText picText.hDC, lblText.Caption, 0, 0, lngTextWidth, lngTextHeight, RGB(0, 0, 0), dtLeft Or dtWordBreak, True, True, _
    ftIndirectFont, lblText.FontName, lblText.FontSize
    picText.Refresh
    
    '��ͼ��
    mclsGdi.DrawPic picImage.hDC, imgBmp.Picture.Handle, 0, 0, 32, 32, RGB(0, 0, 0), RGB(128, 128, 128), True
    picImage.Refresh
    
    '��ͼ��
    mclsGdi.DrawPic picIcon.hDC, imgIcon.Picture.Handle, 0, 0, 16, 16, RGB(0, 0, 0), RGB(128, 128, 128), True
    picIcon.Refresh

    '��Բ
    If mclsGdip.HasStarted Then
        mclsGdip.DrawCircle Me.hDC, 100, 90, 12, 12, RGB(255, 255, 255), RGB(95, 152, 204), , , , , 2
        mclsGdip.DrawCircle Me.hDC, 103, 93, 6, 6, RGB(95, 152, 204), RGB(255, 255, 255)
    Else
        mclsGdi.DrawCircle Me.hDC, 100, 90, 12, 12, RGB(255, 255, 255), RGB(95, 152, 204), , , , , , 2
        mclsGdi.DrawCircle Me.hDC, 103, 93, 6, 6, RGB(95, 152, 204), RGB(255, 255, 255), 1
    End If
    
End Sub

Private Sub Command1_Click()
    Dim lngTextWidth As Long
    Dim lngTextHeight As Long
    Dim s As Single
    Dim t As Single
    Dim i As Long
    
    '��ֱ�ӵ���GDI������΢����,������BSTRת����charʱ������, ���ߺ������ε��ö�ջ����
    s = Timer
    For i = 1 To 1000
        picText.Cls
        lngTextWidth = picText.ScaleWidth
        lngTextHeight = picText.Height
        mclsGdi.CalcTextArea picText.hDC, lblText.Caption, lngTextWidth, lngTextHeight
        mclsGdi.DrawText picText.hDC, lblText.Caption, 0, 0, lngTextWidth, lngTextHeight, RGB(0, 0, 0), dtLeft Or dtWordBreak, True, True
        picText.Refresh
    Next
    t = Timer - s

    MsgBox "����" & i - 1 & "�Σ���ʱ" & t & "��", vbOKOnly
    
End Sub

Private Sub Command2_Click()
    Dim lngTextWidth As Long
    Dim lngTextHeight As Long
    Dim s As Single
    Dim t As Single
    Dim i As Long
    
    s = Timer
    For i = 1 To 1000
        picText.Cls
        lngTextWidth = picText.ScaleWidth
        lngTextHeight = picText.Height
        mclsGdi.DrawText picText.hDC, lblText.Caption, 0, 0, lngTextWidth, lngTextHeight, RGB(0, 0, 0), dtLeft Or dtSingleLine
        picText.Refresh
    Next
    t = Timer - s
    
    MsgBox "����" & i - 1 & "�Σ���ʱ" & t & "��", vbOKOnly
    
End Sub

Private Sub cmdIcon_Click()
    Dim i As Long
    
    Me.Cls
    
    For i = 1 To 100
        mclsGdi.DrawPic Me.hDC, Image1(1).Picture.Handle, 30, 30, 16, 16
        DoEvents
    Next

    For i = 1 To 100
        mclsGdi.DrawPic Me.hDC, Image1(2).Picture.Handle, 30, 50, 16, 16
        DoEvents
    Next

    For i = 1 To 100
        mclsGdi.DrawPic Me.hDC, Image1(3).Picture.Handle, 30, 70, 16, 16
        DoEvents
    Next
    
End Sub
