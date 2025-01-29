/*
 * Nom: Exercice 5 TP1
 * Description: Exercice 5 du TP1,  prend un certain tableau et affiche ce même tableau avec les éléments
				pairs placés en premier et les éléments impairs placés en dernier.
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include <iostream>

using namespace std;

int main() {

	const unsigned arrayLength = 10;

	int initialArray[arrayLength] = { 7, 4, 7, 8, 4, 6, 3, 9, 6, 11 };
	int arrangedArray[arrayLength] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iterator_1 = 0;
	int iterator_2 = 0;

	cout << "Tableau initial: {";
	for (iterator_1 = 0; iterator_1 < arrayLength - 1; iterator_1++) {
		cout << " " << initialArray[iterator_1] << ",";
	}
	cout << " " << initialArray[arrayLength - 1] << " }" << endl;

	// Unoptimized loops
	for (iterator_1 = 0; iterator_1 < arrayLength; iterator_1++) {
		if (initialArray[iterator_1] % 2 == 0) {
			arrangedArray[iterator_2] = initialArray[iterator_1];
			iterator_2 += 1;
		}
	}
	for (iterator_1 = 0; iterator_1 < arrayLength; iterator_1++) {
		if (initialArray[iterator_1] % 2 == 1) {
			arrangedArray[iterator_2] = initialArray[iterator_1];
			iterator_2 += 1;
		}
	}

	cout << "Tableau arrange: {";
	for (iterator_1 = 0; iterator_1 < arrayLength - 1; iterator_1++) {
		cout << " " << arrangedArray[iterator_1] << ",";
	}
	cout << " " << arrangedArray[arrayLength - 1] << " }" << endl;

	return 0;
}