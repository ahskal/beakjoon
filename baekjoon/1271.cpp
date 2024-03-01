#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::vector<int> stov(const std::string& num) {
	std::vector<int> result;
	for (char digit : num) {
		result.push_back(digit - '0');
	}
	return result;
}

std::string vtos(const std::vector<int>& num) {
	std::string result;
	for (int digit : num) {
		result += std::to_string(digit);
	}
	return result;
}
std::string reverseString(const std::string& str) {
	std::string reversed;
	for (int i = str.length() - 1; i >= 0; i--) {
		reversed += str[i];
	}
	return reversed;
}

std::string subtractStrings1(const std::string& num1, const std::string& num2) {
	std::string result;
	int borrow = 0;
	int i = num1.length() - 1;
	int j = num2.length() - 1;

	while (i >= 0 || j >= 0) {
		int diff = borrow;
		if (i >= 0) diff += num1[i--] - '0';
		if (j >= 0) diff -= num2[j--] - '0';
		if (diff < 0) {
			diff += 10;
			borrow = 1;
		}
		else {
			borrow = 0;
		}
		// 0을 빼버리는 대신에 음수 처리를 위해 10을 더합니다.
		result = std::to_string(diff) + result;
	}

	// 결과가 음수인 경우 "-"를 앞에 붙입니다.
	if (borrow == 1) {
		result = "-" + result;
	}

	return result;
}
std::string subtractStrings(const std::string& num1, const std::string& num2) {
	std::string result;
	int borrow = 0;
	int i = num1.length() - 1;
	int j = num2.length() - 1;











	// 두 수의 크기 비교
	if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2)) {
		return "-" + subtractStrings(num2, num1); // num2에서 num1을 뺀 결과에 "-"를 붙여 반환
	}

	while (i >= 0 || j >= 0) {
		int diff = borrow;
		if (i >= 0) diff += num1[i--] - '0';
		if (j >= 0) diff -= num2[j--] - '0';
		if (diff < 0) {
			diff += 10;
			borrow = 1; // 빌림 처리
		}
		else {
			borrow = 0;
		}
		result = std::to_string(diff) + result;
	}
}


int subtract(string n, string m) {
	for (int i = 0; i < m.size(); i++) {
		n[i] = n[i] - m[i] + '0';
		if (n[i] < '0') {
			n[i] += 10;
			n[i - 1]--;
		}
	}


	return 0;
}



int main() {
	string n, m;
	//cin >> n >> m;

	n = 11111;
	m = 9999;

	int i = 0;

	int diff = 0;

	// 즉 맨 뒤에있는값이 맨앞으로온다
	n = reverseString(n);
	m = reverseString(m);
	for (int i = 0; i < m.size(); i++) {
		n[i] = n[i] + m[i] + '0';
		if (n[i] < '0') {
			n[i] += 10;
			n[i + 1]--;
		}
	}
	cout << n;


	//string result;
	//int borrow = 0;
	//while (i >= 0 || j >= 0) {
	//	diff += n[i--] - '0';
	//	cout << diff << endl;
	//	diff -= m[j--] - '0';
	//	cout << diff << endl;
	//	if (diff < 0) {
	//		diff += 10;
	//		borrow = 1; // 빌림 처리
	//	}
	//	else {
	//		borrow = 0;
	//	}
	//	result = std::to_string(diff) + result;
	//}
	//cout << result;

	//std::string num1 = "11111";
	//std::string num2 = "9999";
	//
	//std::string difference = subtractStrings(num1, num2);
	//
	//std::cout << "Difference: " << difference << std::endl;


	return 0;
}