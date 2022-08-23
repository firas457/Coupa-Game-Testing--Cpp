#include "Player.hpp"

namespace coup {
    void Player::income() {}
    void Player::foreign_aid() {}
    void Player::coup(Player &player) {}
    Player::Player(Game &game, const std::string &name) :
            game(game), name(name), _coins_num(0) {
    }
    int Player::coins() const {
        return this->_coins_num;
    }
}
