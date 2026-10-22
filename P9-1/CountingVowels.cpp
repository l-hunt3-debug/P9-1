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

using namespace std;

int countCharacters(string str) {
	return str.length();
}

int main() {
	cout << countCharacters("Hello, world!") << endl;
	cout << countCharacters("a b c") << endl;
	cout << countCharacters("") << endl;
	cout << countCharacters("Respect my Authoritah") << endl;
}


