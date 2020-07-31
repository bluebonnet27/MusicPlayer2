﻿#pragma once
#include "CListBoxEnhanced.h"
#include "BaseDialog.h"


// CAddToPlaylistDlg 对话框

class CAddToPlaylistDlg : public CBaseDialog
{
	DECLARE_DYNAMIC(CAddToPlaylistDlg)

public:
	CAddToPlaylistDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAddToPlaylistDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_TO_PLAYLIST_DIALOG };
#endif

    CString GetPlaylistSelected() const { return m_playlist_selected; }

protected:
    CListBoxEnhanced m_playlist_list_ctrl;
    CString m_playlist_selected;

protected:
    virtual CString GetDialogName() const override;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
    virtual BOOL OnInitDialog();
    virtual void OnOK();
    afx_msg void OnNMDblclkList1(NMHDR *pNMHDR, LRESULT *pResult);
};
