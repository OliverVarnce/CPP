#include <iostream>
#include <regex>
#include "Draugr.h"

int getNum(int argc, char *argv[]) {
    int number = std::stoi(argv[1]);
    if ((number < 0) || (number > 8))
        throw 1;
    return number;
}

std::pair<double, int> getNumbers(int argc, char *argv[]) {
    if (argc == 3) {
        double health = std::stod(argv[2]);
        int frost = std::stoi(argv[2]);
        return {health, frost};
    }
    if (argc == 4) {
        double health = std::stod(argv[2]);
        int frost = std::stoi(argv[3]);

        if (frost > 100)
            throw 1;
        return {health, frost};
    }
    return {0,0};
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

int main(int argc, char* argv[]) {
    int number = 0;
    std::pair<double, int> health_frost;

    if (argc == 1 || argc > 4) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]" << std::endl;
        return 1;
    }
    try {
        number = getNum(argc, argv);
    } catch (...) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        return 1;
    }
    try {
        health_frost = getNumbers(argc, argv);
    } catch (...) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    draugrs(argc, health_frost, number);

}
