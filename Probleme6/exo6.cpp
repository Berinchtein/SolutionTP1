/*
 * Nom: Exercice 6 TP1
 * Description: Exercice 6 du TP1, range dans un tableau de structures les informations d'un fichier ".txt"
				et affiche les détails du mot le plus grand. 
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include <fstream> 
#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main() {

	ifstream inputFile("dictionnaire.txt");

	if (inputFile.is_open()) {

		struct Word {
			string name, nature, definition;
		};

		int iterator_1 = 0;
		size_t largestWordSize = 0;
		size_t currentNameIndex;
		size_t currentNatureIndex;
		size_t largestWordIndex;
		string line;
		Word currentWord;
		//Utilise un vecteur au lieu d'un tableau pour éviter l'utilisation du nombre de mots connu
		vector<Word> words = {};

		while (getline(inputFile, line)) {

			currentNameIndex = line.find('\t');
			currentNatureIndex = line.find('\t', currentNameIndex + 1);

			currentWord.name = line.substr(0, currentNameIndex);
			currentWord.nature = line.substr(currentNameIndex + 1, currentNatureIndex - currentNameIndex - 1);
			currentWord.definition = line.substr(currentNatureIndex + 1);

			words.push_back(currentWord);

			if (currentWord.name.size() > largestWordSize) {
				largestWordSize = currentWord.name.size();
				largestWordIndex = iterator_1;
			}

			iterator_1++;
		}

		cout << "Mot le plus long du dictionnaire:" << endl;
		cout << words.at(largestWordIndex).name << " (" << words.at(largestWordIndex).nature << ") : " << words.at(largestWordIndex).definition << endl;
	}
	else {

		cerr << "Erreur: Impossible d'ouvrir le fichier dictionnaire.txt" << endl;
		return 1;
	}

	return 0;
}