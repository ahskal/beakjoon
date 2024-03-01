#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
bool can_use_magnets(const std::string& phrase) {
	std::unordered_set<char> letters_seen;
	for (char letter : phrase) {
		if (letter != ' ') {
			if (letters_seen.find(letter) != letters_seen.end()) {
				return false;
			}
			else {
				letters_seen.insert(letter);
			}
		}
	}
	return true;
}
int main() {
	while (true) {
		string str = "";
		getline(cin, str);
		if (str == "END") {
			break;
		}
		if (can_use_magnets(str)) {
			cout << str << endl;
		}
	}
}