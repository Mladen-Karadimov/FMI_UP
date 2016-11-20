#include <iostream>
using namespace std;

int main() {
    int n;
	cin >> n;
	const int SIZE = n;
	int arr[SIZE];
	bool check = true;
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];   
	}
	for (int i = 0; i < n/2 && check == true; i++) {
	    if (arr[i] != arr[n-i-1])
	        check = false;
	}
	if (check) cout << "Simetrichen" << endl;
	else cout << "Nesimetrichen" << endl;
	return 0; 
}