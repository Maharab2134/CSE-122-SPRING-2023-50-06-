/*Manchester United is a class with two private integer member variables coach and
player, and a public void member function getData (). Create an object named ‘ronaldo’
in the main function. Overload the operator '++' in this class to perform the increment
of both member variables through the following instruction ronaldo++ from the main
function. After that create another instance of the Manchester United class named
‘fernandes’. Now, you set the values of coach and player for ronaldo to 4 and 5, and
for fernandes, it is 5 and 6. Overloading only one relational operator, compare the result
of ronaldo with fernandes before and after incrementing ronaldo by one. Which
operator will be appropriate for both cases? Support your explanation by implementing
that operator.*/

#include <iostream>
using namespace std;
class ManchesterUnited {
private:
    int coach;
    int player;

public:
    ManchesterUnited() : coach(0), player(0) {}

    void getData() {
        cout << "Enter coach count: ";
        cin >> coach;

        cout << "Enter player count: ";
        cin >> player;
    }
    ManchesterUnited operator++() {
        ++coach;
        ++player;
        return *this;
    }

    bool operator<(const ManchesterUnited& other) const {
        return coach < other.coach && player < other.player;
    }
};

int main() {
    ManchesterUnited ronaldo;
    ManchesterUnited fernandes;
    ronaldo.getData();
    ++ronaldo;
    fernandes.getData();
    ronaldo.getData();
    cout << "ronaldo < fernandes before increment: " << (ronaldo < fernandes) << endl;
    ++ronaldo;
    cout << "ronaldo < fernandes after increment: " << (ronaldo < fernandes) << endl;
    return 0;
}
