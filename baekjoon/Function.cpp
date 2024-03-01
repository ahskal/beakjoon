//팩토리얼
int Factorial(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}
//팩토리얼 10^20까지
unsigned long long Factorial(const unsigned long long& n) {
	unsigned long long a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}