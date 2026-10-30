#include<iostream>
using namespace std;
int function(int a, int b) {
		if (a % b == 0) return b;
		function(b, a % b);
	
}
int main() {
	int a, b;
	cin >> a >> b;
	int t = function(a, b);
	cout << t << " " << a * b / t;
	return 0;
}