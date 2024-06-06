
// InteractiveImageWarpingDlg.h : 头文件
//

#pragma once
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui_c.h"
#include <opencv2/opencv.hpp>
#include <thread>
#include <atomic>
#include <ctime>
#include "afxwin.h"
#include "afxbutton.h"

using namespace cv;
using namespace std;


// CInteractiveImageWarpingDlg 对话框
class CInteractiveImageWarpingDlg : public CDialogEx
{
// 构造
public:
    CInteractiveImageWarpingDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
    enum { IDD = IDD_INTERACTIVEIMAGEWARPING_DIALOG };

    protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
    HICON m_hIcon;

    // 生成的消息映射函数
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
public:
    POINT ptStart;
    POINT ptEnd;
    Mat src;
    BOOL bLDown;
    vector<Point> vecPt;


    vector<cv::Point2f> p
