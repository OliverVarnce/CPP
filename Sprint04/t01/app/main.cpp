#include "src/StormcloakSoldier.h"
#include "src/ImperialSoldier.h"
#include "src/Sword.h"
#include "src/Axe.h"
#include <iostream>
#include <string>
#include <algorithm>

bool IsInRange(const int &val, const int &from, const int &to) {
    return (val >= from && val <= to);
}

int getDamage(std::string&& arg) {
    size_t idx;
    int weaponDmg = stoi(arg, &idx);

    if (!IsInRange(weaponDmg, 10, 20) || arg[idx] != '\0')
        throw false;
    return weaponDmg;
}


int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]\n";
        exit(1);
    }
    try {
        Sword *sword = new Sword(getDamage(std::string(argv[1])));
        Axe *axe = new Axe(getDamage(std::string(argv[2])));
        ImperialSoldier imperial;
        StormcloakSoldier stormcloak;

        imperial.setWeapon(sword);
        stormcloak.setWeapon(axe);

        while (imperial.getHealth() > 0 && stormcloak.getHealth() > 0) {
            imperial.attack(stormcloak);
            stormcloak.attack(imperial);
            std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>\n";
            if (stormcloak.getHealth() <= 0) {
                std::cout << "Imperial has won!" << std::endl;
                return 1;
            }
            if (imperial.getHealth() <= 0) {
                std::cout << "Stormcloack has won!" << std::endl;
                return 1;
            }
        }
    }
    catch (...) {
        std::cerr << "Damage has to be in a range of 10-20 points.\n";
        exit(1);
    }
}
