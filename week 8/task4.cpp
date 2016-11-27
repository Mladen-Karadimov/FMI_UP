#include <iostream>
using namespace std;

int main () {
	int n, m, x;
	cin >> n >> m >> x;
	bool isPart = 0;
	int arr[n][m];
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++)
			cin >> arr[row][col];
	}

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++) {
			if (arr[row][col] == x) {
				cout << "Position = (" << row + 1 << "," << col + 1 << "), ->  " <<  arr[row][col] * 10 << endl;
				isPart = 1;
			}
		}
	}
	if(!isPart) cout << "Number is not seen in the matrix" << endl;
	return 0;
}
