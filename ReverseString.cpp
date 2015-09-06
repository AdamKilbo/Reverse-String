#include <iostream>
using namespace std;

int main()
{
	string input, reverseInput;
	cout << "Enter string to reverse: ";
	cin >> input;

	reverseInput = input;

	int j = 0;

	for (int i = input.length() - 1; i >= 0; i--)
	{
		reverseInput[j] = input[i];
		j++;
	}

	cout << "The reverse of '" << input << "' is " << reverseInput << endl;
}