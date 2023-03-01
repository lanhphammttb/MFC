#pragma once
#include "resource.h"
class dialog1 : public CDialog
{
public:
	dialog1();   // standard constructor
	virtual ~dialog1();
	enum { IDD = IDD_DIALOG1 };
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickButton1();
	int m_a = 0;
	int m_b = 0;
	int m_c = 0;
	int m_pheptinh = 0;
	afx_msg void OnBnClickedRadioPhepTinh();
};
