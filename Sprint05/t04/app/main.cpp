#include "ImperialSoldier.h"
#include "StormcloakSoldier.h"
#include "Axe.h"
#include "Sword.h"
#include <utility>
#include <string>
#include <iostream>

std::pair<int, int> getDamage(char* argv[]) {
    int swordDmg = std::stoi(argv[1]);
    int axeDmg = std::stoi(argv[2]);
    
    if (swordDmg > 20
        || swordDmg < 10
        || axeDmg > 20
        || axeDmg < 10) {
            throw std::exception();
        }
    return {swordDmg, axeDmg};
}

bool CreateSoliders(ImperialSoldier* &imperial, StormcloakSoldier* &storm, char *argv[]) {
    std::pair<int, int> damage;
    Weapon *sword = nullptr;
    Weapon *axe = nullptr;

    try {
        damage = getDamage(argv);
    } catch(...) {
        std::cerr << "Damage has to be in a range of 10-20 points." << std::endl;
        return false;
    }
    sword = new Sword(damage.first);
    axe = new Axe(damage.second);
    imperial = new ImperialSoldier();
    storm = new StormcloakSoldier();
    imperial->setWeapon(sword);
    storm->setWeapon(axe);
    return true;
}

inline void end_turn() {
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
}

void Fight(ImperialSoldier *imperial, StormcloakSoldier *storm) {
    std::cout << std::endl << "***The battle has begun!***" << std::endl << std::endl;
    while (imperial->getHealth() > 0 && storm->getHealth() > 0) {
        storm->attack(*imperial);
        if (imperial->getHealth() <= 0)
            break;
        imperial->attack(*storm);
        if (storm->getHealth() <= 0)
            break;
        end_turn();
    }
    end_turn();
    if (imperial->getHealth() <= 0)
        std::cout << "Stormcloak has won!" << std::endl << std::endl;
    else
        std::cout << "Imperial has won!" << std::endl << std::endl;
}

int main(int argc, char* argv[]) {
    ImperialSoldier *imperial = nullptr;
    StormcloakSoldier *storm = nullptr;

    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]" << std::endl;
        return 1;
    }
    if (!CreateSoliders(imperial, storm, argv))
        return 1;
    Fight(imperial, storm);
    delete storm;
    delete imperial;
}
