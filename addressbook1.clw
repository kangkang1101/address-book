; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAddressbook1Dlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "addressbook1.h"

ClassCount=5
Class1=CAddressbook1App
Class2=CAddressbook1Dlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ADDRESSBOOK1_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=Inputdlg
Class5=Finddlg
Resource4=IDD_DIALOG1

[CLS:CAddressbook1App]
Type=0
HeaderFile=addressbook1.h
ImplementationFile=addressbook1.cpp
Filter=N

[CLS:CAddressbook1Dlg]
Type=0
HeaderFile=addressbook1Dlg.h
ImplementationFile=addressbook1Dlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CAddressbook1Dlg

[CLS:CAboutDlg]
Type=0
HeaderFile=addressbook1Dlg.h
ImplementationFile=addressbook1Dlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_ADDRESSBOOK1_DIALOG]
Type=1
Class=CAddressbook1Dlg
ControlCount=19
Control1=IDC_BUTTON1,button,1342242816
Control2=IDC_BUTTON2,button,1342242816
Control3=IDC_BUTTON3,button,1342242816
Control4=IDC_BUTTON4,button,1342242816
Control5=IDC_BUTTON5,button,1342242816
Control6=IDC_BUTTON6,button,1342242816
Control7=IDC_LIST1,SysListView32,1350631424
Control8=IDC_BUTTON7,button,1342242816
Control9=IDC_EDIT1,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_EDIT2,edit,1350631552
Control13=IDC_EDIT3,edit,1350631552
Control14=IDC_EDIT4,edit,1350631552
Control15=IDC_EDIT5,edit,1350631552
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG1]
Type=1
Class=Inputdlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT1,edit,1350631552
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_EDIT3,edit,1350631552
Control6=IDC_EDIT4,edit,1350631552
Control7=IDC_EDIT5,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352

[CLS:Inputdlg]
Type=0
HeaderFile=Inputdlg.h
ImplementationFile=Inputdlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT4

[CLS:Finddlg]
Type=0
HeaderFile=Finddlg.h
ImplementationFile=Finddlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

