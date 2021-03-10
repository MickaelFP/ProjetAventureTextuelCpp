#include "Personnage.h"

Personnage::Personnage()
{
    santePhysique = 100;
    santeMentale = 0;
    boire = false;
    nom = "Default";
}

Personnage::Personnage(int p,int m)
{
    santePhysique = p;
    santeMentale = m;
}

Personnage::Personnage(string n)
{
    nom = n;
}

Personnage::Personnage(bool b)
{
    boire = b;
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
        cout << " " << getNom() << " Votre esprit est totalement rongé par la la peur et la démence. 
        Vous ne pouvez plus revenir en arrière car n'êtes plus maître de vos choix " << endl;
		santeMentale = 0;
    }else
    {
        santeMentale = m;
    }

}

string Personnage::getNom() const
{
    return nom;
}

void Personnage::setNom(string n)
{
    nom = n;
}

bool Personnage::getBoire() const
{
    return santeMentale;
}

void Personnage::setBoire(bool b)
{
    if (b = true)
    {
        cout << " " << getNom() << " Vous sentez ceete eau fraîche couler le long de votre gorge.
        Elle vous fait un bien fou et vous vous santez revigoré " << endl;
        //
        setSantePhysique += 10;
		boire = false;
    }else
    {
        boire = b;
    }

}
// FIN DES GETTERS / SETTERS DEF

void Personnage::showInfos() const
{
    cout << " santePhysique : " << getsantePhysique() << endl;
    cout << " santeMentale : " << getsanteMentale() << endl;
    cout << " boire : " << getBoire() << endl;
    cout << " nom : " << getNom() << endl;
}