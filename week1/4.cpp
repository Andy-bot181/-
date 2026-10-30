#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int o = n, sum = 0;
	while (n != 0) {
		sum = sum + (n % 10) * (n % 10) * (n / 10);
		n /= 10;
	}
	if (sum == o)cout << o << "是水仙花数";
	else {
		cout << o << "不是水仙花数";
	}
	return 0;
}