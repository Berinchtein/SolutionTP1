
#include <iostream>

using namespace std;

int main() {

	// D�claration des variables
	float somme_argent;
	float montant_mensuel;
	float taux_annuel;
	float taux_mensuel;

	// Entr�e de la somme d'argent et v�rification de sa validit�
	do {
		cout << "\nEntrez la somme d'argent qui a ete pretee: ";
		cin >> somme_argent;
		if (somme_argent < 0) {
			cout << "La somme d'argent entree n'est pas positive. Veuillez recommencer.";
		}
	} while (somme_argent < 0);

	// Entr�e du montant rembours� chaque mois et v�rification de sa validit�
	do {
		cout << "\nEntrez le montant rembourse chaque mois: ";
		cin >> montant_mensuel;
		if (montant_mensuel < 0) {
			cout << "Le montant rembourse chaque mois entre n'est pas positif. Veuillez recommencer.";
		}
	} while (montant_mensuel < 0);

	// Entr�e du taux d'int�r�t annuel et v�rification de sa validit�
	do {
		cout << "\nEntrez le taux d'interet annuel: ";
		cin >> taux_annuel;
		if (taux_annuel < 0 || taux_annuel > 100) {
			cout << "Le taux d'interet annuel entre n'est situe entre 0 et 100 %. Veuillez recommencer.";
		}
	} while (taux_annuel < 0 || taux_annuel > 100);

	taux_mensuel = taux_annuel / 12;

	return 0;
}