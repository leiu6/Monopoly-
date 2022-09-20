#include "Bank.hpp"

namespace Monopoly {
    Bank::Bank() {
        this->money = 30000;
        this->hotels = 32;
        this->houses = 32;
    }

    bool Bank::moneyToBank(Player& player, int amount) {
        // Check if player has enough money
        if (player.money < amount) return false;

        player.money -= amount;
        this->money += amount;

        return true;
    }

    bool Bank::moneyFromBank(Player& player, int amount) {
        // Check if bank has enough money
        if (this->money < amount) return false;

        this->money -= amount;
        player.money += amount;

        return true;
    }

    int Bank::getBankBalance() { return this->money; }

    int Bank::getBankHouses() { return this->houses; }

    int Bank::getBankHotels() { return this->hotels; }
}
