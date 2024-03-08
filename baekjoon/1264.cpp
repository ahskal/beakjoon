#include <iostream>
#include <sstream>
using namespace std;
int main() {
	string str;
	while (getline(cin, str)) {
		if (str[0] == '#') break;
		int count = 0;
		for (auto s : str) {
			switch (s)
			{
			case 'a':case 'e':case 'i':case 'o':case 'u':
			case 'A':case 'E':case 'I':case 'O':case 'u': count++;
				break;
			default:
				break;
			}
		}
		cout << count << endl;
	}
}