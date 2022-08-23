#include <iostream>
#include <string>
#include "Duke.hpp"

namespace coup
{
    Duke::Duke(Game &game, const std::string &name) : Player(game, name) {}
    void Duke::tax() {}
    void Duke::block(Player &p) {}
    std::string Duke::role() const
    {
        return "Duke";
    }
}
