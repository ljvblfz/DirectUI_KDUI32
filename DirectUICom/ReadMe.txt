========================================================================
    活动模板库：DirectUICom 项目概述
========================================================================

应用程序向导已为您创建了此 DirectUICom 项目，您可以在此基础之上
编写自己的动态链接库 (DLL)。


此文件概述了组成项目的每个文件
的内容。

DirectUICom.vcproj
    这是使用应用程序向导生成的 VC++ 项目的主项目文件。 
    它包含有关生成该文件所使用的 Visual C++ 版本的信息，以及
    有关在应用程序向导中选择的平台、配置和项目功能
    的信息。

DirectUICom.idl
    此文件包含在您的项目中定义的类型库、接口
    和 coclass 的 IDL 定义。
    此文件将由 MIDL 编译器处理以生成：
        C++ 接口定义和 GUID 声明                 (DirectUICom.h)
        GUID 定义                                (DirectUICom_i.c)
        一个类型库                               (DirectUICom.tlb)
        封送代码                                 (DirectUICom_p.c 和 dlldata.c)

DirectUICom.h
    此文件包含在 DirectUICom.idl 中定义的项的 C++ 接口定义
    和 GUID 声明。它将在编译过程中由 MIDL 重新生成。

DirectUICom.cpp
    此文件包含对象映射和 DLL 导出的实现。

DirectUICom.rc
    这是程序使用的所有 Microsoft Windows 资源的清
    单。

DirectUICom.def
    此模块定义文件为链接器提供有关 DLL 所要求的
    导出的信息。它包含用于以下内容的导出：
        DllGetClassObject  
        DllCanUnloadNow    
        GetProxyDllInfo    
        DllRegisterServer	
        DllUnregisterServer

/////////////////////////////////////////////////////////////////////////////
其他标准文件：

StdAfx.h，StdAfx.cpp
    这些文件用于生成名为 DirectUICom.pch 的预编译头 (PCH) 文件
    和名为 StdAfx.obj 的预编译类型文件。

Resource.h
    这是用于定义资源 ID 的标准头文件。


/////////////////////////////////////////////////////////////////////////////
