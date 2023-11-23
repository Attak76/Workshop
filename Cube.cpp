#include "Cube.h"

Cube::Cube(int tcote) : Objet2D(tcote, tcote) {}

int Cube::getCote() {
    return dim1; // dim1 and dim2 are the same for a cube
}

int Cube::getPerimetre() {
    return 4 * dim1; // Perimeter of all edges
}

int Cube::getAire() {
    return dim1 * dim1; // Area of all faces
}

std::string Cube::afficheInfo() {
    return "CARRÉ : \nCôté : " + std::to_string(dim1);
}