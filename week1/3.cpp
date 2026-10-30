#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int o = n, r = 0;
	while (n != 0) {
		r = r * 10 + n % 10;
		n /= 10;
	}
	if (o == r) {
		cout << o << "是回文数";
	}
	else {
		cout << o << "不是回文数";
	}
	return 0;
}