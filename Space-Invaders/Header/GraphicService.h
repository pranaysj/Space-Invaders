// #include <string>
#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>

class GraphicService{
    private :
        
        const string game_window_title = "Outscal Presents - Alien Invader"; 
        const int game_window_width = 800;
        const int game_window_height = 600;
        const sf::Color window_color = sf::Color::Blue;

        sf::VideoMode *videoMode;
        sf::RenderWindow *gameWindow;

        void setVideoMode();
        void OnDestory();

    public :
        GraphicService();
        ~GraphicService();

        sf::RenderWindow *createGameWindow();

        void Initialize();
        void Update();
        void Render();
        bool isGameWindowOpen();

        sf::RenderWindow *GetGameWindow();
        sf::Color getColorWindow();
};