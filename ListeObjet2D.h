
#include <iostream>
#ifndef LISTEOBJET2D_H
#define LISTEOBJET2D_H

#include "Objet2D.h"

class Node {
public:
    Objet2D* objet;
    Node* next;

    Node(Objet2D* objet) : objet(objet), next(nullptr) {}
};

class ListeObjet2D {
private:
    Node* Head;
    Node* Tail;

public:
    ListeObjet2D() : Head(nullptr), Tail(nullptr) {}

    void ajouterAtHead(Objet2D* objet);
    void ajouterAtTail(Objet2D* objet);
    void ajouterAtIndex(Objet2D* objet, int index);

    void supprimerAtHead();
    void supprimerAtTail();
    void supprimerAtIndex(int index);

    void afficherInfos();
};

#endif