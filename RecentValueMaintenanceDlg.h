
// RecentValueMaintenanceDlg.h: 헤더 파일
//

#pragma once


// CRecentValueMaintenanceDlg 대화 상자
class CRecentValueMaintenanceDlg : public CDialogEx
{
private:
	CPtrList m_data_list;

	int m_data_count = 0;
	int m_move_data[10];
	int m_index = 0;
	int m_index_data[10];
// 생성입니다.
public:
	CRecentValueMaintenanceDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RECENTVALUEMAINTENANCE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
};
