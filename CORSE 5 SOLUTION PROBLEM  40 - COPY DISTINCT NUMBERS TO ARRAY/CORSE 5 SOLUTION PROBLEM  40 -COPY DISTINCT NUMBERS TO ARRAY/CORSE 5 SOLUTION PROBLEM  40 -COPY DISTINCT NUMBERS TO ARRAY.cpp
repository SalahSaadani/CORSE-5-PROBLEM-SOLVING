// CORSE 5 SOLUTION PROBLEM  40 -COPY DISTINCT NUMBERS TO ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void FillArray(int Arr[100], int& ArrLength)
{
    ArrLength = 10;
    Arr[0] = 10;
    Arr[1] = 10;
    Arr[2] = 20;
    Arr[3] = 50;
    Arr[4] = 50;
    Arr[5] = 70;
    Arr[6] = 70;
    Arr[7] = 70;
    Arr[8] = 70;
    Arr[9] = 90;
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++) 
        cout << Arr[i] << " "; 
        cout << "\n"; 
}
short FindNumberPositionInArray(int Number, int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] == Number)
            return i;
    }
    //if you reached here, this means the number is not found
    return -1;

}
bool IsNumberInArray(int Number, int Arr[100], int ArrLength)
{ 
    return FindNumberPositionInArray(Number, Arr, ArrLength) != -1;
}
void AddArrayElement(int Number, int Arr[100], int& ArrLength)
{ 
     //its a new element so we need to add the length by 1
     ArrLength++;
     Arr[ArrLength - 1] = Number;
}
void CopyDistinctNumbersInArray(int ArrSource[100], int ArrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    { 
        if (!IsNumberInArray(ArrSource[i], ArrDestination, DestinationLength))
        {
            AddArrayElement(ArrSource[i], ArrDestination, DestinationLength); 
        } 
    }
}
int main()
{
    int ArrSource[100], SourceLength = 0, ArrDestination[100], DestinationLength = 0;

    FillArray(ArrSource, SourceLength);

    cout << "\nArray 1 elements:\n"; 
    PrintArray(ArrSource, SourceLength);

    CopyDistinctNumbersInArray(ArrSource, ArrDestination, SourceLength, DestinationLength);

    cout << "\nArray 2 distinct elements:\n";
    PrintArray(ArrDestination, DestinationLength);

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
