#pragma once
#include <map>
#include <string>
#include <iostream>

class Draugr {
public:
    explicit Draugr();
    explicit Draugr(int frostResist);
    explicit Draugr(double health, int frostResist = 50);
    void shoutPhrase(int shoutNum) const;
private:
    double m_health;
    const int m_frostResist;
};
