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
        bool boire = false;
        string nom = "Rupert";
        int lampeTorche = 100;
        int choice = 0;
        bool stationPorte = false;
        bool stationArriere = false;
        bool stationVitre = false;

    public:
        //CONSTRUCTEURS
        Personnage();
        Personnage(int p, int m, int l, int ch);
        Personnage(string n);
        Personnage(bool b);

        Personnage(bool c1, bool c2, bool c3);
        //Personnage(vector<Item> i);

        //DESTRUCTEUR
        ~Personnage();

        // GETTERS / SETTERS
        int getSantePhysique() const;
        void setSantePhysique(int p);

        int getSanteMentale() const;
        void setSanteMentale(int m);

        int getLampeTorche() const;
        void setLampeTorche(int l);

        int getChoice() const;
        void setChoice(int ch);

        string getNom() const;
        void setNom(string n);

        bool getBoire() const;
        void setBoire(int b);

        bool getStationPorte() const;
        void setStationPorte(bool c1);
        bool getStationArriere() const;
        void setStationArriere(bool c2);
        bool getStationVitre() const;
        void setStationVitre(bool c3);

        //vector<Item> getInventaire
        //void setInventaire(vector<Item> i)

        //AFFICHE LES INFOS DU(DES) Personnage(S)
        void showInventaire();
        void showInfos() const;

        //ON CREER UNE FONCTION/ACTION Boire Personnage
        void BoirePersonnage(Personnage* cible);

};

#endif // PERSONNAGE_H
