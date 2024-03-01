#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
	int T;
	cin >> T;
	vector<string> V;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;		
		V.emplace_back(str);
	}
	auto StringShort = [](const string& a, const string& b) {
		if (a.length() == b.length()) {
			return a < b;
		}
		return a.length() < b.length();
	};
	sort(V.begin(), V.end(), StringShort);
	string prev = "";
	for (const auto& str : V) {
		if (str != prev) {
			cout << str << endl;
			prev = str;
		}
	}
}