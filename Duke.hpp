#include <iostream>
#include "Player.hpp"

namespace coup
{
    class Duke : public Player
    {
    private:
    public:
        Duke(Game &game, const std::string &name);
        std::string role() const;
        void tax();
        void block(Player &p);
    };
}
