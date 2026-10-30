#include<iostream>
using namespace std;
void function(int a) {
	if (a == 1)cout << "No";
	else {
		int temp = 1;
		for (int i = 2;i * i <= a;i++) {
			if (a % i == 0)temp = 0;
		}
		if (temp)cout << "Yes";
		else cout << "No";
	}
}
int main() {
	int n;
	cin >> n;
	function(n);
	return 0;
}