
#include <iostream>
#include "fonctions.hpp"

using namespace std;

int main() {

	// D�claration des variables
	float loan_amount;
	float monthly_payment;
	float annual_rate;
	float monthly_rate;
	float total_interest_amount = 0;
	float temp_interest_amount = 0;
	unsigned nb_months = 0;

	// Entr�e de la somme d'argent et v�rification de sa validit�
	do {
		cout << "\nEntrez la somme d'argent qui a ete pretee: ";
		cin >> loan_amount;
		if (between_2_floats(loan_amount, 0)) {
		//if (loan_amount < 0) {
			cout << "La somme d'argent entree n'est pas positive. Veuillez recommencer.";
		}
	} while (loan_amount < 0);

	// Entr�e du montant rembours� chaque mois et v�rification de sa validit�
	do {
		cout << "\nEntrez le montant rembourse chaque mois: ";
		cin >> monthly_payment;
		if (monthly_payment < 0) {
			cout << "Le montant rembourse chaque mois entre n'est pas positif. Veuillez recommencer.";
		}
	} while (monthly_payment < 0);

	// Entr�e du taux d'int�r�t annuel et v�rification de sa validit�
	do {
		cout << "\nEntrez le taux d'interet annuel: ";
		cin >> annual_rate;
		if (annual_rate < 0 || annual_rate > 100) {
			cout << "Le taux d'interet annuel entre n'est situe entre 0 et 100 %. Veuillez recommencer.";
		}
	} while (annual_rate < 0 || annual_rate > 100);

	//Calcul du nombre de mois requis pour payer le pr�t et du montant amass� par le pr�teur
	monthly_rate = annual_rate / 12;

	while (loan_amount > 0) {
		temp_interest_amount = 0;
		temp_interest_amount = loan_amount * (monthly_rate / 100.0);
		loan_amount += temp_interest_amount;
		total_interest_amount += temp_interest_amount;
		if (loan_amount - monthly_payment >= 0) {
			loan_amount -= monthly_payment;
		}
		else {
			loan_amount = 0;
		}
		nb_months++;
	}

	cout << "Nombre de mois: " << nb_months << endl;

	cout << "Somme percue par le preteur: " << total_interest_amount << endl;

	return 0;
}