#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Captain : public Player
    {
    private:
    public:
        Captain(Game &game, const std::string &name);
        void steal(Player &r);
        void block(Player &p);
        std::string role() const ;
    };
}
