#ifndef _KOALA_PANEL_FACTORY_H_
#define _KOALA_PANEL_FACTORY_H_

#include <FUi.h>


class KoalaPanelFactory
	: public Tizen::Ui::Scenes::IPanelFactory
{
public:
	KoalaPanelFactory(void);
	virtual ~KoalaPanelFactory(void);

	virtual Tizen::Ui::Controls::Panel* CreatePanelN(const Tizen::Base::String& panelId, const Tizen::Ui::Scenes::SceneId& sceneId);
};

#endif // _KOALA_PANEL_FACTORY_H_
