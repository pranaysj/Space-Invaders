#include<SFML/Graphics.hpp>
#include "MAIN.H"
#include <iostream>

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
        //Red Square 
        RectangleShape square(Vector2f(180,180));
        square.setFillColor(Color::Red);
        //Blue Triangle
        CircleShape triangle(130,3);
        triangle.setFillColor(Color::Blue);

        //Set the Positioin of all shapes
        circle.setPosition(
            (window->getSize().x / 2) - (circle.getRadius() * 3.5),
            (window->getSize().y / 2) - circle.getRadius());
        square.setPosition(
            (window->getSize().x / 2) - square.getSize().x / 2,
            (window->getSize().y / 2) - square.getSize().y / 2);
        triangle.setPosition(
            (window->getSize().x / 2) + (triangle.getRadius()),
            (window->getSize().y / 2) - (triangle.getRadius() - 15));

        //Drawing the shapes with specific order
        window->draw(circle);
        window->draw(square);
        window->draw(triangle);

        window->display();
    }

   
    
    return 0;
}