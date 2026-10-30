#include<iostream>
using namespace std;
int main() {
	int s1 = 2, s2 = 2;
	cout << s1 << " " << s2 << " ";
	for (int count = 1;count < 10;count++) {
		s1 = s1 + s2;
		s2 = s1 + s2;
		cout << s1 << " " << s2 << " ";
	}
	return 0;
}