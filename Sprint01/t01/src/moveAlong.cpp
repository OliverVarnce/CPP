#include "moveAlong.h"

void moveAlong(std::vector<std::string> args) {
    std::vector<std::string> tmp = args;

    for (int i = 0; i < tmp.size(); i++) {
        for (int j = 0; tmp[i][j]; j++)
            tmp[i][j] = tolower(tmp[i][j]);

        if (tmp[i].find("mercer") != std::string::npos ||
            tmp[i].find("emer") != std::string::npos ||
            tmp[i].find("jim") != std::string::npos)
            std::cout << args[i] << ", move along!" << std::endl;
    }
}
