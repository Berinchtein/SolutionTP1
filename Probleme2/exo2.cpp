
#include <iostream>
#include "fonctions.hpp"

using namespace std;

int main() {

	double loan_amount;
	double monthly_payment;
	double annual_rate;
	double monthly_rate;
	double total_interest_amount = 0;
	double temp_interest_amount = 0;
	unsigned nb_months = 0;

	do {
		cout << "\nEntrez la somme d'argent qui a ete pretee: ";
		cin >> loan_amount;
		if (!between_2_doubles(loan_amount, 0)) {
			cout << "La somme d'argent entree n'est pas positive. Veuillez recommencer.";
		}
	} while (!between_2_doubles(loan_amount, 0));

	do {
		cout << "\nEntrez le montant rembourse chaque mois: ";
		cin >> monthly_payment;
		if (!between_2_doubles(monthly_payment, 0)) {
			cout << "Le montant rembourse chaque mois entre n'est pas positif. Veuillez recommencer.";
		}
	} while (!between_2_doubles(monthly_payment, 0));

	do {
		cout << "\nEntrez le taux d'interet annuel: ";
		cin >> annual_rate;
		if (!between_2_doubles(annual_rate, 0, 100)) {
			cout << "Le taux d'interet annuel entre n'est situe entre 0 et 100 %. Veuillez recommencer.";
		}
	} while (!between_2_doubles(annual_rate, 0, 100));

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

	cout << "\nNombre de mois: " << nb_months << endl;
	cout << "\nSomme percue par le preteur: " << total_interest_amount << endl;

	return 0;
}