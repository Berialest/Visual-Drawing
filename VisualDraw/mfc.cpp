#include "mfc.h"

//����ֻ��һ��ȫ�ֵ�Ӧ�ó��������
MyApp myApp;

//�������ڵ�ַ
BOOL MyApp::InitInstance()
{

    //1.������������
    MyFrame *frame = new MyFrame;//���캯��
    //2.��ʾ����
    frame->ShowWindow(SW_SHOWNORMAL);
    // 3.���´���
    frame->UpdateWindow();
    //4.�����������ָ��
    m_pMainWnd = frame;

    return 0;
}

MyFrame::MyFrame()
{
    //CWnd��ĳ�Ա����
    //CFrameWnd�̳���CWnd

    Create(NULL, TEXT("VisualDraw"));
}
