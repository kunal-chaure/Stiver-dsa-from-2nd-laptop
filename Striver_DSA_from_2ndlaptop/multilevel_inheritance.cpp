#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "this is first class a " << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "this is second class b" << endl;
    }
};

class C : public B
{
public:
    void showC()
    {
        cout << "this is third class c" << endl;
    }
};

int main()
{
    C obj;

    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}