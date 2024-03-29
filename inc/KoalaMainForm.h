#ifndef _KOALA_MAIN_FORM_H_
#define _KOALA_MAIN_FORM_H_

#include <FBase.h>
#include <FUi.h>


class KoalaMainForm
	: public Tizen::Ui::Controls::Form
	, public Tizen::Ui::IActionEventListener
	, public Tizen::Ui::Controls::IFormBackEventListener
{
public:
	KoalaMainForm(void);
	virtual ~KoalaMainForm(void);
	bool Initialize(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
	virtual void OnFormBackRequested(Tizen::Ui::Controls::Form& source);
	virtual void OnActionPerformed(const Tizen::Ui::Control& source, int actionId);

protected:
	static const int ID_HEADER_ITEM1 = 101;
	static const int ID_HEADER_ITEM2 = 102;
	static const int ID_HEADER_ITEM3 = 103;
};

#endif	//_KOALA_MAIN_FORM_H_
