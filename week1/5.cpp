#include<iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n >> a;
	int sum = 0;
	int o = n;
	for (int count = 0;count < n;count++) {
		int t = 1;
		for (int m = 0;m < count;m++) {
			t = t * 10;
		}
		sum = sum + a * o * t;
		o--;
	}
	cout << sum;
	return 0;
}