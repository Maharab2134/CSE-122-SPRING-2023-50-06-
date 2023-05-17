/*Suppose there are three classes named “Germany”, “Argentina” and “Brasil”. Build a
diagram to show how these classes are related. What do you need to do tohide the
implementation details of the parent class obtained from the diagram? Demonstrate the
scenario with the help of an array of pointers.*/

#include <iostream>
#include <string>
using namespace std;
class FootballTeam {
public:
    virtual void displayTeam() = 0; 
    virtual ~FootballTeam() {} 
};

class Germany : public FootballTeam {
public:
    void displayTeam() override {
        cout << "Germany Football Team\n";
    }
};
class Argentina : public FootballTeam {
public:
    void displayTeam() override {
        cout << "Argentina Football Team\n";
    }
};
class Brasil : public FootballTeam {
public:
    void displayTeam() override {
        cout << "Brasil Football Team\n";
    }
};
int main() {
    const int teamCount = 3;
    FootballTeam* teams[teamCount];
    teams[0] = new Germany();
    teams[1] = new Argentina();
    teams[2] = new Brasil();
    for (int i = 0; i < teamCount; i++) {
        teams[i]->displayTeam();
    }
    for (int i = 0; i < teamCount; i++) {
        delete teams[i]; 
    }
    return 0;
}
