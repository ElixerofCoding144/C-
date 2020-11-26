#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int P, R, T, SimpleInterest;
    cout << "Enter the principle: ";
    cin >> P;
    cout << "\nEnter the rate of interest: ";
    cin >> R;
    cout << "\nEnter the time: ";
    cin >> T;
    SimpleInterest = (P * R * T)/100;
    cout << "The simple interest for the principle"<<P<<" for "<<T<<" years @ "<<R<<"% is: "<<SimpleInterest;
    getch();
}