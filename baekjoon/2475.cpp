#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, answer =0 ;
	for (int i = 0; i < 5; i++){
		cin >> a;
		answer += pow(a, 2);
	}
	cout << answer % 10;
}