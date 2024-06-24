#include"../../Header/UI/MainMenu/MainMenuUIController.h"
#include"../../Header/Global/ServiceLocator.h"

namespace UI {
	namespace MainMenu {

		using namespace Global;

		MainMenuUIController::MainMenuUIController() {
			gameWindow = nullptr;
		}

		void MainMenuUIController::Initialize() {
			gameWindow = ServiceLocator::GetInstance()->GetGraphicsService()->GetGameWindow();
		}

		void MainMenuUIController::Update() {

		}

		void MainMenuUIController::Render() {

		}
	}
}