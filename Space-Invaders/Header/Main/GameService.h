#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Global/ServiceLocator.h"
using namespace sf;

class GameService{
    private :
        ServiceLocator *serviceLocator;
        RenderWindow *gameWindow;

        void Initialize();
        void InitializeVariable();
        void Destory();

    public :
        GameService();
        ~GameService();

        void Ignite();
        void Update();
        void Render();
        bool IsRunning();
};