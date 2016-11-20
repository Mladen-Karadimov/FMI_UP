#include <iostream>
using namespace std;

int main() {
	int n, sum = 0, count = 0;
	do {
		cin >> n;
		if (n % 2 == 0)
			sum += n;
		else
			count++;
	} while (n != 0);
	cout << sum << " - chentni suma, nechetni broi - " << count << endl;
	return 0;
}