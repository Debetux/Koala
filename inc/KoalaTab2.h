#ifndef _KOALA_TAB2_H_
#define _KOALA_TAB2_H_

#include <FBase.h>
#include <FUi.h>

class KoalaTab2
	: public Tizen::Ui::Controls::Panel
	, public Tizen::Ui::Scenes::ISceneEventListener
{
public:
	KoalaTab2(void);
	virtual ~KoalaTab2(void);
	bool Initialize(void);

public:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
	virtual void OnSceneActivatedN(const Tizen::Ui::Scenes::SceneId& previousSceneId,
								   const Tizen::Ui::Scenes::SceneId& currentSceneId, Tizen::Base::Collection::IList* pArgs);
	virtual void OnSceneDeactivated(const Tizen::Ui::Scenes::SceneId& currentSceneId,
									const Tizen::Ui::Scenes::SceneId& nextSceneId);

};

#endif // _KOALA_TAB2_H_
