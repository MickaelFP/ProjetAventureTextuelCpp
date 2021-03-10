#include <iostream>
#include "Personnage.h"

//#include "Ennemie.h"

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Hello world!" << endl;

    Personnage p1;
    cout << "	Vous incarnez...  " << endl << endl;
    cout << "	Vos caractéristiques sont les suivantes :  " << endl;
	p1.setSantePhysique(50);
	p1.setSanteMentale(20);
    p1.setBoire(false);
    p1.setLanpeTorche(100);
	p1.setNom("Rupert");
	p1.showInfos();
    Item Bouteille ("heal",10);
    Item BoiteDePillules("recovery",5);
    Item Piles("recharge",20);
	cout << endl;

    

    return 0;
} // FIN DU MAIN