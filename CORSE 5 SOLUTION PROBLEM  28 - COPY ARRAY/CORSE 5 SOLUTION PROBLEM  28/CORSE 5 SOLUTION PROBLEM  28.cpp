// CORSE 5 SOLUTION PROBLEM  28.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
        Arr[i] = RandomNumber(1, 100);
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";

}

void CopyArray(int ArrSource[100], int ArrDestination[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        ArrDestination[i] = ArrSource[i]  ;
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    int Arr2[100];

    CopyArray(Arr, Arr2, ArrLength);

    cout << "\nArray 1  Elements : \n ";
    
    PrintArray(Arr, ArrLength);
     
    cout << "\n";

    cout << "\n Array 2 Elements After Copy \n ";
    
    PrintArray(Arr2, ArrLength);

    cout << "\n";
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
