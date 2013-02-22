/**
 * Name        : Koala
 * Version     :
 * Vendor      :
 * Description :
 */


#include "Koala.h"
#include "KoalaFrame.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Ui::Scenes;


KoalaApp::KoalaApp(void)
{
}

KoalaApp::~KoalaApp(void)
{
}

UiApp*
KoalaApp::CreateInstance(void)
{
	// Create the instance through the constructor.
	return new KoalaApp();
}

bool
KoalaApp::OnAppInitializing(AppRegistry& appRegistry)
{
	// TODO:
	// Initialize Frame and App specific data.
	// The App's permanent data and context can be obtained from the appRegistry.
	//
	// If this method is successful, return true; otherwise, return false.
	// If this method returns false, the App will be terminated.

	// Uncomment the following statement to listen to the screen on/off events.
	//PowerManager::SetScreenEventListener(*this);

	// TODO:
	// Add your initialization code here
	return true;
}

bool
KoalaApp::OnAppInitialized(void)
{
	// TODO:
	// Comment.

	// Create a Frame
	KoalaFrame* pKoalaFrame = new KoalaFrame();
	pKoalaFrame->Construct();
	pKoalaFrame->SetName(L"Koala");
	AddFrame(*pKoalaFrame);

	return true;
}

bool
KoalaApp::OnAppWillTerminate(void)
{
	// TODO:
	// Comment.
	return true;
}

bool
KoalaApp::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	// TODO:
	// Deallocate resources allocated by this App for termination.
	// The App's permanent data and context can be saved via appRegistry.
	return true;
}

void
KoalaApp::OnForeground(void)
{
	// TODO:
	// Start or resume drawing when the application is moved to the foreground.
}

void
KoalaApp::OnBackground(void)
{
	// TODO:
	// Stop drawing when the application is moved to the background.
}

void
KoalaApp::OnLowMemory(void)
{
	// TODO:
	// Free unused resources or close the application.
}

void
KoalaApp::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
	// TODO:
	// Handle any changes in battery level here.
	// Stop using multimedia features(camera, mp3 etc.) if the battery level is CRITICAL.
}

void
KoalaApp::OnScreenOn(void)
{
	// TODO:
	// Get the released resources or resume the operations that were paused or stopped in OnScreenOff().
}

void
KoalaApp::OnScreenOff(void)
{
	// TODO:
	// Unless there is a strong reason to do otherwise, release resources (such as 3D, media, and sensors) to allow the device
	// to enter the sleep mode to save the battery.
	// Invoking a lengthy asynchronous method within this listener method can be risky, because it is not guaranteed to invoke a
	// callback before the device enters the sleep mode.
	// Similarly, do not perform lengthy operations in this listener method. Any operation must be a quick one.
}
