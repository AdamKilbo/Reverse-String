#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string input;
	bool IsPalindrome = true;
	cout << "Enter string to see if it is a palindrome: ";
	cin >> input;

	for (int i = 0; i < input.length()/2; i++)
	{
		if (input[i] != input[input.length() - i - 1])
			IsPalindrome = false;
	}

	if (IsPalindrome == true)
		cout << "\nString " << input << " is a palindrome." << endl;
	else
		cout << "\nString " << input << " is not a palindrome." << endl;
}