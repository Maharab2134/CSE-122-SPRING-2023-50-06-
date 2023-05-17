/*Start with question 1, add a base class sales that holds an array of three floats so that it
can record the sales of a particular publication in BDT. for the last three months. Include
a getData() and a putData() function here. An object of class book or tape should input
and output sales data along with its other data. Write a main function to create a book
object and a tape object and exercise their input and output capabilities.*/

#include <iostream>
#include <string>
using namespace std;

class sales {
protected:
    float salesData[3];

public:
    void getData() {
        cout << "Enter sales data for the last three months:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> salesData[i];
        }
    }
    void putData() {
        cout << "Sales data for the last three months:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": " << salesData[i] << " BDT" << endl;
        }
    }
};

class publication {
protected:
    string title;
    float price;

public:
    void getData() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); 
    }
    void putData() {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};
class book : public publication, public sales {
private:
    int pageCount;

public:
    void getData() {
        publication::getData();
        sales::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
        cin.ignore(); 
    }
    void putData() {
        publication::putData();
        cout << "Page Count: " << pageCount << endl;
        sales::putData();
    }
};
class tape : public publication, public sales {
private:
    float playingTime;

public:
    void getData() {
        publication::getData();
        sales::getData();

        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
        cin.ignore(); 
    }
    void putData() {
        publication::putData();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
        sales::putData();
    }
};
int main() {
    book b;
    tape t;
    cout << "Enter book details:\n";
    b.getData();
    cout << "\nEnter tape details:\n";
    t.getData();
    cout << "\nBook details:\n";
    b.putData();
    cout << "\nTape details:\n";
    t.putData();
    return 0;
}
