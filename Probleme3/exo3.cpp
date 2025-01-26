
#include <iostream>
#include "../Probleme2/fonctions.hpp"

using namespace std;

int main() {

	// Déclaration des variables
	double initial_height;
	double pre_bounce_height;
	double post_bounce_height;
	double pre_bounce_speed;
	double post_bounce_speed;
	double nb_bounces;
	double bounce_coefficient;
	int bounce_iterator;
	const double g = 9.81;

	// Entrée de la hauteur initiale de la balle et vérification de sa validité
	do {
		cout << "\nEntrez la hauteur initiale de la balle (m): ";
		cin >> initial_height;
		if (!between_2_doubles(initial_height, 0)) {
			cout << "La hauteur entree n'est pas positive. Veuillez recommencer.";
		}
	} while (!between_2_doubles(initial_height, 0));

	// Entrée du nombre de rebonds de la balle et vérification de sa validité
	do {
		cout << "\nEntrez le nombre de rebonds au bout duquel vous voulez savoir la hauteur de la balle: ";
		cin >> nb_bounces;
		if (!between_2_doubles(nb_bounces, 0)) {
			cout << "La nombre de rebonds entre n'est pas positif. Veuillez recommencer.";
		}
	} while (!between_2_doubles(nb_bounces, 0));

	// Entrée du coefficient de rebond et vérification de sa validité
	do {
		cout << "\nEntrez le coefficient de rebond de la balle: ";
		cin >> bounce_coefficient;
		if (!between_2_doubles(bounce_coefficient, 0, 1)) {
			cout << "Le coefficient de rebond entre n'est situe entre 0 et 1. Veuillez recommencer.";
		}
	} while (!between_2_doubles(bounce_coefficient, 0, 1));

	// Calcul 
	pre_bounce_height = initial_height;
	for (bounce_iterator = 1; bounce_iterator <= nb_bounces; bounce_iterator++) {
		pre_bounce_speed = sqrt(2.0 * g * pre_bounce_height);
		cout << "Hauteur de la balle au rebond #" << bounce_iterator << ": ";
	}

	return 0;
}