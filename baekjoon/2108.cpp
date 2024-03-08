#include <iostream>
#include <cmath>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;

	vector<int> numbers(N);
	for (int i = 0; i < N; ++i) {
		cin >> numbers[i];
	}

	int sum = 0;
	for (int num : numbers) {
		sum += num;
	}
	double mean = static_cast<double>(sum) / N;

	sort(numbers.begin(), numbers.end());
	int median = numbers[N / 2];

	unordered_map<int, int> freq;
	for (int num : numbers) {
		freq[num]++;
	}
	int max_freq = 0, mode;
	for (auto& pair : freq) {
		if (pair.second > max_freq) {
			max_freq = pair.second;
			mode = pair.first;
		}
	}

	vector<int> modes;
	for (auto& pair : freq) {
		if (pair.second == max_freq) {
			modes.push_back(pair.first);
		}
	}
	sort(modes.begin(), modes.end());
	int second_mode = modes.size() > 1 ? modes[1] : modes[0];

	int range = numbers.back() - numbers.front();

	cout << int(round(mean)) << endl;
	cout << median << endl;
	cout << second_mode << endl;
	cout << range << endl;
}