#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
const int INF = 987654321;
int count_repaint(const std::vector<std::string>& board, int start_row, int start_col) {
    const int size = 8;
    int repaint = 0;
    char colors[2] = { 'B', 'W' };
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[start_row + i][start_col + j] != colors[(i + j) % 2]) {
                ++repaint;
            }
        }
    }
    return std::min(repaint, size * size - repaint);
}

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
            min_repaint = std::min(min_repaint, count_repaint(board, i, j));
        }
    }
    std::cout << min_repaint << std::endl;

    return 0;
}