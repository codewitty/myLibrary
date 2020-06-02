#include <iostream>
#include <string>

using namespace std;

// *************************************************************
// Function to convert a letter to uppercase
// *************************************************************

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// *************************************************************
// Function to convert a string to uppercase
// *************************************************************

string toUpperString(string in){
	for(int i = 0; i < in.length(); ++i) {
		in[i] = ft_toupper(in[i]);
	}
	return in;
}

// *************************************************************
// Example driver code
// *************************************************************

int main() {
	string str = "Hello";
	cout << toUpperString(str);
}
