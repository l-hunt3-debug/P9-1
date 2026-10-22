/*
* File: CountingVowels.cpp
* Author: Liviah Hunt
* Date: 10/22/26
* 
* Description: Count number of vowels in a string.
*/

#include <iomanip>
#include <iostream>
#include <string>


#include <iostream>
#include <string>
using namespace std;

//Function that counts amount of vowels in a string
int countVowel(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++) //Adds one to length when it regoinzies a vowel
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

//Count the vowels in the strings below
int main() {
	cout << countVowel("AEIOUaeiou") << endl;
	cout << countVowel("This is a test for SHOUTING!") << endl;
	cout << countVowel("qwertyuiopasdfghjklzxcvbnm") << endl;
    cout << countVowel("shy myrrh") << endl;
	cout << countVowel("") << endl;
    cout << countVowel("Yippie") << endl;

    return 0;
}


