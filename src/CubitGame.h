#include <SFML/Window.hpp>
#include "Entity.h"
#include "Player.h"
#include "Level.h"
#include "Enemies.h"


class CubitGame {

public:
        CubitGame();
        void setupDisplay();
        void runLoop();
        void stop();
private:
        int getScore();
        int score;
        sf::Clock clock;
        sf::Window window;
        sf::Event event;
};
