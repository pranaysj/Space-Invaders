//PRACTICE_BRANCH

#include<SFML/Graphics.hpp>
using namespace sf;
int main(){
    //definig the video mode (dimension)
    VideoMode videoMode = *(new VideoMode(800,600));
    //Create window object with dimesion an d title name 
    RenderWindow* window = new RenderWindow(videoMode, "Practice Window");

    //Set window posiiton
    window->setPosition(Vector2(100,100));

    //Game loop
    while(window->isOpen()){

        Event event;
        //Check the specific event(key) is pressed or not
        while(window->pollEvent(event)){
            //If event key is similar to closed event
            if(event.type == event.Closed){
                window->close();
            }
        }

        //framerate set 
        window->setFramerateLimit(60);

        //clear the window (default colour : black)
        window->clear();

        CircleShape circle(50); //Radius
        circle.setFillColor(Color::Red); //Fill colour
        circle.setPosition(0,0); //set position
        window->draw(circle);

        RectangleShape rectangle(Vector2f(10,20));
        rectangle.setFillColor(Color::Green);
        rectangle.setPosition(200,0);
        window->draw(rectangle);

        ConvexShape convex(5);
        convex.setFillColor(Color::Magenta);
        convex.setPosition(400,0);
        window->draw(convex);
        
        //Display what was draw
        window->display();
    }


    return 0;
}