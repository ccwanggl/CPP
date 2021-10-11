#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    bool b1 = true;
    int i = b1;
    bool b2 = -256;
    cout << "i = " << i << " the type of the i is " << typeid(i).name() << endl;
    cout << "b1 = " << b1 << " the type of the b1 is " << typeid(b1).name() << endl;
    cout << "b2 = " << b2 << " the type of the b2 is " << typeid(b2).name() << endl;
    cout << true << endl;
    return 0;
}