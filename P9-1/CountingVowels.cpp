/*
* File: CountingVowels.cpp
* Author: Liviah Hunt
* Date: 10/22/26
* 
* Description: Count number of vowels in a string.
*/



#include <iostream>
#include <string>
using namespace std;

int countVowel(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string input;

    while (true)
    {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);

        if (input == "Q" || input =="q")
        {
            break;
        }

        cout << "Vowel count: " << countVowel(input) << endl;
    }

    return 0;
}



