#include <iostream>
using namespace std;

int main() {
    int n;
	cin >> n;
	const int SIZE = n;
	double arr[SIZE], min, max;
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];    
	}
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < n; i++) {
	    if (min > arr[i])
	        min = arr[i];
	   if (max < arr[i])
	        max = arr[i];
	}
	cout << "min = " << min << ", max = " << max << endl;
	return 0;
}