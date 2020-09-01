#include "visitAll.h"

bool isStr(std::string str) {
    if (str.size() == 0)
        return true;
    for (int i = 0; i < str.size(); i++)
        if (std::isalpha(str[i]) == false)
            return true;
    return false;
}