#include <iostream>
#include <string>
using namespace std;
int main() {
	int num;
	int answer = 1;

	for (int i = 0; i < 3; i++) {
		cin >> num;
		answer *= num;
	}
	int list[10] = { 0 };
	for (auto s : to_string(answer)) {
		list[s-48]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << list[i] << endl;;
	}
}