#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	char c;
	for(int i = 0; i < n; i++) {
		cin >> c;
		if(c >= 'a' && c <= 'z')
			count++;
	}
	cout << count << endl;
	return 0;
}