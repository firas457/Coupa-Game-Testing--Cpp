#include <iostream>
#include <string>
#include "Game.hpp"

#ifndef CPP_EX4_PLAYER_HPP
#define CPP_EX4_PLAYER_HPP

namespace coup
{
    class Player
    {
    private:
        int _coins_num;
        Game &game;
        std::string name;
    protected:
        Player(Game &g, const std::string &name);
    public:
        void income();
        virtual void foreign_aid();
        void coup(Player &player);
        virtual std::string role() const = 0;
        int coins() const;
    };
};
#endif
