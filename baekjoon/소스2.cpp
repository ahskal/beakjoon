#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

const int INF = 987654321;

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::string> board(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> board[i];
    }

    int min_repaint = INF;
    for (int i = 0; i + 7 < N; ++i) {
        for (int j = 0; j + 7 < M; ++j) {
            int repaint = 0;
            // 시작점을 (i, j)로 하여 8x8 체스판 생성
            for (int k = i; k < i + 8; ++k) {
                for (int l = j; l < j + 8; ++l) {
                    // 현재 칸이 체스판의 시작점과의 거리의 합이 짝수이면 흰색, 홀수이면 검은색이어야 함
                    if ((k - i + l - j) % 2 == 0) {
                        if (board[k][l] != 'W') {
                            ++repaint;
                        }
                    }
                    else {
                        if (board[k][l] != 'B') {
                            ++repaint;
                        }
                    }
                }
            }
            min_repaint = std::min(min_repaint, repaint);
        }
    }

    std::cout << min_repaint << std::endl;

    return 0;
}