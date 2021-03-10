#include"Piles.h"
#include"Bouteille.h"
#include"BoiteDePillules.h"
 
class Inventaire
{
public:
    Inventaire();
    ~Inventaire();
    void dragDrop();
    void addItem(int location,Item* nouvelItem);
    void supprItem(int location,Item* itemASuppr);
protected:
    std::vector<Item*> m_inventaire;
};