// CORSE 5 SOLUTION PROBLEM 4-PERFECT NUMBER FROM 1 TO N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
bool IsPerfectNumber(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)

            Sum += i;
    }

    return Number == Sum;
}
void PrintPerfectNumberFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (IsPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPerfectNumberFrom1ToN(ReadPositiveNumber(" Please enter a Positive Number ? "));
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
