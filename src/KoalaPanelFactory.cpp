#include "KoalaPanelFactory.h"
#include "KoalaTab1.h"
#include "KoalaTab2.h"
#include "KoalaTab3.h"

using namespace Tizen::Ui::Scenes;


KoalaPanelFactory::KoalaPanelFactory(void)
{
}

KoalaPanelFactory::~KoalaPanelFactory(void)
{
}

Tizen::Ui::Controls::Panel*
KoalaPanelFactory::CreatePanelN(const Tizen::Base::String& panelId, const Tizen::Ui::Scenes::SceneId& sceneId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);
	Tizen::Ui::Controls::Panel* pNewPanel = null;

	if (panelId == L"IDC_PANEL1")
	{
		KoalaTab1* pPanel = new KoalaTab1();
		pPanel->Initialize();
		pSceneManager->AddSceneEventListener(sceneId, *pPanel);
		pNewPanel = pPanel;
	}
	else
	if (panelId == L"IDC_PANEL2")
	{
		KoalaTab2* pPanel = new KoalaTab2();
		pPanel->Initialize();
		pSceneManager->AddSceneEventListener(sceneId, *pPanel);
		pNewPanel = pPanel;
	}
	else
	if (panelId == L"IDC_PANEL3")
	{
		KoalaTab3* pPanel = new KoalaTab3();
		pPanel->Initialize();
		pSceneManager->AddSceneEventListener(sceneId, *pPanel);
		pNewPanel = pPanel;
	}
	// TODO:
	// Add your panel creation code here
	return pNewPanel;
}
