// CORSE 5 SOLUTION PROBLEM  11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;

        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int ReversedNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }

    return Number2;
}
bool IsPalindromeNumber(int Number)
{
    return Number == ReversedNumber(Number);
}
int main()
{
    if (IsPalindromeNumber(ReadPositiveNumber(" Please Enter A Positive Number???")))

        cout << "\n Yes , It is a Palindrome Number .\n ";

    else 

        cout << "\n No , It is Not a Palindrome Number .\n ";

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
