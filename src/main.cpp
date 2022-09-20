#include <iostream>
#include <windows.h>

#include "Global.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "Render.hpp"

void clear();
void gameSpread(Monopoly::Player* players, int numPlayers);
void exitGame(Monopoly::Player* players);

int main () {
    top:
    clear();
    std::cout << "How many players do you want? (1-8)\n";

    int choice = 0;

    std::cin >> choice;

    if ((choice < 1) || (choice > 8)) goto top;

    Monopoly::Player* players = new Monopoly::Player[choice];

    bool wheelbarrowClaimed = false;
    bool thimbleClaimed = false;
    bool shoeClaimed = false;
    bool dogClaimed = false;
    bool tophatClaimed = false;
    bool ironClaimed = false;
    bool carClaimed = false;
    bool battleshipClaimed = false;

    for (int i = 0; i < choice; i++) {

        loopTop:
        clear();

        if (!wheelbarrowClaimed) std::cout << "(1) Wheelbarrow\n";
        if (!thimbleClaimed) std::cout << "(2) Thimble\n";
        if (!shoeClaimed) std::cout << "(3) Shoe\n";
        if (!dogClaimed) std::cout << "(4) Dog\n";
        if (!tophatClaimed) std::cout << "(5) Tophat\n";
        if (!ironClaimed) std::cout << "(6) Iron\n";
        if (!carClaimed) std::cout << "(7) Car\n";
        if (!battleshipClaimed) std::cout << "(8) Battleship\n";

        int pieceChoice;

        std::cin >> pieceChoice;

        if ((pieceChoice < 1) || (pieceChoice > 8)) goto loopTop;

        switch(pieceChoice) {
        case 1:
            if (!wheelbarrowClaimed) {
                wheelbarrowClaimed = true;
                players[i] = Monopoly::Player(Monopoly::WHEELBARROW);
                break;
            }
        case 2:
            if (!thimbleClaimed) {
                thimbleClaimed = true;
                players[i] = Monopoly::Player(Monopoly::THIMBLE);
                break;
            }
        case 3:
            if (!shoeClaimed) {
                shoeClaimed = true;
                players[i] = Monopoly::Player(Monopoly::SHOE);
                break;
            }
        case 4:
            if (!dogClaimed) {
                dogClaimed = true;
                players[i] = Monopoly::Player(Monopoly::DOG);
                break;
            }
        case 5:
            if (!tophatClaimed) {
                tophatClaimed = true;
                players[i] = Monopoly::Player(Monopoly::TOPHAT);
                break;
            }
        case 6:
            if (!ironClaimed) {
                ironClaimed = true;
                players[i] = Monopoly::Player(Monopoly::WHEELBARROW);
                break;
            }
        case 7:
            if (!carClaimed) {
                carClaimed = true;
                players[i] = Monopoly::Player(Monopoly::CAR);
                break;
            }
        case 8:
            if (!battleshipClaimed) {
                battleshipClaimed = true;
                players[i] = Monopoly::Player(Monopoly::BATTLESHIP);
                break;
            }
        default:
            goto loopTop;
        }

    }

    gameSpread(players, choice);

    exitGame(players);

    return Monopoly::GAME_CURRENT_STATUS;
}

void gameSpread(Monopoly::Player* players, int numPlayers) {
    // Define game state
    Monopoly::Game gameObj = Monopoly::Game(players, numPlayers);

    // Create rendering context
    GUI::Render renderObj = GUI::Render(30, 50, ' ');
}

void exitGame(Monopoly::Player* players) {
    delete[] players;
}

void clear() {
    system("clear");
}
