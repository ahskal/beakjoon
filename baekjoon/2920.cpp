#include <iostream>
#include <string>
using namespace std;
int main() {
	int num;
	string str;
	for (int i = 0; i < 8; i++) {
		cin >> num;
		str += to_string(num);
	}
	if (str == "12345678") cout << "ascending";
	else if (str == "87654321") cout << "descending";
	else cout << "mixed";
}