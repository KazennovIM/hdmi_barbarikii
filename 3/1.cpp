#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;

	while(x > 0) {
		cout << x % 10 << '\n';
		x /= 10;
	}

return 0;
}
