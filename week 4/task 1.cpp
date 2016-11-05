#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Please add number between 5 and 20: ";
	cin >> num;
	int check = -1;
	if (num >= 5 && num <= 20) {
	    check = num % 2;
	}
	switch(check)
	{
	    case 1: cout << "The number is odd." << endl;
	        break;
	    case 0: cout << "The number is even" << endl;
	        break;
	   default: cout << "The number is not in the diapasone." << endl;
	        break;
	}
	return 0;
}
