#include "BoiteDePillules.h"

BoiteDePillules::BoiteDePillules()
{
    setRecovery(10);
    setValue(1);
    setQuantity(1);
}

BoiteDePillules::BoiteDePillules(int r,int v,int q)
{
    setRecovery(r);
    setValue(v);
    setQuantity(q);
}

BoiteDePillules::~BoiteDePillules()
{

}

int BoiteDePillules::getRecovery()
{
    return recovery;
}

int BoiteDePillules::getValue()
{
    return value;
}

int BoiteDePillules::getQuantity()
{
    return quantity;
}

void BoiteDePillules::setRecovery(int r)
{
    recovery = r;
}

void BoiteDePillules::setValue(int v)
{
    value = v;
}

void BoiteDePillules::setQuantity(int q)
{
    quantity = q;
}

