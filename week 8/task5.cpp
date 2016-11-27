#include <iostream>
using namespace std;

int main () {
	int n, m;
	cout << "Size :";
	cin >> n >> m;
	int a[n][m], b[n][m];
	cout << "Insert matrix A" << endl;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col ++)
			cin >> a[row][col];
	}
	cout << "Insert matrix B" << endl;
	for (int row = 0; row < n; row++) {
                for (int col = 0; col < m; col ++)
                        cin >> b[row][col];
        }

	// A + B
	cout << "A + B =" << endl;
	for (int row = 0; row < n; row++) {
                for (int col = 0; col < m; col ++)
			cout << a[row][col] + b[row][col] << " ";
		cout << endl;
	}
	// -(A)
	cout << "-(A) =" <<endl;
	for (int row = 0; row < n; row++) {
                for (int col = 0; col < m; col ++)
                        cout << -a[row][col] << " ";
                cout << endl;
        }
	// 2A + 3B
	cout << "2A + 3B =" << endl;
        for (int row = 0; row < n; row++) {
                for (int col = 0; col < m; col ++)
                        cout << a[row][col]*2 + b[row][col]*3 << " ";
                cout << endl;
        }




	return 0;
}
