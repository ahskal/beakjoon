#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long A, B;
	cin >> A >> B;
	cout << (A + B) * (A - B) << endl;
}