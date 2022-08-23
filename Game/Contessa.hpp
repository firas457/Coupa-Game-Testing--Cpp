#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Contessa : public Player
    {
    private:
    public:
        std::string role() const;
        Contessa(Game &game, const std::string &name);
        void block(Player &assassin);
    };
}
