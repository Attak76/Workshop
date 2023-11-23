
#include "ListeObjet2D.h"

using namespace std;

void ListeObjet2D::afficherInfos() {
    int element = 0;
    Node* current = Head;
    while (current != nullptr) {
        element += 1;
        cout << "ÉLÉMENT " + to_string(element) + ", ";
        cout << current->objet->afficheInfo() << endl;
        current = current->next;
    }
}

void ListeObjet2D::ajouterAtHead(Objet2D* objet) {
    Node* newNode = new Node(objet);
    if (Head == nullptr) {
        Head = Tail = newNode;
    } else {
        newNode->next = Head;
        Head = newNode;
    }
}

void ListeObjet2D::ajouterAtTail(Objet2D* objet) {
    Node* newNode = new Node(objet);
    if (Tail == nullptr) {
        Head = Tail = newNode;
    } else {
        Tail->next = newNode;
        Tail = newNode;
    }
}

void ListeObjet2D::ajouterAtIndex(Objet2D* objet, int index) {
    if (index < 0) {
        std::cerr << "Index invalide" << std::endl;
        return;
    }

    Node* newNode = new Node(objet);

    if (index == 0) {
        newNode->next = Head;
        Head = newNode;
        if (Tail == nullptr) {
            Tail = Head;
        }
        return;
    }

    Node* current = Head;
    for (int i = 0; current != nullptr && i < index - 1; ++i) {
        current = current->next;
    }

    if (current == nullptr) {
        std::cerr << "Index hors limites" << std::endl;
        delete newNode;
        return;
    }
    
    newNode->next = current->next;
    current->next = newNode;

    if (newNode->next == nullptr) {
        Tail = newNode;
    }
}