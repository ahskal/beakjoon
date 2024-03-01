#include <iostream>
#include <string>
using namespace std;
string factorial(int n) {
	string result = "1";
	for (int i = 2; i <= n; ++i) {
		int carry = 0;
		for (int j = result.size() - 1; j >= 0; --j) {
			int product = (result[j] - '0') * i + carry;
			result[j] = (product % 10) + '0';
			carry = product / 10;
		}
		while (carry > 0) {
			result = char(carry % 10 + '0') + result;
			carry /= 10;
		}
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	string str{ factorial(n) };
	for (int i = 0; i < str.size(); i++)
	{
		if (str[str.size() - 1 - i] != '0')
		{
			cout << i;
			break;
		}
	}
}
