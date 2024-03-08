#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    vector<pair<int, int>> V(T);
    for (int i = 0; i < T; i++) {
        cin >> V[i].first >> V[i].second;
    }
    sort(V.begin(), V.end(), [](auto& a, auto& b) {
        if (a.second != b.second) 
            return a.second < b.second;
        return a.first < b.first;
    });
    for (auto v : V) {
        cout << v.first << " " << v.second << "\n";
    }
}
