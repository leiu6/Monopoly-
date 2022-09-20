#include "Global.hpp"

#include <iostream>
#include <string>

namespace Monopoly {
    const int VIEWPORT_HEIGHT = 30;
    const int VIEWPORT_WIDTH = 50;
    const char VIEWPORT_FILL_INIT = ' ';

    GameStatus GAME_CURRENT_STATUS = GAME_NORMAL;

    void gameLog(std::string message) {
        #ifdef GAME_LOG_VISIBLE
        std::cout << message << "\n";
        #endif
    }

    void gameLogVariable(std::string varName, double variable) {
    	#ifdef GAME_LOG_VISIBLE
	std::cout << "Var: " << varName << ". Val: " << variable << "\n";
	#endif
    }
}
