#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

#include "Global.hpp"
#include "Player.hpp"

namespace Monopoly {
    class Bank {
    private:
        int money;
        int hotels;
        int houses;

    public:
        Bank();
        bool moneyToBank(Player& player, int amount);
        bool moneyFromBank(Player& player, int amount);
        bool houseToBank(Player& player, Property& property, int number);
        bool houseFromBank(Player& player, Property& property, int number);
        bool hotelToBank(Player& player, Property& property);
        bool hotelFromBank(Player& player, Property& property);
        int getBankBalance();
        int getBankHotels();
        int getBankHouses();
    };
}

#endif // BANK_H_INCLUDED
