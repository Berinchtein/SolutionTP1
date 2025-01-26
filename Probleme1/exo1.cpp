
#include <iostream>

using namespace std;

int main() {

	int input_number;

	cout << "Entrez un nombre entier: ";
	cin >> input_number;

	if (input_number == -1 || input_number == 0 || input_number == 1) {
		cout << "Ce nombre n'est pas premier car -1, 0 et 1 ne sont pas des nombres premiers.";
		return 0;
	}

	if (input_number != 2 && input_number % 2 == 0) {
		cout << "Ce nombre n'est pas premier car il est divisible par 2.";
		return 0;
	}

	for (int i = 3; i <= ceil(sqrt(input_number)); i += 2) {
		if (input_number % i == 0) {
			cout << "Ce nombre n'est pas premier car il est divisible par " << i << ".";
			return 0;
		}
	}

	cout << "Ce nombre est premier.";

	return 0;
}