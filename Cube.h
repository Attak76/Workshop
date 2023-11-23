#ifndef CUBE_H
#define CUBE_H

#include "Objet2D.h"

class Cube : public Objet2D {
public:
    Cube(int cote);
    int getCote();
    int getPerimetre() override;
    int getAire() override;
    std::string afficheInfo() override;
};

#endif // CUBE_H