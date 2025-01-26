
#include <iostream>
#include "../Probleme2/fonctions.hpp"

using namespace std;

int main() {

	// D�claration des variables
	double initial_height;
	double nb_bounces;
	double bounce_coefficient;

	// Entr�e de la hauteur initiale de la balle et v�rification de sa validit�
	do {
		cout << "\nEntrez la hauteur initiale de la balle (m): ";
		cin >> initial_height;
		if (!between_2_doubles(initial_height, 0)) {
			cout << "La hauteur entree n'est pas positive. Veuillez recommencer.";
		}
	} while (!between_2_doubles(initial_height, 0));

	// Entr�e du nombre de rebonds de la balle et v�rification de sa validit�
	do {
		cout << "\nEntrez le nombre de rebonds au bout duquel vous voulez savoir la hauteur de la balle: ";
		cin >> nb_bounces;
		if (!between_2_doubles(nb_bounces, 0)) {
			cout << "La nombre de rebonds entre n'est pas positif. Veuillez recommencer.";
		}
	} while (!between_2_doubles(nb_bounces, 0));

	// Entr�e du coefficient de rebond et v�rification de sa validit�
	do {
		cout << "\nEntrez le coefficient de rebond de la balle: ";
		cin >> bounce_coefficient;
		if (!between_2_doubles(bounce_coefficient, 0, 1)) {
			cout << "Le coefficient de rebond entre n'est situe entre 0 et 1. Veuillez recommencer.";
		}
	} while (!between_2_doubles(bounce_coefficient, 0, 1));

	return 0;
}