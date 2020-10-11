#include <iostream>

using namespace std;

void hello() {
	cout << "Hello!\n";
}

int sqr(int x) {
	return x * x;
}

int main() {
	hello();

	int x;
	cin >> x;

	int y = sqr(x);
	cout << y << "\n";

return 0;
}
