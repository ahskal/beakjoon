#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int H, W, N;
		cin >> H >> W >> N;
		int floor = N % H;
		if (floor == 0) floor = H; 
		int roomNum = (N - 1) / H + 1;
		cout << floor * 100 + roomNum << endl;
	}
}