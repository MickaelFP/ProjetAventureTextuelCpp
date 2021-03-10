#ifndef Piles_H
#define Piles_H

#include <string>

using namespace std;

class Piles
{
    private:
        int recharge;
        int value;
        int quantity;

    public:
        Piles();
        Piles(int,int,int);
        virtual ~Piles();

        int getRecharge();
        int getValue();
        int getQuantity();

        void setRecharge(int);
        void setValue(int);
        void setQuantity(int);
};

#endif // Piles_H