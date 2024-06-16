#include "../Header/ServiceLocator.h"

ServiceLocator::ServiceLocator(){
    graphicService = nullptr;
    CreateService();
}

ServiceLocator::~ServiceLocator(){
    ClearAllService();
}

void ServiceLocator::CreateService(){
    graphicService = new GraphicService();
}

void ServiceLocator::ClearAllService(){
    delete(graphicService);
    graphicService = nullptr;
}

ServiceLocator *ServiceLocator::GetInstance(){
    ServiceLocator instance;
    return &instance;
}

void ServiceLocator::Initialize(){
    CreateService();
    graphicService->Initialize();
}

void ServiceLocator::Update(){
    graphicService->Update();
}

void ServiceLocator::Render(){
    graphicService->Render();
}

GraphicService *ServiceLocator::GetGraphicsService(){
    return graphicService;
}