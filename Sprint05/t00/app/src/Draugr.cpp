#include "Draugr.h"

Draugr::Draugr() 
    : phrases({
      {0, "Qiilaan Us Dilon!"},
      {1, "Bolog Aaz, Mal Lir!"},
      {2, "Kren Sosaal!"},
      {3, "Dir Volaan!"},
      {4, "Aar Vin Ok!"},
      {5, "Unslaad Krosis!"},
      {6, "Faaz! Paak! Dinok!"},
      {7, "Aav Dilon!"},
      {8, "Sovngarde Saraan!"}}),
      m_health(100),
      m_frostResist(50) 
{

}

void Draugr::shoutPhrase(int shoutNum) const {
  if ((shoutNum > 8) || (shoutNum < 0)) {
    std::cerr << "Invalid shoutNumber" << std::endl;
    return ;
  }
  std::cout << "Draugr (100 health, 50% frost resist) shouts:" << std::endl;
  std::cout << phrases.at(shoutNum) << std::endl;
}
