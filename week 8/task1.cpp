#include <iostream>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++)
			cin >> arr[row][col];
	}

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++)
			cout << arr[row][col] + 10 << " ";
		cout << endl;
	}
	return 0;
}
