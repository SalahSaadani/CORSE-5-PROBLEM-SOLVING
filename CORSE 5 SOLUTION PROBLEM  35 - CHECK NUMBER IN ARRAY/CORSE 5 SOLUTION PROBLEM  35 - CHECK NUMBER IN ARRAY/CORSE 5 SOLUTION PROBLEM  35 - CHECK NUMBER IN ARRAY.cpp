// CORSE 5 SOLUTION PROBLEM  35 - CHECK NUMBER IN ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int ReadNumber()
{
    int Number = 0;
    cout << " Please Enter a Number To Search For???" << endl;
    cin >> Number;

    return Number;
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

    return -1;
}
bool IsNumberInArray(int Number, int Arr[100], int ArrLength)
{
    return FindNumberPositionInArray(Number, Arr, ArrLength) != -1;
}

//bool FindNumberInArray(int Number, int Arr[100], int ArrLength)
//{
//    for (int i = 0; i < ArrLength; i++)
 //   {
//        if (Arr[i] == Number)
   //         return true;
  //  }

 //   return false;
//}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;
    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << " Array 1 Elements : ";
    PrintArray(Arr, ArrLength);

    cout << "\n";
    int Number = ReadNumber();

    cout << "Number You Are Looking For is :" << Number << endl;

    if (!IsNumberInArray(Number, Arr, ArrLength))
        cout << "No,The Number is Not Found :-(";
    else
    {
        cout << "Yes, It is Found :-)";
    }
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
