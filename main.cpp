#include <QCoreApplication>
#include <iostream>
#include "list.h"

inline void squareVal(double& val) { val = val * val; }
inline void doubleVal(double& val) { val = val * 2; }

int main(int argc, char *argv[])
{
    std::cout << "Start program\n";
    QCoreApplication a(argc, argv);

    List lst;
    std::cout << "numberOfItems = " << lst.numberOfItems() << std::endl;

    if (lst.isFull()) {
        std::cout << "List already full\n";  // список уже полон
    } else {
        lst.add(3.25);
    }
    lst.printList();

    lst.add(2.32);
    lst.printList();
    std::cout << "numberOfItems = " << lst.numberOfItems() << std::endl;

    lst.visit(squareVal);
    lst.printList();

    std::cout << "Done\n";
    return a.exec();
}
