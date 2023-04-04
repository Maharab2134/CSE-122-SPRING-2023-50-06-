#include<bits/stdc++.h>
using namespace std;
class OpOverload
{
private:
    int varl, var2;
public:
    OpOverload(int a, int b)
    {
        varl = a;
        var2 = b;
    }
    void display()
    {
        cout << varl << " " << var2 << endl;
    }
    OpOverload operator++()
    {
        OpOverload temp(varl, var2);
        varl = varl + 222;
        var2 = var2 + 222;
        return temp;
    }
    OpOverload operator++(int)
    {
        varl = varl + 222;
        var2 = var2 + 222;
        return *this;
    }
    OpOverload operator--()
    {
        OpOverload temp(varl, var2);
        varl = varl - 222;
        var2 = var2 - 222;
        return temp;
    }
    OpOverload operator--(int)
    {
        varl = varl - 222;
        var2 = var2 - 222;
        return *this;
    }
};
int main()
{
    OpOverload obj(47,20);
    OpOverload obj1 = ++obj;
    obj1.display();
    OpOverload obj2 = obj++;
    obj2.display();
    OpOverload obj3 = --obj;
    obj3.display();
    OpOverload obj4 = obj--;
    obj4.display();
    return 0;
}

