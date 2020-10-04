#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;

	int y = x;
	int count = 0;
	while(y > 0) {
		y /= 10;
		++count;
	}

	int power = 1;
	for(int i = 1; i <= count - 1; ++i)
		power *= 10;

	while(x > 0){
		cout << x / power << '\n';
		x %= power;
		power /= 10;
	}

	cout << "count = " << count << '\n';
	cout << "power = " << power << '\n';

return 0;
}
