#include <iostream>
using namespace std;

int main() {
    int n, minPoss = 0, maxPoss = 0;
	cin >> n;
	const int SIZE = n;
	double arr[SIZE], min, max;
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];    
	}
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < n; i++) {
	    if (min > arr[i]) {
	        min = arr[i];
			minPoss = i;
		}
	   if (max < arr[i]) {
	        max = arr[i];
			maxPoss = i;
		}
	}
	int tmp = arr[minPoss];
	arr[minPoss] = arr[maxPoss];
	arr[maxPoss] = tmp;
	for (int i = 0; i < n; i++)
	    cout << arr[i] << " ";
	cout << endl;
	return 0;
}