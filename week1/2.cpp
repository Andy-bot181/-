#include<iostream>
using namespace std;
int main() {
	double n;
	double w;
	cin >> n;
	if (n <= 10) {
		w = n * (0.1);
	}
	else if (n <= 20) {
		w = 1 + (n - 10) * (0.075);
	}
	else if (n <= 40) {
		w = 1 + 0.75 + (n - 20) * (0.05);
	}
	else if (n <= 60) {
		w = 1 + 0.75 +1+ (n - 40) * (0.03);
	}
	else if (n <= 100) {
		w = 1 + 0.75 + 1 +0.6+ (n - 60) * (0.015);
	}
	else {
		w = 1 + 0.75 + 0.6 + 1 + 0.6 + (n - 100) * (0.01);
	}
	cout << w;
	return 0;
}