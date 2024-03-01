#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		int sub = r1 > r2 ? r1 - r2 : r2 - r1;
		if (dis == 0 and r1 == r2)
			cout << -1 << endl;
		else if (dis < r1 + r2 and sub < dis) cout << 2 << endl;
		else if (dis == r1 + r2 or dis == sub) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
