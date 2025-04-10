// CORSE 5 SOLUTION PROBLEM  31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int RandomNumber(int From, int To) 
{ 
    int randNum = rand() % (To - From + 1) + From; return randNum;
}
int ReadPositiveNumber(string Message)
{
    int Number=0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void Swap(int &A, int &B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}
void FillArrayWith1ToN(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        Arr[i] = i+1 ;

}
void PrintArray(int Arr[100],int ArrLength)
{
    
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
}
void ShuffleArray(int Arr[100], int ArrLength)
{
  for (int i= 0; i < ArrLength; i++)
  { 
      swap(Arr[RandomNumber(1, ArrLength) - 1], Arr[RandomNumber(1, ArrLength) - 1]);
  }
}
int main()
{ 
    srand((unsigned)time(NULL));
    int Arr[100];
    int ArrLength = ReadPositiveNumber("Please enter Elements Of Array ??");

    FillArrayWith1ToN(Arr, ArrLength);

    cout << "\nArray Elements Before Shuffle :\n ";
    PrintArray(Arr,ArrLength);

    ShuffleArray(Arr, ArrLength);

    cout << "\nArray Elements After Shuffle :\n";
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
