#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Trevor's Music App", sf::Style::Close | sf::Style::Resize);
    sf::RectangleShape background = sf::RectangleShape((sf::Vector2f) window.getSize());
    background.setFillColor(sf::Color(86, 65, 65));
    sf::Event evnt;

    // main activity loop
    while(window.isOpen()) {
        // window event handling
        while(window.pollEvent(evnt)) {
            switch(evnt.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                
                case sf::Event::Resized | sf::Event::GainedFocus | sf::Event::LostFocus:
                    background.setSize((sf::Vector2f) window.getSize());
            }
        }

        window.clear();
        window.draw(background);
        window.display();
    }

    return 0;
}