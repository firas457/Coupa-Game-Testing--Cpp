#include <iostream>
#include "Ambassador.hpp"

namespace coup {
    Ambassador::Ambassador(Game &game, const std::string &name)
            : Player(game, name) {
    }
    void Ambassador::transfer(Player &p1, Player &p2) {}
    std::string Ambassador::role() const {
        return "Ambassador";
    }
    void Ambassador::block_Thief(Player &p) {}
    void Ambassador::block(Player &p) {}
}
