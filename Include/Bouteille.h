#ifndef BOUTEILLE_H
#define BOUTEILLE_H

#include <string>

using namespace std;

class Bouteille
{
    private:
        int heal;
        int value;
        int quantity;

    public:
        Bouteille();
        Bouteille(int,int,int);
        virtual ~Bouteille();

        int getHeal();
        int getValue();
        int getQuantity();

        void setHeal(int);
        void setValue(int);
        void setQuantity(int);
};

#endif // BOUTEILLE_H