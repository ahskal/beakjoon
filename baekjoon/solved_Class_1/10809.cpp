#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str;
    cin >> str;
    vector<int> V(26, -1);

    for (int i = 0; i < str.size(); i++) {
        int idx = str[i] - 'a';
        if (V[idx] == -1) {
            V[idx] = i;
        }
    }

    for (auto v : V) {
        cout << v << " ";
    }
}