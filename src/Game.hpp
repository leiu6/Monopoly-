#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "Global.hpp"
#include "Player.hpp"
#include "Bank.hpp"
#include "Render.hpp"

namespace Monopoly {
    class Game {
    public:
        Player* players;
        Bank bank;
        int numPlayers;

        Game(Player* players, int numPlayers);
        void renderGameBoard(GUI::Render& renderContext);
    };
}

#endif
