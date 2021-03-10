#include "Piles.h"

Piles::Piles()
{
    setRecharge(10);
    setValue(1);
    setQuantity(1);
}

Piles::Piles(int r,int v,int q)
{
    setRecharge(r);
    setValue(v);
    setQuantity(q);
}

Piles::~Piles()
{

}

int Piles::getRecharge()
{
    return recharge;
}

int Piles::getValue()
{
    return value;
}

int Piles::getQuantity()
{
    return quantity;
}

void Piles::setRecharge(int r)
{
    recharge = r;
}

void Piles::setValue(int v)
{
    value = v;
}

void Piles::setQuantity(int q)
{
    quantity = q;
}