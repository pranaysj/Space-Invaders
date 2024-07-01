#include "../../Header/Global/ServiceLocator.h"

namespace Global {

    using namespace Graphics;
    using namespace Time;
    using namespace Event;
    using namespace Player;
    using namespace UI;
    using namespace Enemy;

    ServiceLocator::ServiceLocator() {
        graphicService = nullptr;
        eventService = nullptr;
        playerService = nullptr;
        timeService = nullptr;
        uiService = nullptr;
        enemyService = nullptr;
        CreateService();
    }

    ServiceLocator::~ServiceLocator() {
        ClearAllService();
    }

    void ServiceLocator::CreateService() {
        graphicService = new GraphicService();
        eventService = new EventService();
        playerService = new PlayerService();
        timeService = new TimeService();
        uiService = new UIService();
        enemyService = new EnemyService();
    }

    void ServiceLocator::ClearAllService() {
        delete(graphicService);
        delete(eventService);
        delete(playerService);
        delete(timeService);
        delete(uiService);
        delete(enemyService);
    }

    ServiceLocator* ServiceLocator::GetInstance() {
        static ServiceLocator instance;
        return &instance;
    }

    void ServiceLocator::Initialize() {
        graphicService->Initialize();
        eventService->Initialize();
        playerService->Initialize();
        timeService->Initialize();
        uiService->Initialize();
        enemyService->Initialize();
    }

    void ServiceLocator::Update() {
        graphicService->Update();
        eventService->Update();
        playerService->Update();
        timeService->Update();
        uiService->Update();
        enemyService->Update();
    }

    void ServiceLocator::Render() {
        graphicService->Render();
        uiService->Render();
        playerService->Render();
        enemyService->Render();
    }

    GraphicService* ServiceLocator::GetGraphicsService() {
        return graphicService;
    }

    EventService* ServiceLocator::GetEventService() {
        return eventService;
    }

    PlayerService* ServiceLocator::GetPlayerService() {
        return playerService;
    }

    TimeService* ServiceLocator::GetTimeService() {
        return timeService;
    }

    UIService* ServiceLocator::GetUIService() {
        return uiService;
    }
    Enemy::EnemyService* ServiceLocator::GetEnemyService()
    {
        return enemyService;
    }
}
