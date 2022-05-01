#include <iostream>
#include "Player.hpp"


namespace coup
{
    class Ambassador : public Player
    {
    private:
    public:
        Ambassador(Game &game, const std::string &name);
        void transfer(Player &p1, Player &p2);
        void block_Thief(Player &p);
        void block(Player &p);
        std::string role() const;
    };
}


