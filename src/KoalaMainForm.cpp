#include <FApp.h>
#include "KoalaMainForm.h"

using namespace Tizen::Base;
using namespace Tizen::App;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Ui::Scenes;


KoalaMainForm::KoalaMainForm(void)
{
}

KoalaMainForm::~KoalaMainForm(void)
{
}

bool
KoalaMainForm::Initialize(void)
{
	Construct(L"IDF_FORM");

	return true;
}

result
KoalaMainForm::OnInitializing(void)
{
	result r = E_SUCCESS;

	// TODO:
	// Add your initialization code here
	Header* pHeader = GetHeader();
	if (pHeader)
	{
		pHeader->AddActionEventListener(*this);
	}

	// Setup back event listener
	SetFormBackEventListener(this);

	return r;
}

result
KoalaMainForm::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO:
	// Add your termination code here
	return r;
}

void
KoalaMainForm::OnActionPerformed(const Tizen::Ui::Control& source, int actionId)
{
	SceneManager* pSceneManager = SceneManager::GetInstance();
	AppAssert(pSceneManager);

	switch(actionId)
	{
	case ID_HEADER_ITEM1:
		pSceneManager->GoForward(SceneTransitionId(L"ID_SCNT_1"));
		break;
	case ID_HEADER_ITEM2:
		pSceneManager->GoForward(SceneTransitionId(L"ID_SCNT_2"));
		break;
	case ID_HEADER_ITEM3:
		pSceneManager->GoForward(SceneTransitionId(L"ID_SCNT_3"));
		break;
	default:
		break;
	}
}

void
KoalaMainForm::OnFormBackRequested(Tizen::Ui::Controls::Form& source)
{
	UiApp* pApp = UiApp::GetInstance();
	AppAssert(pApp);
	pApp->Terminate();
}
