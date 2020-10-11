#include <iostream>

using namespace std;

int digit_count(int x) {
	int count = 0;
	while(x > 0) {
		x /= 10;
		++count;
	}

	return count;
}

int main() {
	int x = 1;
	while(x > 0) {
		cin >> x;
		cout << digit_count(x) << "\n";
	}
return 0;
}
