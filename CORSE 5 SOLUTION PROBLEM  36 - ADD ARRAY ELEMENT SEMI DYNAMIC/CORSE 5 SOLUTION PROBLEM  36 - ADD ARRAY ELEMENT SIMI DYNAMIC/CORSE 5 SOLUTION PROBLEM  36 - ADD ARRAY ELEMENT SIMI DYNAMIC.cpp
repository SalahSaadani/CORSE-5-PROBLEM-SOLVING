// CORSE 5 SOLUTION PROBLEM  36 - ADD ARRAY ELEMENT SIMI DYNAMIC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number = 0;
    cout << "\nPlease enter The Number??";
    cin >> Number;

    return Number;
}
void AddArrayElement(int Number, int Arr[100], int& ArrLength)
{
    ArrLength++;
    Arr[ArrLength-1] = Number;

}
void InputUserNumbersInArray(int Arr[100], int& ArrLength)
{
    bool AddMore = true;
    do
    { 
        AddArrayElement(ReadNumber(), Arr, ArrLength);
        cout << "\nDo You Want To Add More Numbers?? [0]:No,[1]:Yes?? ";
        cin >> AddMore;
    
    } while (AddMore);
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}

int main()
{
    int Arr[100], ArrLength = 0;
    InputUserNumbersInArray(Arr, ArrLength);

    cout <<"\nArray Length: " << ArrLength << endl;
    cout << "Array Elements: ";
    PrintArray(Arr, ArrLength);

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
