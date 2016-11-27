#include <iostream>
using namespace std;

int main () {
	int n, m, min, max;
	cin >> n >> m;
	int arr[n][m];
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++)
			cin >> arr[row][col];
	}
	min = arr[0][0];
	max = min;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++) {
			if (arr[row][col] > max)
				max = arr[row][col];
			else if (arr[row][col] < min)
				min = arr[row][col];
		}
	}
	cout << "Min = " << min << " Max = " << max << endl;
	return 0;
}
