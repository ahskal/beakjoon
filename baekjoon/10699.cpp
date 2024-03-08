#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	int year = t->tm_year + 1900;
	int month = t->tm_mon + 1;
	int day = t->tm_mday;

	cout << year << "-" << std::setfill('0') << std::setw(2) << month << "-" << std::setw(2) << day;
}