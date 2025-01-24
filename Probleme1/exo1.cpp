
#include <iostream>

using namespace std;

int main() {

	// D�claration des variables
	int input_number;

	// Entr�e du nombre par l'utilisateur
	cout << "Entrez un nombre entier: ";
	cin >> input_number;

	// V�rification si le nombre est -1, 0 ou 1
	if (input_number == -1 || input_number == 0 || input_number == 1) {
		cout << "Ce nombre n'est pas premier car -1, 0 et 1 ne sont pas des nombres premiers.";
		return 0;
	}

	// V�rification de si le nombre est divisible par 2
	if (input_number != 2 && input_number % 2 == 0) {
		cout << "Ce nombre n'est pas premier car il est divisible par 2.";
		return 0;
	}

	// V�rification de si le nombre est divisible par les nombres impairs entre 3 et la racine carr�e du nombre
	for (int i = 3; i <= ceil(sqrt(input_number)); i += 2) {
		if (input_number % i == 0) {
			cout << "Ce nombre n'est pas premier car il est divisible par " << i << ".";
			return 0;
		}
	}

	// Si le programme n'a d�tect� aucun diviseur au nombre, il le d�clare premier
	cout << "Ce nombre est premier.";
	return 0;
}