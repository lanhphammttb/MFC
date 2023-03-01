#include <afxwin.h>
#include "resource.h"
#include "dialog1.h"

dialog1::dialog1() : CDialog(IDD_DIALOG1)
{

}
dialog1::~dialog1()
{
}
void dialog1::DoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, IDC_EDIT_A, m_a);
	DDX_Text(pDX, IDC_EDIT_B, m_b);
	DDX_Text(pDX, IDC_EDIT_C, m_c);
	DDX_Radio(pDX, IDC_RADIO_PHEPTINH, m_pheptinh);
	CDialog::DoDataExchange(pDX);
}
BEGIN_MESSAGE_MAP(dialog1, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &dialog1::OnBnClickButton1)
	//ON_BN_CLICKED(IDC_RADIO_PHEPTINH, &dialog1::OnBnClickedRadioPhepTinh)
END_MESSAGE_MAP()

void dialog1::OnBnClickButton1()
{
	UpdateData(TRUE);
	if (m_pheptinh == 0) {
		m_c = m_a + m_b;
	}
	else {
		m_c = m_a - m_b;
	}

	UpdateData(FALSE);
}

//
//void dialog1::OnBnClickedRadioPhepTinh()
//{
//	// TODO: Add your control notification handler code here
//}
