#include<iostream>
using namespace std;
int function(int n) {
	if (n == 1 || n == 2)return 1;
	return function(n - 1) + function(n - 2);
}
int main() {
	int n;
	cin >> n;
	cout<<function(n);
	return 0;
}