#pragma once

class ServiceLocator{
    private :
        ServiceLocator();
        ~ServiceLocator();
        void CreateServiceLocator();
        void ClearAllServiceLocator();

    public :
        static ServiceLocator* GetInstance();
        void Initialize();
        void Update();
        void Render();
};