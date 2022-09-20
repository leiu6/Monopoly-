#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Global.hpp"

namespace Monopoly {
    class Player {
        public:
        Location location;
        Piece piece;
        int money;
        bool isInJail;
        int numProperties;
        Property properties[40];

        Player();
        Player(Piece choice);
    };
}

#endif // PLAYER_H_INCLUDED