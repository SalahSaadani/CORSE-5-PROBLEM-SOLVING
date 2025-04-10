// CORSE 5 SOLUTION PROBLEM  18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
    string Text ;
    cout << " Please Enter Text ? \n ";
    getline(cin, Text);

        return Text ;
}
string EncryptText(string Text, short EncryptKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptKey);
    }
    return Text;
}
string DecryptText(string Text , short EncryptKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptKey);
    }
    return Text;
}

int main()
{
    const short EncryptKey = 2;

    string Text = ReadText();
    string TextAfterEncryption = EncryptText(Text, EncryptKey);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptKey);

    cout << " Text Before Encryption is :" << Text << endl;
    cout << " Text After Encryption is : " << TextAfterEncryption << endl;
    cout << " Text After Decryption is : " << TextAfterDecryption << endl;
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
