
#ifndef OBJET2D_H
#define OBJET2D_H

#include <string>

class Objet2D {
protected:
    int dim1;
    int dim2;
    Objet2D* Suivant; 

public:
    Objet2D(int tdim1, int tdim2);
    virtual int getPerimetre() = 0;
    virtual int getAire() = 0;
    virtual std::string afficheInfo() = 0;
    
    Objet2D* getSuivant() const;
    void setSuivant(Objet2D* nouveauSuivant);
};

#endif 