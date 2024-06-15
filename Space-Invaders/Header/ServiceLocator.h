#pragma once
#include "GraphicService.h"

class ServiceLocator{
    private :

        GraphicService *graphicService;

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
};