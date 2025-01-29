/*
 * Nom: Fonctions Exo 2 & 3 TP1 (Source)
 * Description: Fichier source des fonctions du TP1,
 *				inclut une fonction indiquant si un certain nombre de format double se situe entre
 *				deux autres nombres de format double. Est utilisé dans les éxercices 2 et 3.
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include "functions.hpp"

bool isBetween2Doubles(double inputNumber, double minNumber, double maxNumber) {
	return inputNumber >= minNumber && inputNumber <= maxNumber;
}