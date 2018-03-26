#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
    std::cout << "Roses are red, \nviolets are blue, \nprogramming seems harder, \nthan learning kung fu." << std::endl;

    sf::RenderWindow window(sf::VideoMode(400, 400), "Hello, SFML world!");
    window.setFramerateLimit(60);
    Cvijet cvijet(&window);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        cvijet.draw();
        window.display();
    }

    return 0;
}