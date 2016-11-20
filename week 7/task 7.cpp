#include <iostream>
using namespace std;

const int SIZE = 1000;

int main() {
    int n, stop = 0, lenght = 0, max = 0, words = 0;
	char arr[SIZE];
    for (int i = 0; i < SIZE && arr[i-1] != '!' && arr[i-1] != '?'; i++)
    {
        arr[i] = getchar();
    }
    for (int i = 0; i <= SIZE && arr[i-1] != '!' && arr[i-1] != '?'; i++) {
        if (arr[i] == ' ' || arr[i] == '!' || arr[i] == '?') {
            lenght = i - stop;
            stop = i + 1;
            if (max < lenght)
                max = lenght;
            words++;
        }
    }
    cout << words << " words and the longest is " << max << endl;
	return 0;  
}