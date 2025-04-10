// CORSE 5 SOLUTION PROBLEM  9.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int CountDigitFrequency(short Digit, int Number)
{
    int FreCount = 0, Reminder = 0;
    while (Number > 0)
    {
        Reminder = Number % 10;
        Number = Number / 10;
        if (Digit == Reminder)
        {
            FreCount++;
        }
    }

    return FreCount;
}
void PrintAllDigitsFrequency(int Number)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0)
        {
            cout << " Digit" << i << " Frequency is " << DigitFrequency << " Time(s).\n";
        }

    }
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Positive Number?");
    PrintAllDigitsFrequency(Number);
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
