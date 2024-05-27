#include<SFML/Graphics.hpp>
using namespace sf;

int main()
{
    VideoMode* videoMode = new VideoMode(800,800);
    RenderWindow* window = new RenderWindow(*videoMode,"SFML",Style::Default);
    //window->setFramerateLimit(60);
    while (window->isOpen())
    {
        window->setPosition(Vector2i(0,0));
        Event event;
        while (window->pollEvent(event))
        {
            if (event.type == Event::Closed) {
                window->close();
            }
        }


        window->clear(Color::Green);


        window->display();
    }

   
    
    return 0;
}