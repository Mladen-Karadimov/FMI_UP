#include <iostream>
#include <math.h>
using namespace std;


int main() {
	int number, symbols = 0;
	cin >> number;
	int tmp = number;
	bool check = true;
	while (tmp > 0) {
		symbols++;
		tmp /= 10;
	}
	
	for (int i = 0; i < symbols/2 || check; i++) {
	    int left = number/pow(10,symbols - i - 1);
		int right = number/pow(10,i);
	    if (left % 10 != right % 10)
	        check = false;
	}
	
	if(check) cout << "Number is Polindrom" << endl;
	else cout << "Number is NOT Polindrom" << endl;
	
	return 0;
}