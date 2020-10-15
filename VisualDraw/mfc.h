#pragma once

#include <afxwin.h>

//1)应用程序类 CWinApp,派生类（子类）

class MyApp:public CWinApp
{
public:
    //基类是虚函数
    //派生类只是重写
    //MFC程序的入口地址
    virtual BOOL InitInstance();

private:
};

//2)框架类 CFrameWnd,派生类（子类）
class MyFrame :public CFrameWnd
{
public:
    MyFrame();
private:

};