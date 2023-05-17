/*You have an object "obj" of a class named ‘OpOverload’. This class contains two private
integer member variable var1 and var2. Your task is to overload the ‘++’ operator in the
class so that you can perform the increment of both var1 and var2 by the sum of last
three digits of your ID through the following instructions obj++ and ++obj. Perform
decrement operation on ‘obj’ through the following instructions obj—and --obj by
overloading ‘--’ operator in the same class.*/

#include <iostream>
using namespace std;

class OpOverload {
private:
    int var1;
    int var2;

public:
    OpOverload(int v1, int v2) : var1(v1), var2(v2) {}
    void display() {
        cout << "var1: " << var1 << ", var2: " << var2 << endl;
    }
    OpOverload& operator++() {
        int lastThreeDigits = 123; 
        var1 += lastThreeDigits;
        var2 += lastThreeDigits;
        return *this;
    }
    OpOverload operator++(int) {
        OpOverload temp(*this);
        operator++();
        return temp;
    }
    OpOverload& operator--() {
        int lastThreeDigits = 123; 
        var1 -= lastThreeDigits;
        var2 -= lastThreeDigits;
        return *this;
    }
    OpOverload operator--(int) {
        OpOverload temp(*this);
        operator--();
        return temp;
    }
};
int main() {
    OpOverload obj(10, 20);

    cout << "Before increment: ";
    obj.display();
    obj++;
    cout << "After obj++: ";
    obj.display();
    ++obj;
    cout << "After ++obj: ";
    obj.display();
    obj--;
    cout << "After obj--: ";
    obj.display();
    --obj;
    cout << "After --obj: ";
    obj.display();
    return 0;
}
