#pragma onece
#include <SFML/Graphics.hpp>
#include "ServiceLocator.h"

class GameService{
    private :
        ServiceLocator *serviceLocator;
        sf::RenderWindow *gameWindow;

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