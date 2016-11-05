#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int result = 1;
	for (int i = a; i <= b; i++) {
	    result *= i;
	}
    cout << result << endl;	
	return 0;
}
