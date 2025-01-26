
#include <iostream>
#include "functions.hpp"

using namespace std;

int main() {

	double loanAmount;
	double monthlyPayment;
	double annualRate;
	double monthlyRate;
	double totalInterestAmount = 0;
	double tempInterestAmount = 0;
	unsigned nbMonths = 0;

	do {
		cout << "\nEntrez la somme d'argent qui a ete pretee: ";
		cin >> loanAmount;
		if (!isBetween2Doubles(loanAmount, 0)) {
			cout << "La somme d'argent entree n'est pas positive. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(loanAmount, 0));

	do {
		cout << "\nEntrez le montant rembourse chaque mois: ";
		cin >> monthlyPayment;
		if (!isBetween2Doubles(monthlyPayment, 0)) {
			cout << "Le montant rembourse chaque mois entre n'est pas positif. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(monthlyPayment, 0));

	do {
		cout << "\nEntrez le taux d'interet annuel: ";
		cin >> annualRate;
		if (!isBetween2Doubles(annualRate, 0, 100)) {
			cout << "Le taux d'interet annuel entre n'est situe entre 0 et 100 %. Veuillez recommencer.";
		}
	} while (!isBetween2Doubles(annualRate, 0, 100));

	monthlyRate = annualRate / 12;

	while (loanAmount > 0) {
		tempInterestAmount = 0;
		tempInterestAmount = loanAmount * (monthlyRate / 100.0);
		loanAmount += tempInterestAmount;
		totalInterestAmount += tempInterestAmount;
		if (loanAmount - monthlyPayment >= 0) {
			loanAmount -= monthlyPayment;
		}
		else {
			loanAmount = 0;
		}
		nbMonths++;
	}

	cout << "\nNombre de mois: " << nbMonths << endl;
	cout << "\nSomme percue par le preteur: " << totalInterestAmount << endl;

	return 0;
}