
#include <iostream>
#include <memory>
#include "Rectangle.h"
#include "Cube.h"
#include "ListeObjet2D.h"


using namespace std;

int main() {
    ListeObjet2D liste;

    unique_ptr<Objet2D> monObjet;
    char continuer = 'o';
    char choixUtilisateur;
    
    while (continuer == 'o') {
        cout << "Choisissez un objet à créer (r pour Rectangle, c pour Carré) : ";
        cin >> choixUtilisateur;

        if (choixUtilisateur == 'r') {
            int longueur, largeur;
            char ajouter;
            cout << "Entrez la longueur du rectangle : ";
            cin >> longueur;
            cout << "Entrez la largeur du rectangle : ";
            cin >> largeur; 
            Rectangle* rectangle = new Rectangle(longueur, largeur);
            cout << "Ajouter en tête (t), en queue (q), ou un index précis (i) : ";
            cin >> ajouter;
            if (ajouter == 't') {
               liste.ajouterAtTail(rectangle);
            }
            else if (ajouter == 'q') {
               liste.ajouterAtHead(rectangle);
            }
            else if (ajouter == 'i') {
               int i = 0;
               cout << "Entrez le numéro de position : ";
               cin >> ajouter;
               liste.ajouterAtIndex(rectangle, i);
            }
            
        } else if (choixUtilisateur == 'c') {
            int cote;
            char ajouter;
            cout << "Entrez la longueur du côté du carré : ";
            cin >> cote;
            Cube* carre = new Cube(cote);
            cout << "Ajouter en tête (t), en queue (q), ou un index précis (i) : ";
            cin >> ajouter;
            if (ajouter == 't') {
               liste.ajouterAtTail(carre);
            }
            else if (ajouter == 'q') {
               liste.ajouterAtHead(carre);
            }
            else if (ajouter == 'i') {
               int i = 0;
               cout << "Entrez le numéro de position : ";
               cin >> ajouter;
               liste.ajouterAtIndex(carre, i);
            }
        } else {
            cout << "Choix invalide.";
            return 1;
            
    }

        cout << "Ajouter un nouvel élément ? (o/n): ";
        cin >> continuer;
    }
    cout << "---------------" << endl;
    liste.afficherInfos();

    return 0;
}