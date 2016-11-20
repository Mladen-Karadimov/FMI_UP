#include <iostream>
using namespace std;
const int SIZE = 1000;
int main() {
	char arr[SIZE], symbol;
	int i;
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = getchar();
        if (arr[i] == '\n') break;
    }
    cin >> symbol;
    for (int j = 0; j < i; j++) {
        if (arr[j] == symbol) 
            arr[j] = '*';
        cout << arr[j] << "";
        
    }
    cout << endl;
	return 0;  
}