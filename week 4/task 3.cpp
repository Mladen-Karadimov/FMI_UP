#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Please insert 3 digit number: " << endl;
	cin >> n;
	int digitSum = 1;

	while (n > 0) {
	    digitSum *= n % 10;
	    n /= 10;
	}
	if (digitSum >= 100 && digitSum <= 999) {
	   cout << "YES " << digitSum << endl; 
	} else {
	    cout << "NO " << digitSum << endl;
	}
	return 0;
}
