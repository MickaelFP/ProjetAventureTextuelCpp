#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Personnage
{
    private:
        int santePhysique = 50;
        int santeMentale = 20;
        int boire = 10;
        string nom = "Rupert";

    public:
        //CONSTRUCTEURS
        Personnage();
        Personnage(int p, int m);
        Personnage(string n);
        Personnage(bool b);

        //DESTRUCTEUR
        ~Personnage();

        // GETTERS / SETTERS
        int getSantePhysique() const;
        void setSantePhysique(int p);

        int getSanteMentale() const;
        void setSanteMentale(int m);

        string getNom() const;
        void setNom(string n);

        bool getBoire() const;
        void setBoire(int b);

        float getLampeTorche() const;
        void setLampeTorche(int l);

        //AFFICHE LES INFOS DU(DES) Personnage(S)
        void showInfos() const;

        //ON CREER UNE FONCTION/ACTION Boire Personnage
        void BoirePersonnage(Personnage* cible);

};

#endif // Personnage_H
