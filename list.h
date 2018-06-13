// list.h -- class definition for the stack ADT
#ifndef LIST_H
#define LIST_H


typedef double Item;

class List
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int index;
public:
    List();
    bool add(const Item & item);
    bool isEmpty(void) const;
    bool isFull(void) const;
    void visit(void (*pf)(Item & item));
    int numberOfItems();
    void printList(void) const;

};



#endif // LIST_H




