#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
    bool equilateral = 0, isosceles = 0, scalene = 0, exists = 0;
    
    exists = ((a+b) > c) && ((a+c) > b) && ((c+b) > a);
    
    if (exists) {
        equilateral = a == b & b == c;
        isosceles = a == b || a == c || b == c;
        
        if (equilateral){
            cout << "exist, equilateral" << endl;
        } else if (isosceles) {
            cout << "exist, isosceles" << endl;
        } else {
           cout << "exist,scalene" << endl;
        }
    } else {
        cout << "Does not exists" << endl;
    }
	return 0;
}
