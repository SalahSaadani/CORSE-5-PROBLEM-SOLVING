// CORSE 5 SOLUTION PROBLEM  22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumbers(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}

void ReadArray(int Arr[100], int& ArrLength)
{
    cout << "\nNumber Of Elements : \n";
    cin >> ArrLength;
    
    cout << "\nEnter Array Elements : \n";
    for (int i = 0; i < ArrLength; i++)
    { 
        cout << " Element [" << i + 1 << "] : " ;
        cin >> Arr[i];
    }

    cout << endl;
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)

        cout << Arr[i] << " ";

    cout << "\n";
}

int TimeRepeated(int Number, int Arr[100], int ArrLength)
{
    int Count = 0;
    for (int i = 0 ; i <= ArrLength-1 ; i++)
    { 
        if (Number == Arr[i])
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int Arr[100], ArrLength, NumberToCheck;

    ReadArray(Arr, ArrLength);

    NumberToCheck = ReadPositiveNumbers(" Please Enter the Number To Check? ");

    cout << "\nOriginal Array : ";

    PrintArray(Arr, ArrLength);

    cout << "\n Number " << NumberToCheck << " Is Repeated " << TimeRepeated(NumberToCheck, Arr, ArrLength) << " Time(s)\n";
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
