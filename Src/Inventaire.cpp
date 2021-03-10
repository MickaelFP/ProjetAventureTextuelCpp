#include"Inventaire.h"
 
Inventaire::Inventaire():m_inventaire(18)
{
 
}
Inventaire::~Inventaire()
{
 
}
void Inventaire::dragDrop()
{
 
}
void Inventaire::addItem(int location,Item* nouvelItem)
{
    m_inventaire[location]= nouvelItem;
}
void Inventaire::supprItem(int location,Item* itemASuppr)
{
    m_inventaire[location]= 0;
}