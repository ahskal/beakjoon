//���丮��
int Factorial(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}
//���丮�� 10^20����
unsigned long long Factorial(const unsigned long long& n) {
	unsigned long long a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}