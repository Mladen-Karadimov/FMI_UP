#include <iostream>
using namespace std;

int main() {
    int n;
	cin >> n;
	const int SIZE = n;
	int arr[SIZE], count = 0, tmp, sum;
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];   
	    tmp = arr[i];
	    sum = 0;
	    while (tmp != 0) {
	        sum += tmp % 10;
	        tmp /= 10;
	    }
	    if (sum / 10 == 0)
	        count++;
	}
	if(count) cout << count << endl;
	else cout << "not even 1 number had required sum" << endl;
	return 0;
}