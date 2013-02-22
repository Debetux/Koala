#ifndef _KOALA_FORM_FACTORY_H_
#define _KOALA_FORM_FACTORY_H_

#include <FUi.h>


class KoalaFormFactory
	: public Tizen::Ui::Scenes::IFormFactory
{
public:
	KoalaFormFactory(void);
	virtual ~KoalaFormFactory(void);

	virtual Tizen::Ui::Controls::Form* CreateFormN(const Tizen::Base::String& formId, const Tizen::Ui::Scenes::SceneId& sceneId);
};

#endif // _KOALA_FORM_FACTORY_H_
