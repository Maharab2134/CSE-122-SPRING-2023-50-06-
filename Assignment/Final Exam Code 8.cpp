/*Design a class named "Eric ten Hag". Eric ten Hag will have only one function
showDegea() which will output what it saves. Create two derived classes, Varane and
Maguire. Varane will define showDegea() so that it will output “saves goal” and similarly
Maguire will output “saves nogoals”. In the main() function, use the Eric ten Hag class in
a way that implements the idea of abstraction*/

#include <iostream>
using namespace std;

class EricTenHag {
public:
    virtual void showDegea() = 0;
};
class Varane : public EricTenHag {
public:
    void showDegea() {
        cout << "Varane saves goal." << endl;
    }
};
class Maguire : public EricTenHag {
public:
    void showDegea() {
        cout << "Maguire saves nogoals." << endl;
    }
};
int main() {
    EricTenHag* player1 = new Varane();
    EricTenHag* player2 = new Maguire();
    player1->showDegea();
    player2->showDegea();
    delete player1;
    delete player2;
    return 0;
}
