#include <iostream>
#include <cctype>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string str;
	cin >> str;
    string answer;
    for (char c : str) {
        if (std::isupper(c)) {
            answer += std::tolower(c);
        }
        else if (std::islower(c)) {
            answer += std::toupper(c);
        }
    }
    cout << answer << endl;
}