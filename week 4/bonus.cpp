#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int f0 = 0;
	int f1 = 1;
	int fib;
	cout << f0 << ' ' << f1;
	for (int i = 0; i < n - 2; i++) {
	    fib = f0 + f1;
	    f0 = f1;
	    f1 = fib;
	    cout << ' ' << fib;
	}
	cout << endl;
	return 0;
}
