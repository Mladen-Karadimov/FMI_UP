#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
	    cout << "a" << i << " = " << (i*i) + (3*i) << endl;
	}
	return 0;
}
