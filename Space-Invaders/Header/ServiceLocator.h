#pragma once
#include "../Header/GraphicService.h"
#include "../Header/EventService.h"

class ServiceLocator{
    private :

        GraphicService *graphicService;
        EventService *eventService;

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
};