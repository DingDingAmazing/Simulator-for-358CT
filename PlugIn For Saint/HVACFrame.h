#include "HVACForm.h"
#include "Public Parameter.h"
// HVACFrame �Ի���

class HVACFrame : public CDialogEx,public PublicParama
{
	DECLARE_DYNAMIC(HVACFrame)

public:
	HVACFrame(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~HVACFrame();
	HVACForm hvacForm;
	PublicParama publicParama;
	
// �Ի�������
	enum { IDD = IDD_HVAC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	afx_msg HRESULT Function_ODIIndication(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_ODIData(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_ODIEvent(WPARAM wParam,LPARAM lParam);
	afx_msg HRESULT Function_ODIAction(WPARAM wParam,LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};
