#include <iostream>
#include <set>
using namespace std;
int main() {
	int num;
	set<int> set;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		set.emplace(num%42);
	}
	cout << set.size();
}