#include "Personnage.h"

Personnage::Personnage()
{
    santePhysique = 50;
    santeMentale = 20;
    boire = false;
    lampeTorche = 100;
    nom = "Default";
}

Personnage::Personnage(int p,int m, int l)
{
    santePhysique = p;
    santeMentale = m;
    lampeTorche = l;
}

Personnage::Personnage(string n,)
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
        santePhysique = 0;
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

int Personnage::getLammpeTorche() const
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

bool Personnage::getBoire() const
{
    return boire;
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
    //cout << " boire : " << getBoire() << endl;
    cout << " nom : " << getNom() << endl;
    cout << " Lampe Torche : "<< getLampeTorche() <<"% " endl;
}
