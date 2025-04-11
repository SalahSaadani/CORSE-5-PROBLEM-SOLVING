// CORSE 5 SOLUTION PROBLEM  45-COUNT NEGATIVE NUMBERS IN ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> ArrLength;
    for (int i = 0; i < ArrLength; i++)
        Arr[i] = RandomNumber(-100, 100);
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}

int CountNegativeNumbers(int Arr[100], int ArrLength)
{
    int Counter = 0;
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] < 0)
        {
            Counter++;
        }
    }

    return Counter;
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;
    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "\nArray Elements: ";
    PrintArray(Arr, ArrLength);

    cout << "Negative Numbers Count Is : ";
    cout << CountNegativeNumbers(Arr, ArrLength);
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
