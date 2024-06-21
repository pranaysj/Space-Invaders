#include "../Header/PlayerService.h"
#include "../Header/ServiceLocator.h"

PlayerService::PlayerService(){
    playerController = new PlayerController();
}

PlayerService::~PlayerService() {
    delete(playerController);
}

void PlayerService::Initialize(){
    playerController->Initialize();
}

void PlayerService::Update(){
    playerController->Update();
}

void PlayerService::Render(){
    playerController->Render();
}
