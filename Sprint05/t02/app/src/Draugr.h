#pragma once
#include <map>
#include <string>
#include <iostream>

class Draugr {
public:
    explicit Draugr();
    Draugr(Draugr& other);
    Draugr(Draugr&& other);
    explicit Draugr(int frostResist);
    explicit Draugr(double health, int frostResist = 50);
    void shoutPhrase(int shoutNum) const;
    void setName(const std::string&& name);
private:
    double m_health;
    const int m_frostResist;
    std::string m_name;
};
