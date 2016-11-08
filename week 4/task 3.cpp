#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Please insert 3 digit number: " << endl;
	cin >> n;
	int digitSum = 0;
	int digitMul = 1;

	while (n > 0) {
	    digitMul *= n % 10;
	    digitSum += n % 10;
	    n /= 10;
	}
	if (digitMul >= 100 && digitMul <= 999) {
	   cout << "YES " << digitMul << endl; 
	} else {
	    cout << "NO " << digitMul - digitSum << endl;
	}
	return 0;
}
