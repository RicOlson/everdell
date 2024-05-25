#include <iostream>
#include "Game.h"

Game::Game() {

}

void Game::RunGame() {

    while (CheckEndConditions()) {
       std::cout << "I guess we will keep playing!" << std::endl;
    }

    std::cout << "Thank you for playing!" << std::endl;
    
}

bool Game::CheckEndConditions() {

    std::string answer = "";

    while (answer != "y" || answer != "n") {

        std::cout << "Do you want to keep playing?" << std::endl;
        std::cin >> answer;
    }
    
    if (answer == "n" || answer  == "N" || answer == "no" || answer == "No" || answer == "NO") {
        return true;
    }

    return false;
}