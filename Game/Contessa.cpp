#include "Contessa.hpp"

namespace coup
{
    Contessa::Contessa(Game &game, const std::string &name) : Player(game, name) {}
    void Contessa::block(Player &assassin) {}
    std::string Contessa::role() const
    {
        return "Contessa";
    }
}
