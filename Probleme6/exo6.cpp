#include <iostream>
#include <string> 
#include <fstream> 
using namespace std;
struct Word {
	string name, nature, definition;
};

int main() {
	ifstream fichier("dictionnaire.txt");
	if (!fichier.is_open()) {
		cerr << "Erreur: Impossible d'ouvrir le fichier dictionnaire.txt" << endl;
		return 1;
	}
	int largestNumberOfCar = 0, largestIndex = 0;
	Word words[4];
	string line;
	int i = 0;

	while (getline(fichier, line)) {
		size_t posName = ligne.find('\t');
		size_t posNature = ligne.find('\t', posName + 1);

		mots[i].name = ligne.substr(0, posName);
		mots[i].nature = ligne.substr(posName + 1, posNature - posName - 1);
		mots[i].definition = ligne.substr(posNature + 1);
		i++;
		;
		for (int j = 0; j < i; j++) {

			if (words[j].name.size() > largestNumberOfCar) {
				plusGrandNbrCara = words[j].nom.size();
				indicePlusGrandNbrCara = j;
			}
		}
		int firstSplit = mots[indicePlusGrandNbrCara].nature.find(' ');
		int secondSplit = mots[indicePlusGrandNbrCara].nature.find(' ', firstSplit + 1);

		cout << mots[largestIndex].name << ' ('
			<< mots[largestIndex].nature.substr(0, secondSplit) << '/'
			<< mots[largestIndex].nature.substr(secondSplit + 1) << ') : '
			<< mots[largestIndex].definition;
		return 0;
	}
}


