#include "Draugr.h"

Draugr::Draugr() : Draugr(100, 50) {
}

Draugr::Draugr(int frostResist)
  : Draugr(100, frostResist) {

}
Draugr::Draugr(double health, int frostResist)
  : m_health(health),
    m_frostResist(frostResist) {
      std::cout << "Draugr with "
        << m_health << " health and "
        << m_frostResist << "% frost resist was born!" << std::endl;
}

void Draugr::shoutPhrase(int shoutNum) const {
  std::map<int, std::string> phrases({
      {0, "Qiilaan Us Dilon!"},
      {1, "Bolog Aaz, Mal Lir!"},
      {2, "Kren Sosaal!"},
      {3, "Dir Volaan!"},
      {4, "Aar Vin Ok!"},
      {5, "Unslaad Krosis!"},
      {6, "Faaz! Paak! Dinok!"},
      {7, "Aav Dilon!"},
      {8, "Sovngarde Saraan!"}});

  if ((shoutNum > 8) || (shoutNum < 0)) {
    std::cerr << "Invalid shoutNumber" << std::endl;
    return ;
  }
  std::cout << "Draugr (" << m_health << " health, " << m_frostResist
            << "% frost resist) shouts:" << std::endl;
  std::cout << phrases.at(shoutNum) << std::endl;
}
