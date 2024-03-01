#include <iostream>
using namespace std;
int main() {
	int A, B, V; cin >> A >> B >> V;
	cout << (V - B) / (A - B) + 1;
}