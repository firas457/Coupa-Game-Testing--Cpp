#include "Captain.hpp"

namespace coup
{
    Captain::Captain(Game &game, const std::string &name) : Player(game, name) {}
    void Captain::block(Player &p) {}
    void Captain::steal(Player &r) {}
    std::string Captain::role() const
    {
        return "Captain";
    }
}