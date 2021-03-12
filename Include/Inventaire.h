#include"Piles.h"
#include"Bouteille.h"
#include"BoiteDePillules.h"
#include <vector>
 
class Inventaire
{
public:
    Inventaire();
    ~Inventaire();
    void dragDrop();
    void addItem(Item* nouvelItem); //(int location,...)
    void supprItem(Item* itemASuppr);
protected:
    std::vector<Item*> m_inventaire;
};