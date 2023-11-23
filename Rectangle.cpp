#include "Rectangle.h"

Rectangle::Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2) {}

int Rectangle::getLongueur() {
    return dim1;
}

int Rectangle::getLargeur() {
    return dim2;
}

int Rectangle::getPerimetre() {
    return 2 * (dim1 + dim2);
}

int Rectangle::getAire() {
    return dim1 * dim2;
}

std::string Rectangle::afficheInfo() {
    return "RECTANGLE: \nLongueur : " + std::to_string(dim1) + ", Largeur : " + std::to_string(dim2);
}