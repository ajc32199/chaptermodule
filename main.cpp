#include <iostream>
#include "personnel.h"

using namespace std;

int main()
{
    Personnel *p1 = new Personnel();
    p1->setAll();
    p1->printAll();

    delete p1;
}