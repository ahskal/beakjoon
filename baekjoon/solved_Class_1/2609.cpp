#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main() {
	int N1, N2;
	cin >> N1 >> N2;
	int Max = 1, Min = 1;
	Min = gcd(N1, N2);
	Max = N1 * N2 / Min;
	cout << Min << "\n" << Max << endl;
}