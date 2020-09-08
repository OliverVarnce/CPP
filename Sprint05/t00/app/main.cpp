#include <iostream>
#include <regex>
#include "Draugr.h"

int main(int argc, char* argv[]) {
    Draugr draugr;

    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]" << std::endl;
        return 1;
    }
    try {
        int number = std::stoi(argv[1]);
        draugr.shoutPhrase(number);
    }
    catch (...) {
        std::cerr << "Invalid shoutNumber" << std::endl;
    }
}
