#include <iostream>

using namespace std;

void sleep(int n) {
	int sum = 0;
	for(int i = 0; i < n; ++i)
		sum += i;
}

int main() {
	int x;
	cin >> x;

	int y = x;
	int power = 1;
	while(y > 0) {
		y /= 10;
		power *= 10;
	}

	power /= 10;

	while(x > 0){
		sleep(100000000);
		int digit = x / power;
		cout << "\e[" << digit + 30 << ";1m";
		cout << digit << '\a';
		cout << flush;
		x %= power;
		power /= 10;
	}

return 0;
}
