#include "../Header/ServiceLocator.h"

ServiceLocator::ServiceLocator(){
    graphicService = nullptr;
    eventService = nullptr;
    CreateService();
}

ServiceLocator::~ServiceLocator(){
    ClearAllService();
}

void ServiceLocator::CreateService(){
    graphicService = new GraphicService();
    eventService = new EventService();
}

void ServiceLocator::ClearAllService(){
    delete(graphicService);
    delete(eventService);
}

ServiceLocator *ServiceLocator::GetInstance(){
    ServiceLocator instance;
    return &instance;
}

void ServiceLocator::Initialize(){
    graphicService->Initialize();
    eventService->Initialize();
}

void ServiceLocator::Update(){
    graphicService->Update();
    eventService->Update();
}

void ServiceLocator::Render(){
    graphicService->Render();
}

GraphicService *ServiceLocator::GetGraphicsService(){
    return graphicService;
}

EventService *ServiceLocator::GetEventService(){
    return eventService;
}