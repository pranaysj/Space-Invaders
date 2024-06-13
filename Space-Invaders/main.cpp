#include<SFML/Graphics.hpp>
#include<iostream>

using namespace sf;
using namespace std;

class Player {
    public :
        int health = 3;
        Vector2f position = Vector2f(200.0f, 100.0f);
        int movement_speed = 5;
        int player_score = 0;
        
    private :
        Texture player_texture;
        Sprite player_sprite;

        void takeDamage();
        void move();
        void shootBullets();
};

int main() {

    // Define the video mode (dimensions)
    VideoMode* videoMode = new VideoMode(800, 600);

    // Create a window object with specific dimensions and a title
    RenderWindow* window= new RenderWindow(*videoMode, "SFML Window");

    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            // Check for window closure
            if (event.type == Event::Closed)
                window->close();
        }

        // Clear the window
        window->clear(Color::Blue);

        Player player;
        cout << player.movement_speed << "\n";

        // Display whatever you draw
        window->display();
    }

    return 0;
}