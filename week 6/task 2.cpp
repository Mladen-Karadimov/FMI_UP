#include <iostream>
using namespace std;

int main() {
	int k, number = 100, tmp, sum;
	cin >> k;
	while(number < 1000) {
		tmp = number;
		sum = 0;
		while(tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == k) cout << number << endl;
		number++;
	}
	return 0;
}