#include<SFML/Graphics.hpp>
using namespace sf;

int main()
{
    VideoMode* videoMode = new VideoMode(1080,720);
    RenderWindow* window = new RenderWindow(*videoMode,"SFML",Style::Default);

    while (window->isOpen())
    {
        Event event;
        while (window->pollEvent(event))
        {
            if (event.type == Event::Closed) {
                window->close();
            }
        }

        window->clear(Color::White);

        //Green Circle
        CircleShape circle(100);
        circle.setFillColor(Color::Green);
        circle.setPosition(0,0);
        window->draw(circle);

        //Red Square 
        RectangleShape square(Vector2f(180,180));
        square.setFillColor(Color::Red);
        square.setPosition((window->getSize().x - square.getSize().x) - 2, (window->getSize().y / 2) - square.getSize().y);
        window->draw(square);

        //Blue Triangle
        CircleShape triangle(100,3);
        triangle.setFillColor(Color::Blue);
        triangle.setPosition(400,0);
        window->draw(triangle);

        window->display();
    }

   
    
    return 0;
}