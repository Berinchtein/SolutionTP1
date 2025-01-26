/*
 * Nom: Probleme 1 TP2
 * Description: Fichier principal du probleme #1 pour le TP2
 * Auteurs: Massylia Aggoun et Manuel Jarry
 */

#include <iostream>

using namespace std;

int main() {

	int inputNumber;

	cout << "Entrez un nombre entier: ";
	cin >> inputNumber;

	if (inputNumber == -1 || inputNumber == 0 || inputNumber == 1) {
		cout << "Ce nombre n'est pas premier car -1, 0 et 1 ne sont pas des nombres premiers.";
		return 0;
	}

	if (inputNumber != 2 && inputNumber % 2 == 0) {
		cout << "Ce nombre n'est pas premier car il est divisible par 2.";
		return 0;
	}

	for (int i = 3; i <= ceil(sqrt(inputNumber)); i += 2) {
		if (inputNumber % i == 0) {
			cout << "Ce nombre n'est pas premier car il est divisible par " << i << ".";
			return 0;
		}
	}

	cout << "Ce nombre est premier.";

	return 0;
}