#include "Personnage.h"

Personnage::Personnage()
{
    santePhysique = 50;
    santeMentale = 20;
    boire = false;
    lampeTorche = 100;
    nom = "Default";
    choice = 0;

    //choice
    stationPorte = false;
    stationArriere = false;
    stationVitre = false;
    
    //event
    eventStation = false;
    
}

Personnage::Personnage(int p,int m, int l, int ch)
{
    santePhysique = p;
    santeMentale = m;
    lampeTorche = l;
    choice = ch;
}

Personnage::Personnage(string n)
{
    nom = n;
}

Personnage::Personnage(bool b)
{
    boire = b;
}

Personnage::Personnage(bool c1, bool c2, bool c3)
{
    stationPorte = c1;
    stationArriere = c2;
    stationVitre = c3;
}

Personnage::~Personnage()
{
    cout <<"  " << getNom() << " Vous mourrez dans d'atrove souffrance sans être parvenue jusqu'au village "<<endl;
}

// DEBUT DES GETTERS / SETTERS DEF
int Personnage::getSantePhysique() const
{
    return santePhysique;
}

void Personnage::setSantePhysique(int p)
{
    if (p < 0)
    {
        cout << " " << getNom() << " Vous mourrez dans d'atrove souffrance sans être parvenue jusqu'au village " << endl;
		santePhysique = 0;
    }
    else
    {
        santePhysique = p;
    }
}

int Personnage::getSanteMentale() const
{
    return santeMentale;
}

void Personnage::setSanteMentale(int m)
{
    if (m < 0)
    {
        cout << " " << getNom() << " Votre esprit est totalement rongé par la la peur et la démence. Vous ne pouvez plus revenir en arrière car n'êtes plus maître de vos choix " << endl;
		santeMentale = 0;
    }else
    {
        santeMentale = m;
    }

}

int Personnage::getChoice() const
{
    return choice;
}
void Personnage::setChoice(int ch)
{
    if(ch > 3)
    {
        cout<< " entrée invalide! Le premier choix vous est donc imposé." <<endl;
        choice = 1;
    }
    choice = ch;
}

string Personnage::getNom() const
{
    return nom;
}

void Personnage::setNom(string n)
{
    nom = n;
}

int Personnage::getLampeTorche() const
{
    return lampeTorche;
}

void Personnage::setLampeTorche(int l)
{
	if (lampeTorche > 100)
    {
		lampeTorche = 100;
	}
	else if(lampeTorche < 0)
    {
		lampTorche = 0;
	}
    else
    {
        lampTorche = l;
    }
}

vector<Item> Personnage::getInevntaire() const
{
    return inventaire;
}

bool Personnage::getBoire() const
{
    return santeMentale;
}

void Personnage::setBoire(bool b)
{
    if (b = true)
    {
        cout << " " << getNom() << " Vous sentez l'eau fraîche couler le long de votre gorge. Elle vous fait un bien fou et vous vous sentez revigoré " << endl;
        cout << "Votre santePhysique passe à : "<< p1.getSantePhysique() << " sur 50" <<endl;
        setSantePhysique += 10;
		boire = false;
    }else
    {
        boire = b;
    }
}

void setInventaire(vector<Item> i) const
{
    inventaire = i;
}

void Personnage::showInventaire()
{
    for(Item i : inventaire)
    {
        i.showInfos();
    }
}
// CHOIX

bool Personnage::getStationPorte() const
{
    return stationPorte;
}
void Personnage::setStationPorte(bool c1)
{
    if(c1 = true)
    {
        cout << " " << endl;
        stationPorte = false;

    }else
    {
        stationPorte = c1;
    }
}

bool Personnage::getStationArriere() const
{
    return stationArriere;
}
void Personnage::setStationArriere(bool c2)
{
    if(c2 = true)
    {
        cout << " " << endl;
        stationArriere = false;

    }else
    {
        stationArriere = c2;
    }
}

bool Personnage::getStationVitre() const
{
    return stationVitre;
}
void Personnage::setStationVitre(bool c3)
{
    if(c3 = true)
    {
        cout << " " << endl;
        stationVitre = false;

    }else
    {
        stationVitre = c3;
    }
}

// FIN DES GETTERS / SETTERS DEF

void Personnage::showInfos() const
{
    cout << " santePhysique : " << getsantePhysique() << endl;
    cout << " santeMentale : " << getsanteMentale() << endl;
    //cout << " boire : " << getBoire() << endl;
    cout << " nom : " << getNom() << endl;
    cout << " Lampe Torche : "<< getLampeTorche() <<"% " endl;
}
