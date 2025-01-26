#include <iostream>
#include <string> 
#include <fstream> 
using namespace std::
struct Mot{
    string nom, nature, definition;
};

int main() {
    ifstream fichier('dictionnaire.txt');
    int plusGrandNbrCara=0, indicePlusGrandNbrCara=0;
    Mot mots[4];
    string ligne;  

    while (getline(fichier, ligne)) {
        posNom = ligne.find('\t'); 
        posNature = ligne.find('\t', posNom + 1); 

        mots[i].nom = ligne.substr(0, posNom);
        mots[i].nature = ligne.substr(posNom + 1, posNature - posNom -1);
        mots[i].definition = ligne.substr(posNature + 1);
        i++;
    ;
    for (int j=0; j<i; j++) {

        if (size(mot[j].nom > plusGrandNbr) {
            plusGrandNbrCara = size(mots[j].nom);
            indicePlusGrandNbrCara=j;
        }
    }
    int firstSplit = mots[indicePlusGrandNbrCara].nature.find(' ');
    int secondSplit= mots[indicePlusGrandNbrCara].nature.find(' ', firstSplit+1);

    cout << mots[indicePlusGrandNbrCara].nom << ' ('
        << mots[indicePlusGrandNbrCara].nature.substr(0, secondSplit)<< '/'
        << mots[indicePlusGrandNbrCara].nature.substr(secondSplit +1) << ') : '
        << mots[indicePlusGrandNbrCara].definition;
    return 0;
}

     
