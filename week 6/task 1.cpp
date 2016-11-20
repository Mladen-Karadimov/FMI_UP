#include <iostream>
using namespace std;

int main() {
	int n, result = 1;
	double a;
	cin >> a >> n;
	for (int i = 0, i < n; i++) {
		result *= a;
	}
	cout << result << endl;
	return 0;
}