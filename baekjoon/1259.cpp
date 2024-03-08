#include <iostream>
using namespace std;
int main() {
	while (1) {
		string word;
		cin >> word;

		if (word[0] == '0')
		{
			break;
		}

		string answer = "yes";
		for (int i = 0; i < word.size() / 2; i++) {
			if (word[i] != word[word.size() - 1 - i]) {
				answer = "no";
			}
		}
		cout << answer << endl;
	}
}