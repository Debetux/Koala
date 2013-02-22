#include "KoalaFormFactory.h"
#include "KoalaMainForm.h"

using namespace Tizen::Ui::Scenes;


KoalaFormFactory::KoalaFormFactory(void)
{
}

KoalaFormFactory::~KoalaFormFactory(void)
{
}

Tizen::Ui::Controls::Form*
KoalaFormFactory::CreateFormN(const Tizen::Base::String& formId, const Tizen::Ui::Scenes::SceneId& sceneId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);
	Tizen::Ui::Controls::Form* pNewForm = null;

	if (formId == L"IDF_FORM")
	{
		KoalaMainForm* pForm = new KoalaMainForm();
		pForm->Initialize();
		pNewForm = pForm;
	}
	// TODO:
	// Add your form creation code here

	return pNewForm;
}
