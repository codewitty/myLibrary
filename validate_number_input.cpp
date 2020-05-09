#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool validate_input(string str) {
		// Check user input for non-numeric values
		if (str.end() != find_if_not(str.begin(), str.end(), ::isdigit)) {
			return false;
		}
		// Check for empty string
		else if (str.empty())
			return false;
		else
			return true;
}

int getNumber() {
	int validNumber;
	string num;
    while(true) {
		cout << "Please enter a positive number: ";
		getline(cin, num);
		while (!validate_input(num)){
			cout << "Error!! Invalid input detected. Enter a positive number please: ";
			getline(cin, num);
		}
		if (num.empty())
			continue;
		//validNumber = stof(num);			// Convert to float
        else
            break;
    }
	validNumber = atoi(num.c_str());
	return validNumber;
}

int main() {
	int user_num = getNumber();
	cout << "Your number is: " << user_num << endl;
	return 0;
}
