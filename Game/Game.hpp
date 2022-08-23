#ifndef CPP_EX4
#define CPP_EX4

#include <iostream>
#include <vector>
#include <string>

namespace coup
{
    class Player;
    class Game
    {
    private:
        std::vector<Player *> Players_names;
        bool isGameActive();
    public:
        Game();
        std::string turn();
        std::vector<std::string> players();
        std::string winner();
    };
}; 

#endif

