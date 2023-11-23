#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Objet2D.h"

class Rectangle : public Objet2D {
public:
    Rectangle(int tdim1, int tdim2);
    int getLongueur();
    int getLargeur();
    int getPerimetre() override;
    int getAire() override;
    std::string afficheInfo() override;
};

#endif // RECTANGLE_H