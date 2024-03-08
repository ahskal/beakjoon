#include <iostream>
using namespace std;

struct P {
	int kg;
	int cm;
	int rank;
	P() : cm(0), kg(0), rank(0) {}
	bool operator< (const P& n) const {
		return kg < n.kg && cm < n.cm;
	}
};
int main() {
	int T;
	cin >> T;
	P* p = new P[T];
	for (int i = 0; i < T; i++) {
		cin >> p[i].kg >> p[i].cm;
	}
	for (int i = 0; i < T; i++) {
		p[i].rank = 1;
		for (int j = 0; j < T; j++) {
			if (i == j) continue;
			if (p[i] < p[j]) {
				p[i].rank++;
			}
		}
		cout << p[i].rank << "\n";
	}
	cout << endl;
}