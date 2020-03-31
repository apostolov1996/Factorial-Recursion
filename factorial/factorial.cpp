#include <iostream>
// n!=n(n-1)!=n(n-1)(n-2)! n(n-1)(n-2)(n-3)....

int factorial(int n) {
	if (n <= 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	int x{ factorial(4) };
	std::cout << "Result: " << x;
	return 0;
}