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

		words[i].name = ligne.substr(0, posName);
		words[i].nature = ligne.substr(posName + 1, posNature - posName - 1);
		words[i].definition = ligne.substr(posNature + 1);
		i++;
		;
		for (int j = 0; j < i; j++) {

			if (words[j].name.size() > largestNumberOfCar) {
				largestNumberOfCar = words[j].nom.size();
				largestIndex = j;
			}
		}
		int firstSplit = words[largestIndex].nature.find(' ');
		int secondSplit = words[largestIndex].nature.find(' ', firstSplit + 1);

		cout << words[largestIndex].name << ' ('
			<< words[largestIndex].nature.substr(0, secondSplit) << '/'
			<< words[largestIndex].nature.substr(secondSplit + 1) << ') : '
			<< words[largestIndex].definition;
		return 0;
	}
}


