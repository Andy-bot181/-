#include<iostream>
using namespace std;
int getpower(int x, int y) {
	if (y < 0)return 0;
	int sum = 1;
	for (int i = 0;i < y;i++) {
		sum *= x;
	}
	return sum;
}
double getpower(double x, int y) {
	double sum = 1;
	if (y == 0)return 1;
	if (y >= 0) {
		sum = sum *  x * getpower(x, y - 1);
	}
	else {
		sum = sum * 1 / x * getpower(x, y + 1);
	}
		return sum;
	
}
int main() {
	int a, m;
	double b;
	cin >> a >> b >> m;
	cout << getpower(a, m) << " " << getpower(b, m);
	return 0;
}
