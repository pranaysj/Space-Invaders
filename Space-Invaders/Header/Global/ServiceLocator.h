#pragma once
#include "../../Header/Graphics/GraphicService.h"
#include "../../Header/Event/EventService.h"
#include "../../Header/Player/PlayerService.h"
#include "../../Header/Time/TimeService.h"

class ServiceLocator{
    private :

        GraphicService *graphicService;
        EventService *eventService;
        PlayerService *playerService;
        TimeService *timeService;

        ServiceLocator();
        ~ServiceLocator();

        void CreateService();
        void ClearAllService();

    public :
        static ServiceLocator* GetInstance();

        void Initialize();
        void Update();
        void Render();

        GraphicService *GetGraphicsService();
        EventService *GetEventService();
        PlayerService *GetPlayerService();
        TimeService *GetTimeService();
};