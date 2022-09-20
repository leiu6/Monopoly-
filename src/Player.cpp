#include "Global.hpp"
#include "Player.hpp"

namespace Monopoly {
    Player::Player() {
        this->location = GO;
        this->piece = NULL_PIECE;
        this->money = 0;
        this->isInJail = false;
        this->numProperties = 0;
    }

    Player::Player(Piece choice) {
        this->location = GO;
        this->piece = choice;
        this->money = 0;
        this->isInJail = false;
        this->numProperties = 0;
    }
}