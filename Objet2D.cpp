#include "Objet2D.h"
#include <string>
#include <iostream>

using namespace std;

Objet2D::Objet2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2) {}

Objet2D* Objet2D::getSuivant() const {
    return Suivant;
}

void Objet2D::setSuivant(Objet2D* nouveauSuivant) {
    Suivant = nouveauSuivant;
}

int Objet2D::getPerimetre(void) {
    int perimeter = (this->dim1 * 2) + (this->dim2 * 2);
    return perimeter;
}

int Objet2D::getAire(void) {
    int Aire = this->dim1 * this->dim2;
    return Aire;
}

string Objet2D::afficheInfo() {
    int Aire = this->dim1 * this->dim2;
    int perimeter = (this->dim1 * 2) + (this->dim2 * 2);
    cout << "L'aire \nde l'objet 2D est de : " << Aire << endl;
    cout << "Le périmètre de l'objet 2D est de : " << perimeter << endl;
    return "\n";
}

