// CORSE 5 SOLUTION PROBLEM  23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FillArrayWithRandomNumbers(int Arr[100], int& ArrLength)
{
    cout << "\nNumber Of Elements : \n";
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
        Arr[i] = RandomNumber(0, 100);
}

void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)

        cout << Arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "\n Array Elements : ";

    PrintArray(Arr, ArrLength);

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
