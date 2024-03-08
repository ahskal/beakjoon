#include <iostream>
#include <vector>
#include <cmath>
#define MAX_INT 2147483647
using namespace std;
int func2(vector<string>& arr, int x, int y) {
    int white = 0;
    int black = 0;
    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == 0) {
                if (arr[i][j] != 'W')
                {
                    white++;
                }
                else {
                    black++;
                }
            }
            else {
                if (arr[i][j] != 'B')
                {
                    white++;
                }
                else {
                    black++;
                }
            }
        }
    }
    return min(white, black);
}
int func(vector<string>& arr, int N, int M) {
    int minRepaint = MAX_INT;
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            minRepaint = min(minRepaint, func2(arr, i, j));
        }
    }
    return minRepaint;
}
int main() {
    int N, M;
    cin >> N >> M;
    vector<string> str(N);
    for (int i = 0; i < N; i++)
        cin >> str[i];
    cout << func(str, N, M) << endl;
    return 0;
}
