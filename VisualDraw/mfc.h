#pragma once

#include <afxwin.h>

//1)Ӧ�ó����� CWinApp,�����ࣨ���ࣩ

class MyApp:public CWinApp
{
public:
    //�������麯��
    //������ֻ����д
    //MFC�������ڵ�ַ
    virtual BOOL InitInstance();

private:
};

//2)����� CFrameWnd,�����ࣨ���ࣩ
class MyFrame :public CFrameWnd
{
public:
    MyFrame();
private:

};