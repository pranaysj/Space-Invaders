#include "Header/GameService.h"
#include "GameService.h"

void GameService::Initialize(){
    serviceLocator->Initialize();
    InitializeVariable();
}

void GameService::InitializeVariable(){
    gameWindow = serviceLocator->GetGraphicsService()->GetGameWindow();
}

void GameService::Destory(){
    delete(gameWindow);
    gameWindow = nullptr;
}

GameService::GameService(){
    serviceLocator = nullptr;
    gameWindow = nullptr;
}

GameService::~GameService(){
    Destory();
}

void GameService::Ignite(){
    serviceLocator = ServiceLocator::GetInstance();
    Initialize();
}

void GameService::Update(){
    serviceLocator->Update();
}

void GameService::Render(){
    gameWindow->clear(serviceLocator->GetGraphicsService()->getColorWindow());
    serviceLocator->Render();
    gameWindow->display();
}

bool GameService::IsRunning(){
    return serviceLocator->GetGraphicsService()->isGameWindowOpen();
}
