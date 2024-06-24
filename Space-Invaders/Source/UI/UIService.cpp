
#include "../../Header/UI/UIService.h"

namespace UI {

	using namespace Main;
	using namespace MainMenu;

	void UIService::CreateControllers() {
		mainMenuController = new MainMenu::MainMenuUIController();
	}

	void UIService::InitializeControllers() {
		mainMenuController->Initialize();
	}

	void UIService::Destroy() {
		delete(mainMenuController);
	}

	UIService::UIService() {
		mainMenuController = nullptr;
		CreateControllers();
	}

	UIService::~UIService() {
		Destroy();
	}

	void UIService::Initialize() {
		InitializeControllers();
	}

	void UIService::Update() {

	}

	void UIService::Render() {

	}
}