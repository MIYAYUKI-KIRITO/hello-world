
// InteractiveImageWarpingDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "InteractiveImageWarping.h"
#include "InteractiveImageWarpingDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
    CAboutDlg();

// 对话框数据
    enum { IDD = IDD_ABOUTBOX };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
    DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CInteractiveImageWarpingDlg 对话框



CInteractiveImageWarpingDlg::CInteractiveImageWarpingDlg(CWnd* pParent /*=NULL*/)
    : CDialogEx(CInteractiveImageWarpingDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CInteractiveImageWarpingDlg::DoDataExchange(CDataExchange*
