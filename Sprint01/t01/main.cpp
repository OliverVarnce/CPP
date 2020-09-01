#include "src/moveAlong.h"

int main(int argc, char** argv) {
    if (argc == 1) {
        std::cerr << "usage: ./moveAlong [args]" << std::endl;
        exit(1);
    }

    std::vector<std::string> arguments;

    for (int i = 1; i < argc; ++i)
        arguments.push_back(argv[i]);
    moveAlong(arguments);
    return 0;
}