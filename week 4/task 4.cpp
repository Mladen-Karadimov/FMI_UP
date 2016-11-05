#include <iostream>
#include <limits>
using namespace std;

int main() {
	int n;
	cout << "Please tell how many numbers will you use: ";
	cin >> n;
	int maxFromMin = std::numeric_limits<int>::min(); // smallest int number
	int temp;
	for(int i = 0; i < n; i++) {
	    cin >> temp;
	    if (temp < 0 && temp > maxFromMin) {
	        maxFromMin = temp;
	    }
	}
	if (maxFromMin == std::numeric_limits<int>::min()) {
	    cout << "not even 1 number was negative" << endl;
	} else {
	    cout << "The biggest negative number is: " << maxFromMin << endl;
	}
	return 0;
}
