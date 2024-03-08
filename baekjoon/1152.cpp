// 단어의 개수
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
	//string str;
	//getline(cin, str); 
	//stringstream ss(str);
	//string s1;
	//int n = 0;
	//while (ss >> s1) {
	//	n++;
	//}
	//cout << n << endl;

	string str;
	getline(cin, str);
	int n = 1;
	for (auto s : str) {
		if (s == ' ')
			n++;
	}
	cout << n << endl;
}


