#include<iostream>
using namespace std;
int s(int day) {
	int sum = 1;
	for (int count = 1;count < day;count++) {
		sum = (sum + 1) * 2;
	}
	return sum;
}
int main() {
	cout << s(10);
}