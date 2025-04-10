// CORSE 5 SOLUTION PROBLEM  30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}
void FillArrayWithRandomNumbers(int Arr[100], int ArrLength)
{

	for (int i = 0; i < ArrLength; i++)
		Arr[i] = RandomNumber(1, 100);
}
void SumOf2Arrays(int Arr[100], int Arr2[100], int ArrSum[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
	{
		ArrSum[i] = Arr[i] + Arr2[i];
	}

}

void PrintArray(int Arr[100], int ArrLength)
{
	for (int i = 0; i < ArrLength; i++)
		cout << Arr[i] << " ";

}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], Arr2[100], ArrSum[100];
	int ArrLength = ReadPositiveNumber("How Many Elements ??\n ");

	FillArrayWithRandomNumbers(Arr, ArrLength);
	FillArrayWithRandomNumbers(Arr2, ArrLength);

	SumOf2Arrays(Arr, Arr2, ArrSum, ArrLength);

	cout << "\nArray 1 Elements:\n";
	PrintArray(Arr, ArrLength);

	cout << "\nArray 2 Elements:\n";
	PrintArray(Arr2, ArrLength);

	cout << "\nSum of Array1 and Array2 Elements:\n";
	PrintArray(ArrSum, ArrLength);

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
