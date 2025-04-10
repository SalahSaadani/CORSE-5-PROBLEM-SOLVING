// CORSE 5 SOLUTION PROBLEM  6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    while (Number <= 0)
    {
        cout << Message << endl;
        cin >> Number;
    }

    return Number;
}
int SumOfDigits(int Number)
{
    int Sum = 0, Reminder = 0 ; 

    while (Number > 0)
    {
        Reminder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Reminder;
    }

    return Sum ;
}


int main()
{
    cout << "\n Sum Of Digits = " << SumOfDigits(ReadPositiveNumber(" Please Enter a Positive Number?")) << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
