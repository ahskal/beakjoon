#include <iostream>
using namespace std;
int main() {
	string N;
	cin >> N;
	float answer = 0;
	if (N == "A+") answer = 4.3;
	if (N == "A0") answer = 4.0;
	if (N == "A-") answer = 3.7;
	if (N == "B+") answer = 3.3;
	if (N == "B0") answer = 3.0;
	if (N == "B-") answer = 2.7;
	if (N == "C+") answer = 2.3;
	if (N == "C0") answer = 2.0;
	if (N == "C-") answer = 1.7;
	if (N == "D+") answer = 1.3;
	if (N == "D0") answer = 1.0;
	if (N == "D-") answer = 0.7;
	if (N == "F") answer = 0.0;
	printf("%.1f", answer);
}