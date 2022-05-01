#include "Game.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <vector>


namespace coup
{
    Game::Game()
    {
    }
    std::string Game::turn() { return "t"; }
    std::vector<std::string> Game::players()
    {
        std::vector<std::string> st;
        return st;
    }
    std::string Game::winner() { return "win"; }
}