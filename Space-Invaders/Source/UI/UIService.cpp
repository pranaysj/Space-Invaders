
#include "../../Header/UI/UIService.h"

namespace UI{


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
		mainMenuController->Update();
	}

	void UIService::Render() {
		mainMenuController->Render();
	}
}