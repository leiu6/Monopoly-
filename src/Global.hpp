#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

//#define GAME_LOG_VISIBLE

#include <iostream>
#include <string>

namespace Monopoly {

    extern const int VIEWPORT_HEIGHT;
    extern const int VIEWPORT_WIDTH;
    extern const char VIEWPORT_FILL_INIT;

    enum Location {
        GO,
        MEDITERRANEAN_AVENUE,
        COMMUNITY_CHEST_1,
        BALTIC_AVENUE,
        INCOME_TAX,
        READING_RAILROAD,
        ORIENTAL_AVENUE,
        CHANCE_1,
        VERMONT_AVENUE,
        CONNECTICUIT_AVENUE,
        JUST_VISITING,
        ST_CHARLES_PLACE,
        ELECTRIC_COMPANY,
        STATES_AVENUE,
        VIRGINIA_AVENUE,
        PENNSYLVANIA_RAILROAD,
        ST_JAMES_PLACE,
        COMMUNITY_CHEST_2,
        TENNESSEE_AVENUE,
        NEW_YORK_AVENUE,
        FREE_PARKING,
        KENTUCKY_AVENUE,
        CHANCE_2,
        INDIANA_AVENUE,
        ILLINOIS_AVENUE,
        BO_RAILROAD,
        ATLANTIC_AVENUE,
        VENTNOR_AVENUE,
        WATER_WORKS,
        MARVIN_GARDENS,
        GO_TO_JAIL,
        PACIFIC_AVENUE,
        NORTH_CAROLINA_AVENUE,
        COMMUNITY_CHEST_3,
        PENNSYLVANIA_AVENUE,
        SHORT_LINE,
        CHANCE_3,
        PARK_PLACE,
        LUXURY_TAX,
        BOARDWALK
    };

    enum Piece {
        WHEELBARROW,
        THIMBLE,
        SHOE,
        DOG,
        TOPHAT,
        IRON,
        CAR,
        BATTLESHIP,
        NULL_PIECE
    };

    enum Group {
        PURPLE,
        LAVENDER,
        MAGENTA,
        ORANGE,
        RED,
        YELLOW,
        GREEN,
        BLUE,
        UTILITY,
        RAILROAD
    };

    struct Property {
        Location location;
        int houses;
        int hotels;

        int cost;
        int mortgageCost;
        int housesCost;
        int hotelsCost;

        int rent;
        int rentMonopoly;
        int rentOneHouse;
        int rentTwoHouses;
        int rentThreeHouses;
        int rentFourHouses;
        int rentHotel;

        int diceMultiplierSingle;
        int diceMultiplierDouble;
    };

    enum GameStatus {
        GAME_NORMAL = 0,
        GAME_ERROR = -1
    };

    extern GameStatus GAME_CURRENT_STATUS;

    void gameLog(std::string message);
    void gameLogVariable(std::string varName, double variable);
}

#endif
