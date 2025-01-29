/*
 * Nom: Exercice 1 TP1
 * Description: Exercice 1 du TP1, indique si un nombre entré par l'utilisateur est premier ou pas.
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include <iostream>

using namespace std;

int main() {

	int inputNumber;

	cout << "\nEntrez un nombre entier: ";
	cin >> inputNumber;

	if (inputNumber == -1 || inputNumber == 0 || inputNumber == 1) {
		cout << "\nCe nombre n'est pas premier car -1, 0 et 1 ne sont pas des nombres premiers." << endl;
		return 0;
	}

	if (inputNumber != 2 && inputNumber % 2 == 0) {
		cout << "\nCe nombre n'est pas premier car il est divisible par 2." << endl;
		return 0;
	}

	for (int i = 3; i <= ceil(sqrt(inputNumber)); i += 2) {
		if (inputNumber % i == 0) {
			cout << "\nCe nombre n'est pas premier car il est divisible par " << i << "." << endl;
			return 0;
		}
	}

	cout << "\nCe nombre est premier." << endl;

	return 0;
}