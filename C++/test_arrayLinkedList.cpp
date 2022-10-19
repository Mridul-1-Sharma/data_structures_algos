#include <iostream>
using namespace std;
#include "arrayLinkedList.h"

int main(int argc, char const *argv[])
{
    arrayList<int> test(10);

    for (int i = 1; i <= 12; i++)
        test.insertFront(i);

    test.printInfo();

    cout << "Current size: " << test.getSize() << endl;
    cout << "Current head: " << test.head() << endl;

    test.removeFront();
    test.removeFront();

    cout << "\nCurrent size: " << test.getSize() << endl;
    cout << "Current head: " << test.head() << endl;

    test.printInfo();

    cout << endl;
    test.remove(12);
    test.remove(1);
    cout << "\nCurrent size: " << test.getSize() << endl;
    test.printInfo();

    return 0;
}
