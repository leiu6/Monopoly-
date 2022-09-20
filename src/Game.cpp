#include "Global.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "Render.hpp"

namespace Monopoly {
    Game::Game(Player* players, int numPlayers) {
        this->players = players;
        this->numPlayers = numPlayers;

        this->bank = Bank();

        for (int i = 0; i < numPlayers; i++) {
            // Pay all players initial amount
            if (!bank.moneyFromBank(this->players[i], 1500)) GAME_CURRENT_STATUS = GAME_ERROR;
        }
    }

    void Game::renderGameBoard(GUI::Render& renderContext) {
        renderContext.clearBuffer(); // clear the back buffer
        
        

    }
}
