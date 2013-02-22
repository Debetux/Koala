#include "KoalaFrame.h"
#include "KoalaFormFactory.h"
#include "KoalaPanelFactory.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Ui::Scenes;

KoalaFrame::KoalaFrame(void)
{
}

KoalaFrame::~KoalaFrame(void)
{
}

result
KoalaFrame::OnInitializing(void)
{
	// Prepare Scene management.
	SceneManager* pSceneManager = SceneManager::GetInstance();
	static KoalaFormFactory formFactory;
	static KoalaPanelFactory panelFactory;
	pSceneManager->RegisterFormFactory(formFactory);
	pSceneManager->RegisterPanelFactory(panelFactory);
	pSceneManager->RegisterScene(L"workflow");

	// Goto the scene.
	result r = pSceneManager->GoForward(SceneTransitionId(L"ID_SCNT_START"));

	// TODO: Add your initialization code here
	return r;
}

result
KoalaFrame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO:
	// Add your termination code here
	return r;
}
