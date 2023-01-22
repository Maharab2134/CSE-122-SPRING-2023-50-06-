//poblem Number: 282A
//Povlem Name: Bit++

#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    string command;
    while (n--) {
        cin >> command;
        if (command == "++X" || command == "X++") {
            x++;
        } else if (command == "--X" || command == "X--") {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
