#include <iostream>
using namespace std;

int main() {
	int n, i = 2;
	cin >> n;
	bool check = 1;
	
    while (i < n/2 && check == 1) {
        if (n % i == 0) {
            check = 0;
            cout << i << endl;
        }
        i++;
    }
    
    if (check) {
        cout << "Simple" << endl;;
    } else {
        cout << "Not Simple" << endl;  
    }
	return 0;
}