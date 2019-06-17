; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CRightView
LastTemplate=CFormView
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Gobang.h"
LastPage=0

ClassCount=6
Class1=CGobangApp
Class2=CGobangDoc
Class3=CGobangView
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CRightView
Resource3=IDD_RIGHT_VIEW

[CLS:CGobangApp]
Type=0
HeaderFile=Gobang.h
ImplementationFile=Gobang.cpp
Filter=N

[CLS:CGobangDoc]
Type=0
HeaderFile=GobangDoc.h
ImplementationFile=GobangDoc.cpp
Filter=N

[CLS:CGobangView]
Type=0
HeaderFile=GobangView.h
ImplementationFile=GobangView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=Gobang.cpp
ImplementationFile=Gobang.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_WINDOW_SPLIT
Command17=ID_APP_ABOUT
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_RIGHT_VIEW]
Type=1
Class=CRightView
ControlCount=7
Control1=IDC_SETTING,button,1342242816
Control2=IDC_STATIC,static,1342308352
Control3=IDC_COMBO_P1NAME,combobox,1344340226
Control4=IDC_COMBO_P2NAME,combobox,1344340226
Control5=IDC_P1NAME,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_P2NAME,static,1342308352

[CLS:CRightView]
Type=0
HeaderFile=RightView.h
ImplementationFile=RightView.cpp
BaseClass=CFormView
Filter=D
LastObject=CRightView

