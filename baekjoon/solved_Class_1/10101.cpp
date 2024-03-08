#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
		cout << "Error";
	}
    else {
        if (a == b && b == c) {
            cout << "Equilateral";  
        }
        else if (a == b || b == c || a == c) {
            cout << "Isosceles"; 
        }
        else {
            cout << "Scalene"; 
        }
    }

}