/* In this program we gonna perform basic arithmetic operations */

#include <iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,multi,div;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    sum = a + b;
    sub = a-b;
    multi = a*b;
    div = a/b; //if we are using int then it gonna produce int value (Eg: 5/2 = 2.5 , but o/p will be 2)

    cout<<"The addition of a and b is: "<<sum<<endl;
    cout<<"The subtraction of a and b is: "<<sub<<endl;
    cout<<"The multiplication of a and b is: "<<multi<<endl;
    cout<<"The division of a and b is: "<<div<<endl;
    return 0;
}

// return 0 is the last command of program it represents the successfull compilation of program.

