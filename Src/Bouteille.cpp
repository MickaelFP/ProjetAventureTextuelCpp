#include "Bouteille.h"

Bouteille::Bouteille()
{
    setHeal(10);
    setValue(1);
    setQuantity(1);
}

Bouteille::Bouteille(int h,int v,int q)
{
    setHeal(h);
    setValue(v);
    setQuantity(q);
}

Bouteille::~Bouteille()
{

}

int Bouteille::getHeal()
{
    return heal;
}

int Bouteille::getValue()
{
    return value;
}

int Bouteille::getQuantity()
{
    return quantity;
}

void Bouteille::setHeal(int h)
{
    Heal = h;
}

void Bouteille::setValue(int v)
{
    Value = v;
}

void Bouteille::setQuantity(int q)
{
    quantity = q;
}