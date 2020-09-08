#include <iostream>
#include <regex>
#include "Draugr.h"

int getNum(char *str, int min, int max) {
    int number = std::stoi(str);

    if ((number < min) || (number > max))
        throw 1;
    return number;
}

int getNum_Health(char *str) {
    int number = std::stod(str);

    return number;
}

int getNum_Frost(char *str) {
    int number = std::stoi(str);

    if (number > 100)
        throw 1;
    return number;
}

void draugrs(int argc, const std::pair<double, int>& pair, int number) {
    if (argc == 2) {
        Draugr dr;
        dr.shoutPhrase(number);
    }
    if (argc == 3) {
        Draugr dr1(pair.first);
        dr1.shoutPhrase(number);
        Draugr dr2(pair.second);
        dr1.shoutPhrase(number);
    }
    if (argc == 4) {
        Draugr dr1(pair.first, pair.second);
        dr1.shoutPhrase(number);
    }
}

bool isStrExistPat(std::string str, const std::regex& reg) {
    std::smatch s;

    if (std::regex_match(str, s, reg)) {
        return true;
    }
    return false;
}

std::pair<std::string, std::string> getStrs(std::string str) {
    std::regex reg("([a-zA-Z]+),([a-zA-Z]+)");
    std::smatch s;

    std::regex_match(str, s, reg);
    return {s[1], s[2]};
}

bool validator(int argc, char* argv[]) {
    if (argc != 4 && argc != 5) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]" << std::endl;
        return false;
    }
    try {
        getNum(argv[1], 0, 8);
    } catch (...) {
        std::cerr << "Invalid shoutNum" << std::endl;
        return false;
    }
    try {
        getNum_Health(argv[3]);
        if (argc == 5)
            getNum_Frost(argv[4]);
    } catch (...) {
        std::cerr << "Error" << std::endl;
        return false;
    }
    if (!isStrExistPat(argv[2], std::regex("([a-zA-Z]+),([a-zA-Z]+)"))) {
        std::cerr << "Invalid names" << std::endl;
        return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    if (!validator(argc, argv))
        return 1;
    int number = getNum(argv[1], 0, 8);
    double health = getNum_Health(argv[3]);
    std::pair<std::string, std::string> names = getStrs(argv[2]);
    if (argc == 4) {
        Draugr dr1(health);
        dr1.setName(std::string(names.first));
        dr1.shoutPhrase(number);
        Draugr dr2(dr1);
        dr2.setName(std::string(names.second));
        dr2.shoutPhrase(number);
    }
    else if (argc == 5) {
        int frost = getNum_Frost(argv[4]);
        Draugr dr1(health, frost);
        dr1.setName(std::string(names.first));
        dr1.shoutPhrase(number);
        Draugr dr2(std::move(dr1));
        dr2.setName(std::string(names.second));
        dr2.shoutPhrase(number);
    }
}
