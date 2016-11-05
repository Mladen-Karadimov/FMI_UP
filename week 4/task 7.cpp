#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a,b;
	cin >> a >> b;
	
	for(int i = 1; i < n; i++) {
	    for (int j = 0; j < i; j++) {
	        cout << a;
	    }
	    for (int j = n; j > i; j--) {
	        cout << b;
	    }
	    cout << endl;
	}
	return 0;
}