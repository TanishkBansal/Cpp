/* This program is use to take input from the keyboard and display it on console */

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter integer number: ";
    cin >> a;
    cout << "The entered number is: " << a << endl;

    float b;
    cout<<"Enter float number: ";
    cin >> b;
    cout << "The entered number is: " << b << endl;

    double c;
    cout<<"Enter double number: ";
    cin >> c;
    cout << "The entered number is: " << c << endl;

    char d;
    cout<<"Enter character: ";
    cin >> d;
    cout << "The entered character is: " << d << endl;
}

// In c++ if we are taking input their are specific types of data types, and name which store that particlar data is called variables.
/* To get :-
        Integer type of data like (1,2,3..) we use keyword name 'int'.
        Decimal type of data like (1.1,2.1,3.1,..) we use keyword name 'float'.
        Double type of data like (1.12,2.23,3.34,..) we use keyword name 'double'.
        Character type of data like (A,B,C..) we use keyword name 'char'.
*/

// cin is a built in data type which take input just like cout which display output.
// endl just behaves like enter after writing endl at last the new line is generated after that line.
/*
    Tricks;
        cin == in stands for input;
        cout == out stand for output;
        endl == end a line or enter for line;

    good habit is to use ; even in comments.
*/