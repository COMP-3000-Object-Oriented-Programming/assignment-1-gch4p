#include <iostream>

int main() {
	double guess = 0;
	int input = 0;
	double n = 0;
	double r = 0;

	std::cin >> input;
	n = static_cast<double>(input);
	guess = n / 2;
	for (int i = 0; i < 5; ++i) {
		r = n / guess;
		guess = (guess + r) / 2;
	}
	std::cout << guess;
}