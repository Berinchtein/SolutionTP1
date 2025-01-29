/*
 * Nom: Exercice 3 TP1
 * Description: Exercice 3 du TP1, indique la hauteur d'une balle après un certain nombre de rebonds.
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include "../Probleme2/functions.hpp"

#include <iostream>

using namespace std;

int main() {

	double initialHeight;
	double preBounceHeight;
	double postBounceHeight;
	double preBounceSpeed;
	double postBounceSpeed;
	double nbBounces;
	double bounceCoefficient;
	int bounceIterator;
	const double g = 9.81;

	do {
		cout << "\nEntrez la hauteur initiale de la balle (m): ";
		cin >> initialHeight;
		if (!isBetween2Doubles(initialHeight, 0)) {
			cout << "La hauteur entree n'est pas positive. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(initialHeight, 0));

	do {
		cout << "\nEntrez le nombre de rebonds au bout duquel vous voulez savoir la hauteur de la balle: ";
		cin >> nbBounces;
		if (!isBetween2Doubles(nbBounces, 0)) {
			cout << "La nombre de rebonds entre n'est pas positif. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(nbBounces, 0));

	do {
		cout << "\nEntrez le coefficient de rebond de la balle: ";
		cin >> bounceCoefficient;
		if (!isBetween2Doubles(bounceCoefficient, 0, 1)) {
			cout << "Le coefficient de rebond entre n'est situe entre 0 et 1. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(bounceCoefficient, 0, 1));

	for (bounceIterator = 1; bounceIterator <= nbBounces; bounceIterator++) {
		if (bounceIterator == 1) {
			preBounceHeight = initialHeight;
		}
		else {
			preBounceHeight = postBounceHeight;
		}
		preBounceSpeed = sqrt(2.0 * g * preBounceHeight);
		postBounceSpeed = bounceCoefficient * preBounceSpeed;
		postBounceHeight = (postBounceSpeed * postBounceSpeed) / (2.0 * g);
		if (bounceIterator == nbBounces) {
			cout << "\nHauteur de la balle apres le rebond #" << bounceIterator << ": " << (round(postBounceHeight * 10000.0)) / 10000.0 << " m" << endl;
		}
	}

	return 0;
}