#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Trevor's Music App", sf::Style::Close | sf::Style::Resize);

    // main activity loop
    while(window.isOpen()) {
        // window event handling
        sf::Event winEvent;
        while(window.pollEvent(winEvent)) {

            switch(winEvent.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    std::cout << winEvent.size.width << ", " << winEvent.size.height << std::endl;
                    break;
            }
        }
    }

    return 0;
}