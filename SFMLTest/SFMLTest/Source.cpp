#include <SFML\Graphics.hpp>

int main()
{
    int moveX = 20;
    bool isMovingRight = true;
    //Creates an instance of a window with name "testWindow".
    sf::RenderWindow testWindow;

    //Creates a window with a resolution of 640 x 480 pixels.
    testWindow.create(sf::VideoMode(640, 480), "SFML_TEST");

    //Sets the maximum framelimit of the "testWindow" window instance to 24.
    testWindow.setFramerateLimit(24);
    
    //Program runs while the window is open.
    while (testWindow.isOpen()) 
    {
        //Creates an instance of an event with the name "testEvent".
        sf::Event testEvent;

        //Checks for events.
        while (testWindow.pollEvent(testEvent)) 
        {
            //Terminates the window if the window is closed.
            if (testEvent.type == sf::Event::Closed) 
            {
                testWindow.close();
            }
        }

        //Updates the background of the "testWindow" window instance with a colour referenced in the clear() function.
        testWindow.clear(sf::Color::Black);

        //Creates an instance of a rectangle with a width and height of 100 pixels, fills the instance with a colour and draws the instance.
        sf::RectangleShape exampleShape(sf::Vector2f(100.0f, 100.0f));
        exampleShape.setPosition(100, 100);
        exampleShape.setFillColor(sf::Color(200,200,50));
        testWindow.draw(exampleShape);

        //Displays the "testWindow" window intstance.
        testWindow.display();
    }

    return 0;
}