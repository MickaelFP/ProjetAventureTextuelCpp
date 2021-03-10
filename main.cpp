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
	p1.setNom("Rupert");
	p1.showInfos();
	cout << endl;

    return 0;
} // FIN DU MAIN