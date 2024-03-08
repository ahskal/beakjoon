#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> Stack;
    vector<int> V(N);
    vector<char> answer;

    for (int i = 0; i < N; ++i) {
        scanf("%d", &V[i]);
    }
    
    int num = 1;

    for (int v : V) {
        while (num <= v) {
            Stack.push(num++);
            answer.push_back('+');
        }

        if (Stack.top() == v) {
            Stack.pop();
            answer.push_back('-');
        }
        else {
            printf("NO\n");
            return 0;
        }
    }

    for (auto ans : answer) {
        printf("%c\n", ans);
    }
}
