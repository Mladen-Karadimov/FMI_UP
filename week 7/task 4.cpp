#include <iostream>
using namespace std;

int main() {
    int n;
	cin >> n;
	const int SIZE = n;
	int arr[SIZE], sum = 0, first;
	bool check = 0;
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];   
	}
	for (int i = 0; i < n; i++) {
	    if (arr[i] >= 0) {
	        check = 1;
	        first = arr[i];
	        i++;
	    }
	    if (check) 
	        sum += arr[i];
	}
	if(check) 
	    cout << "First = " << first << ", sum after = " << sum << endl;
	else
	    cout << "NO" << endl;
	return 0;
}