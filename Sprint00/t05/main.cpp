#include <iostream>
#include <string>

static void fin(char *str, size_t ptr) {
    if (str[ptr] != 0)
        throw 1;
}

static void validator(char **argv) {
    int count = 2;
    auto ptr = 0ul;

    try {
        std::stoi(argv[count], &ptr);
        fin(argv[count], ptr);
        std::stof(argv[++count], &ptr);
        fin(argv[count], ptr);
        std::stod(argv[++count], &ptr);
        fin(argv[count], ptr);
    } catch (...) {
        std::cerr << "Invalid argument: " << argv[count] << std::endl;
        exit(1);
    }
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]" << std::endl;
        return 1;
    } else
        validator(argv);

    std::cout << "Name = " << argv[1] << std::endl;
    std::cout << "Level = " << argv[2] << std::endl;
    std::cout << "Health = " << argv[3] << std::endl;
    std::cout << "Stamina = " << argv[4] << std::endl;
    return 0;
}