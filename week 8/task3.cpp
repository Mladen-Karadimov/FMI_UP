#include <iostream>
using namespace std;

int main () {
	int n, m, sum;
	cin >> n;
	int arr[n][n];
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col ++)
			cin >> arr[row][col];
	}
	//Sum of Rows
	cout << "Sum of Rows" << endl;
	for (int row = 0; row < n; row++) {
		cout << "Sum of row " << row + 1 << " = ";
		sum = 0;
		for (int col = 0; col < n; col ++)
			sum += arr[row][col];
		cout << sum << endl;
	}
	//Sum of Coloms
        cout << "Sum of Coloms" << endl;
        for (int col = 0; col < n; col++) {
                cout << "Sum of col " << col + 1 << " = ";
		sum = 0;
                for (int row = 0; row < n; row++)
                        sum += arr[row][col];
                cout << sum << endl;
        }
	//Sum of Diagonal
        cout << "Sum of diagonal = ";
	sum = 0;
        for (int i = 0; i < n; i++)
	        sum += arr[i][i];
        cout << sum << endl;
	//Sum of POD Diagonal
        cout << "Sum of pod diagonal = ";
        sum = 0;
        for (int i = 0; i < n - 1; i++)
                sum += arr[i+1][i];
        cout << sum << endl;
	//Sum of NAD Diagonal
        cout << "Sum of nad diagonal = ";
        sum = 0;
        for (int i = 0; i < n - 1; i++)
                sum += arr[i][i+1];
        cout << sum << endl;
	//Sum of Second Diagonal
        cout << "Sum of second diagonal = ";
        sum = 0;
        for (int i = n-1; i >= 0; i--)
                sum += arr[n - 1 - i][i];
        cout << sum << endl;
        //Sum of second POD Diagonal
        cout << "Sum of second pod diagonal = ";
        sum = 0;
        for (int i = n - 1; i > 0; i--)
                sum += arr[i][n - i];
        cout << sum << endl;
        //Sum of NAD Diagonal
        cout << "Sum of second nad diagonal = ";
        sum = 0;
        for (int i = n - 1; i > 0; i--)
                sum += arr[n - 1 - i][i - 1];
        cout << sum << endl;



	return 0;
}
