#include <iostream>
#include "Base.h"
#include "Derived.h"
using namespace std;

int main()
{
    Base b1(3,5);
    cout<<"sum of base class: "<< b1.Sum()<<endl<<endl;

    cout<<"child Class"<<endl;
    Derived d1(3,5,7);
    cout<<"get x by child class: "<<d1.getX()<<endl;
    cout<<"get y by child Class: "<< d1.getY()<<endl;
    cout<<"get z: "<< d1.getZ()<<endl;
    cout<<"get sum of child class: "<<d1.Sum()<<endl;
    return 0;
}
