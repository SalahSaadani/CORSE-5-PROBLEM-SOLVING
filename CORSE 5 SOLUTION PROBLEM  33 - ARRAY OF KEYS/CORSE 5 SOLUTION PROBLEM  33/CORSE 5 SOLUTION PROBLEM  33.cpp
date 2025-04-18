// CORSE 5 SOLUTION PROBLEM  33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialChar = 4 };

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
char GetRandomCaracter(enCharType CharType)
{
    switch (CharType)
    {
        
    case enCharType::SmallLetter:
    {  
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    case enCharType::SpecialChar:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    }
}
void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n"; 
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";      
        cout << "\n"; 
    }
}
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
string GenerateWord(enCharType CharType, short Length)
{
    string Word;
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCaracter(CharType);
    }
    return Word;
}
string GenerateKey()
{
    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;

}
void FillArrayWithKeys(string Arr[100], int ArrLength)
{
    
    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] =  GenerateKey() ;
    }

}

int main()
{
    srand((unsigned)time(NULL));
    string Arr[100];
    int ArrLength = 0;

    ArrLength = ReadPositiveNumber("How many keys do you want to generate?");

    FillArrayWithKeys(Arr, ArrLength);

    PrintStringArray(Arr, ArrLength);
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
