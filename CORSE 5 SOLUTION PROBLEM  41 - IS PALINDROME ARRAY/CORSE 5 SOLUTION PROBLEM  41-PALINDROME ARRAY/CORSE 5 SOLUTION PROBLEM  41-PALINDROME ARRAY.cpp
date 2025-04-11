// CORSE 5 SOLUTION PROBLEM  41-PALINDROME ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void FillArray(int Arr[100], int& ArrLength)
{
    ArrLength = 6;
    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 30;
    Arr[4] = 20;
    Arr[5] = 10;
    
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}
bool IsPalindromeArray(int Arr[100], int Length)
{ 
    for (int i = 0;i < Length; i++)
    {
        if (Arr[i] != Arr[Length - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int Arr[100], Length = 0;
    FillArray(Arr, Length);
   
    cout << "\nArray  elements:\n";
    PrintArray(Arr,Length);

    if (IsPalindromeArray(Arr,Length))        
        cout << "\nYes , it is a Palindrome number.\n";
    else 
        cout << "\nNo , it is NOT a Palindrome number.\n";
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
