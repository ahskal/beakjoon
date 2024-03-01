#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<pair<char, int>> v;
    for (auto s : str) {
        s = toupper(s);
        auto it = find_if(v.begin(), v.end(), [s](const pair<char, int>& element) {
            return element.first == s;
        });
        if (it != v.end()) {
            it->second++;
        }
        else {
            v.emplace_back(make_pair(s, 1));
        }
    }
    auto comp = [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    };

    sort(v.begin(), v.end(), comp);
    int idx = v.size()-1;

    char s = v[0].first;
    int maxVal = v[0].second;
    int sMaxVal = (v.size() > 1) ? v[1].second : -1;

    if (maxVal == sMaxVal) {
        s = '?';
    }

    cout << s << endl;
}
