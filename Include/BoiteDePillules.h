#ifndef BOITEDEPILLULES_H
#define BOITEDEPILLULES_H

#include <string>

using namespace std;

class BoiteDePillules
{
    private:
        int recovery;
        int value;
        int quantity;

    public:
        BoiteDePillules();
        BoiteDePillules(int,int,int);
        virtual ~BoiteDePillules();

        int getRecovery();
        int getValue();
        int getQuantity();

        void setRecovery(int);
        void setValue(int);
        void setQuantity(int);
};

#endif // BoiteDePillules_H