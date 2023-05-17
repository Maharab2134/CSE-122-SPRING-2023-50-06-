/*Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float) of a
publication. From this class derive two classes: book, which adds a page count (type int),
and tape, which adds a playing time in minutes (type float). Each of these three classes
should have a getData() function to get its data from the user at the keyboard, and a
putData() function to display its data. Write a main program to test the book and tape
classes by creating instances of them, asking the user to fill in data with getData(), and
then displaying the data with putData().*/
#include <iostream>
#include <string>
using namespace std;

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
class book : public publication {
private:
    int pageCount;
public:
    void getData() {
        publication::getData();
        cout << "Enter page count: ";
        cin >> pageCount;
        cin.ignore(); 
    }
    void putData() {
        publication::putData();
        cout << "Page Count: " << pageCount << endl;
    }
};
class tape : public publication {
private:
    float playingTime;

public:
    void getData() {
        publication::getData();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
        cin.ignore(); 
    }
    void putData() {
        publication::putData();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
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
