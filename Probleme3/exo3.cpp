/*
 * Nom: Exercice 3 TP1
 * Description: Exercice 3 du TP1, indique la hauteur d'une balle après un certain nombre de rebonds.
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include "../Probleme2/functions.hpp"

#include <iostream>

using namespace std;

int main() {

	const double g = 9.81;
	const unsigned numberOfDecimals = 3;

	double initialHeight;
	double preBounceHeight;
	double postBounceHeight;
	double preBounceSpeed;
	double postBounceSpeed;
	double bounceCoefficient;
	double doubleRoundMultiplier = pow(10.0, numberOfDecimals);
	unsigned numberOfBounces;


	do {
		cout << "\nEntrez la hauteur initiale de la balle (m): ";
		cin >> initialHeight;
		if (!isBetween2Doubles(initialHeight, 0)) {
			cout << "La hauteur entree n'est pas positive. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(initialHeight, 0));

	do {
		cout << "\nEntrez le nombre de rebonds au bout duquel vous voulez savoir la hauteur de la balle: ";
		cin >> numberOfBounces;
		if (!isBetween2Doubles(numberOfBounces, 0)) {
			cout << "La nombre de rebonds entre n'est pas positif. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(numberOfBounces, 0));

	do {
		cout << "\nEntrez le coefficient de rebond de la balle: ";
		cin >> bounceCoefficient;
		if (!isBetween2Doubles(bounceCoefficient, 0, 1)) {
			cout << "Le coefficient de rebond entre n'est situe entre 0 et 1. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(bounceCoefficient, 0, 1));

	for (int i = 1; i <= numberOfBounces; i++) {
		if (i == 1) {
			preBounceHeight = initialHeight;
		}
		else {
			preBounceHeight = postBounceHeight;
		}
		preBounceSpeed = sqrt(2.0 * g * preBounceHeight);
		postBounceSpeed = bounceCoefficient * preBounceSpeed;
		postBounceHeight = (postBounceSpeed * postBounceSpeed) / (2.0 * g);
		if (i == numberOfBounces) {
			cout << "\nHauteur de la balle apres le rebond #" << i << ": " << (ceil(postBounceHeight * doubleRoundMultiplier)) / doubleRoundMultiplier << " m" << endl;
		}
	}

	return 0;
}