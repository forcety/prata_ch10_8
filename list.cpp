#include "list.h"
#include <iostream>

List::List()
{
    std::cout << "Default constructor called\n" ;
    std::cout << "Empty list created" << std::endl;
    index = 0;
    std::cout << "index =" << index  << std::endl;
}

bool List::isFull() const
{
    if (index == MAX) {
        return true;
    } else {
        return false;
    }
}

void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i < index; ++i) {
        (*pf)(items[i]);
    }
}

bool List::add(const Item &item)
{
    if (index < MAX) {
        items[index++] = item;
        return true;
    } else {
        return false;
    }

}

int List::numberOfItems()
{
     std::cout << "index = " << index << std::endl;
     return index;

}

void List::printList() const
{
    std::cout << "Printing List: " << std::endl;
    for (int i = 0; i < index; ++i) {
        std::cout << items[i] << std::endl;
    }
}
