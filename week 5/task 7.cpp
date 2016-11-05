#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int bin = 0, reverse = 2;
	while (n > 0) {
	    reverse *= 10;
	    reverse += n % 2;
	    n /= 2;
	}
	while (reverse > 2) {
	    bin *= 10;
	    bin += reverse % 10;
	    reverse /= 10;
	}
	cout << bin << endl;
	return 0;
}
