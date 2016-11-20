#include <iostream>
#include <string.h>
using namespace std;

const int SIZE = 1000;

int main() {
    int n, poss = 0, count = 0;
	char arr1[SIZE], arr2[SIZE - 1];
    int first, second;
    for (first = 0; first < SIZE; first++)
    {
        arr1[first] = getchar();
        if (arr1[first] == '\n') break;
    }
    for (second = 0; second < SIZE-1; second++)
    {
        arr2[second] = getchar();
        if (arr2[second] == '\n') break;
    }
    for (int i = 0; i < first; i++) {
        if (arr1[i] == arr2[poss]) {
            poss++;
            if(poss == second) {
                count++;
                poss = 0;
            }
        } else {
            poss = 0;
        }
    } 
    cout << count << endl;
	return 0;  
}