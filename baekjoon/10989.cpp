#include <stdio.h>
using namespace std;
int arr[10001];
int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		arr[N] = arr[N] + 1;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 1; j <= arr[i]; j++) {
			printf("%d\n", i);
		}
	}	
	return 0;
}