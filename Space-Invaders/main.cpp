#include<SFML/Graphics.hpp>
using namespace sf;

int main()
{
    VideoMode* videoMode = new VideoMode(1080,720);
    RenderWindow* window = new RenderWindow(*videoMode,"SFML",Style::Fullscreen);
    //window->setFramerateLimit(60);
    window->setPosition(Vector2i(0,0));
    while (window->isOpen())
    {
        Event event;
        while (window->pollEvent(event))
        {
            if (event.type == Event::Closed) {
                window->close();
            }
        }


        window->clear(Color::Blue);
        CircleShape circle(50);
        circle.setFillColor(sf::Color::Red); 
        circle.setPosition(window->getSize().x / 2 - circle.getRadius(), window->getSize().y / 2 - circle.getRadius());
        window->draw(circle);
        window->display();
    }

   
    
    return 0;
}