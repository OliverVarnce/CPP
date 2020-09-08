#pragma once
#include <map>
#include <string>
#include <iostream>

class Draugr {
public:
    Draugr();
    void shoutPhrase(int shoutNum) const;
private:
    double m_health;
    const int m_frostResist;
    const std::map<int, std::string> phrases;
};
