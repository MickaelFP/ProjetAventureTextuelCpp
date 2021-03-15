#ifndef ITEM_H
#define ITEM_H

class Item
{
    private:

    public:
        Item();
        virtual ~Item();

        void useItem();
        void showInfo();

        //Item(string t, int v);

        int getValue();

};

#endif // ITEM_H
