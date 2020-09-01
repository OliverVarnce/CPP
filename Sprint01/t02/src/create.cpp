#include "visitAll.h"

std::string trim(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && isspace(*it))
        it++;

    std::string::const_reverse_iterator rit = s.rbegin();
    while (rit.base() != it && isspace(*rit))
        rit++;

    return std::string(it, rit.base());
}

City *create(char *str, int counter) {
    std::string temp;
    std::vector<std::string> pars;
    std::stringstream ss;
    City *city = new City;
    ss << str;

    while (std::getline(ss, temp, ',')) {
        temp = trim(temp);
        pars.push_back(temp);
    }
    try {
        if (isStr(pars[0]))
            throw false;
        if (isNum(pars[1]))
            throw false;
        if (isNum(pars[2]))
            throw false;
    }
    catch (...) {
        std::cout << "Argument " << str << " is not valid" << std::endl;
        exit(1);
    }
    city->name = pars[0];
    city->stamina = pars[1];
    city->distance = pars[2];
    city->counter = counter;
    return city;
}
