# Microsoft Developer Studio Project File - Name="wxWizApp" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=wxWizApp - Win32 ReleaseDLL
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "wxWizApp.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "wxWizApp.mak" CFG="wxWizApp - Win32 ReleaseDLL"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "wxWizApp - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "wxWizApp - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE "wxWizApp - Win32 DebugDLL" (based on "Win32 (x86) Console Application")
!MESSAGE "wxWizApp - Win32 ReleaseDLL" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "wxWizApp - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MD /W4 /GX /O2 /I "C:\wxWindows-2.4.2/lib/mswd" /I "C:\wxWindows-2.4.2/include" /I "C:\wxWindows-2.4.2/contrib/include" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" /D "__WINDOWS__" /D "__WXMSW__" /D "__WIN95__" /D "__WIN32__" /D WINVER=0x0400 /D "STRICT" /D "_MT" /D wxUSE_GUI=1 /YX"" /Fo"ReleaseDLL/" /Fd"ReleaseDLL/" /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib rpcrt4.lib wsock32.lib winmm.lib zlib.lib regex.lib png.lib jpeg.lib tiff.lib wxmsw.lib /nologo /subsystem:windows /pdb:"ReleaseDLL/wxWizApp.pdb" /machine:I386 /nodefaultlib:"libc.lib" /nodefaultlib:"libci.lib" /out:"wxWizApp.exe"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W4 /Gm /GX /Zi /Od /I "C:\wxWindows-2.4.2/lib/mswd" /I "C:\wxWindows-2.4.2/include" /I "C:\wxWindows-2.4.2/contrib/include" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" /D WINVER=0x400 /D "_MT" /D wxUSE_GUI=1 /D "__WXDEBUG__" /D WXDEBUG=1 /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /i "C:\wxWindows-2.4.2/include" /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib rpcrt4.lib wsock32.lib zlibd.lib regexd.lib pngd.lib jpegd.lib tiffd.lib wxmswd.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept /libpath:"C:\wxWindows-2.4.2/lib" /libpath:"C:\wxWindows-2.4.2/contrib/lib"
# SUBTRACT LINK32 /pdb:none
# Begin Special Build Tool
SOURCE="$(InputPath)"
PostBuild_Desc=Copying executable
PostBuild_Cmds=copy debug\wxWizApp.exe \cygwin\home\gsilber\kenbook3\aacd\bin
# End Special Build Tool

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 DebugDLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "wxWizApp___Win32_DebugDLL"
# PROP BASE Intermediate_Dir "wxWizApp___Win32_DebugDLL"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "wxWizApp___Win32_DebugDLL"
# PROP Intermediate_Dir "wxWizApp___Win32_DebugDLL"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W4 /Gm /GX /Zi /Od /I "C:\wxWindows-2.4.2/lib/mswd" /I "C:\wxWindows-2.4.2/include" /I "C:\wxWindows-2.4.2/contrib/include" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" /D WINVER=0x400 /D "_MT" /D wxUSE_GUI=1 /D "__WXDEBUG__" /D WXDEBUG=1 /Fp"Debug/wxWizApp.pch" /YX /Fo"Debug/" /Fd"Debug/" /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib rpcrt4.lib wsock32.lib winmm.lib wxmsw24d.lib /nologo /subsystem:windows /pdb:"DebugDLL/wxWizApp.pdb" /debug /machine:I386 /nodefaultlib:"libcd.lib" /nodefaultlib:"libcid.lib" /out:"wxWizApp.exe" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 ReleaseDLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "wxWizApp___Win32_ReleaseDLL"
# PROP BASE Intermediate_Dir "wxWizApp___Win32_ReleaseDLL"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "wxWizApp___Win32_ReleaseDLL"
# PROP Intermediate_Dir "wxWizApp___Win32_ReleaseDLL"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MD /W4 /GX /O2 /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "NDEBUG" /D "_WINDOWS" /D "__WINDOWS__" /D "__WXMSW__" /D "__WIN95__" /D "__WIN32__" /D WINVER=0x0400 /D "STRICT" /D WXUSINGDLL=1 /Fo"ReleaseDLL/" /Fd"ReleaseDLL/" /FD /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib rpcrt4.lib wsock32.lib winmm.lib wxmsw24.lib /nologo /subsystem:windows /incremental:no /pdb:"ReleaseDLL/wxWizApp.pdb" /debug /machine:I386 /nodefaultlib:"libc.lib" /nodefaultlib:"libci.lib" /out:"wxWizApp.exe" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "wxWizApp - Win32 Release"
# Name "wxWizApp - Win32 Debug"
# Name "wxWizApp - Win32 DebugDLL"
# Name "wxWizApp - Win32 ReleaseDLL"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\WizAppData.cpp
# End Source File
# Begin Source File

SOURCE=.\wxButtonDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxCheckDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxComboDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxEditDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxFileBrowseDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxFileTextDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxListDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxRadioDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxTextDialog.cpp
# End Source File
# Begin Source File

SOURCE=.\wxWizApp.cpp
# End Source File
# Begin Source File

SOURCE=.\wxWizApp.rc
# End Source File
# Begin Source File

SOURCE=.\wxWizBaseDlg.cpp

!IF  "$(CFG)" == "wxWizApp - Win32 Release"

# ADD CPP /YX

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 Debug"

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 DebugDLL"

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 ReleaseDLL"

!ENDIF 

# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\defines.h
# End Source File
# Begin Source File

SOURCE=.\WizAppData.h
# End Source File
# Begin Source File

SOURCE=.\wxButtonDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxCheckDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxComboDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxEditDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxFileBrowseDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxFileTextDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxListDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxRadioDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxTextDialog.h
# End Source File
# Begin Source File

SOURCE=.\wxWizApp.h
# End Source File
# Begin Source File

SOURCE=.\wxWizBaseDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\wx\msw\blank.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\bullseye.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\cdrom.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\computer.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\drive.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\file1.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\floppy.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\folder1.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\folder2.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\hand.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\magnif1.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\noentry.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\pbrush.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\pencil.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\pntleft.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\pntright.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\query.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\removble.ico
# End Source File
# Begin Source File

SOURCE=.\wx\msw\rightarr.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\roller.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\size.cur
# End Source File
# Begin Source File

SOURCE=.\wx\msw\watch1.cur
# End Source File
# Begin Source File

SOURCE=.\res\wizapp.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wxWizApp.ico
# End Source File
# End Group
# Begin Source File

SOURCE=.\makefile
# PROP Exclude_From_Scan -1

!IF  "$(CFG)" == "wxWizApp - Win32 Release"

# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 Debug"

# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 DebugDLL"

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 ReleaseDLL"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\makefile.gtk
# PROP Exclude_From_Scan -1

!IF  "$(CFG)" == "wxWizApp - Win32 Release"

# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 Debug"

# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 DebugDLL"

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 ReleaseDLL"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\makefile.mtf
# PROP Exclude_From_Scan -1

!IF  "$(CFG)" == "wxWizApp - Win32 Release"

# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 Debug"

# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 DebugDLL"

!ELSEIF  "$(CFG)" == "wxWizApp - Win32 ReleaseDLL"

!ENDIF 

# End Source File
# End Target
# End Project
