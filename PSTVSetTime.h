#pragma once
#include "afxwin.h"


// CPSTVSetTime 对话框

class CPSTVSetTime : public CDialogEx
{
	DECLARE_DYNAMIC(CPSTVSetTime)

public:
	CPSTVSetTime(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPSTVSetTime();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_PSTVTIME };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonPstvtime();
	CEdit m_Edit_url;
};
