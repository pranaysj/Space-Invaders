#include"../../Header/UI/MainMenu/MainMenuUIController.h"
#include "../../Header/Main/GameService.h"
#include"../../Header/Global/ServiceLocator.h"
#include"../../Header/Graphics/GraphicService.h"
#include"../../Header/Event/EventService.h"

namespace UI {
	namespace MainMenu {

		using namespace Global;
		using namespace Event;
		using namespace Main;

		MainMenuUIController::MainMenuUIController() {
			gameWindow = nullptr;
		}

		void MainMenuUIController::Initialize() {
			gameWindow = ServiceLocator::GetInstance()->GetGraphicsService()->GetGameWindow();
			InitializeBackgroundImage();
			InitializeButtons();
		}

		void MainMenuUIController::Update() {
			ProcessButtonInteractions();
		}

		void MainMenuUIController::Render() {
			gameWindow->draw(backgroundSprite);
			gameWindow->draw(playButtonSprite);
			gameWindow->draw(instructionsButtonSprite);
			gameWindow->draw(quitButtonSprite);
		}

		void MainMenuUIController::InitializeBackgroundImage(){
			if (backgroundTexture.loadFromFile(backgroundTexturePath)) {
				backgroundSprite.setTexture(backgroundTexture);
				ScaleBackgroundImage();
			}
		}

		void MainMenuUIController::ScaleBackgroundImage(){
			backgroundSprite.setScale(
				static_cast<float>(gameWindow->getSize().x) / backgroundSprite.getTexture()->getSize().x,
				static_cast<float>(gameWindow->getSize().y) / backgroundSprite.getTexture()->getSize().y
			);
		}

		void MainMenuUIController::InitializeButtons(){
			if (LoadButtonTextureFromFile()) {
				SetButtonSprites();
				ScaleAllButtons();
				PositionButtons();
			}
		}

		bool MainMenuUIController::LoadButtonTextureFromFile(){
			return playButtonTexture.loadFromFile(playButtonTexturePath)
				&& instructionsButtonTexture.loadFromFile(instructionsButtonTexturePath)
				&& quitButtonTexture.loadFromFile(quitButtonTexturePath);
		}

		void MainMenuUIController::SetButtonSprites(){
			playButtonSprite.setTexture(playButtonTexture);
			instructionsButtonSprite.setTexture(instructionsButtonTexture);
			quitButtonSprite.setTexture(quitButtonTexture);
		}

		void MainMenuUIController::ScaleAllButtons(){
			ScaleButton(&playButtonSprite);
			ScaleButton(&instructionsButtonSprite);
			ScaleButton(&quitButtonSprite);
		}

		void MainMenuUIController::ScaleButton(sf::Sprite* buttonToScale){
			buttonToScale->setScale(
				buttonWidth / buttonToScale->getTexture()->getSize().x,
				buttonHeight / buttonToScale->getTexture()->getSize().y
			);
		}

		void MainMenuUIController::PositionButtons(){
			float xPosition = (static_cast<float>(gameWindow->getSize().x/2)) - buttonWidth / 2;

			playButtonSprite.setPosition(xPosition, 500.0f);
			instructionsButtonSprite.setPosition(xPosition, 700.0f);
			quitButtonSprite.setPosition(xPosition, 900.0f);
		}

		void MainMenuUIController::ProcessButtonInteractions() {
			sf::Vector2f mousePosition = sf::Vector2f(sf::Mouse::getPosition(*gameWindow));

			if (ClickedButton(&playButtonSprite, mousePosition)) {
				GameService::SetGameState(GameState::GAMEPLAY);
			}
			if (ClickedButton(&instructionsButtonSprite, mousePosition)) {
				printf("Clicked Instruction Button \\n");
			}
			if (ClickedButton(&quitButtonSprite, mousePosition)) {
				gameWindow->close();
			}
		}
		   
		bool MainMenuUIController::ClickedButton(sf::Sprite* _buttonSprite, sf::Vector2f _mousePosition) {
			EventService* eventService = ServiceLocator::GetInstance()->GetEventService();
			return eventService->PressedLeftMouseButton() && _buttonSprite->getGlobalBounds().contains(_mousePosition);
		}
	}
}