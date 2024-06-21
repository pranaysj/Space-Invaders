#pragma once
#include<SFML/Graphics.hpp>
#include "../../Header/Player/PlayerController.h"
using namespace sf;

class PlayerService{
    private :
        PlayerController* playerController;
    public :

        PlayerService();
        ~PlayerService();

        void Initialize();
        void Update();
        void Render();

};