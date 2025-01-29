/*
 * Nom: Exercice 4 TP1
 * Description: Exercice 4 du TP1, estime la valeur de pi à l'aide de la méthode de Monte-Carlo.
 * Auteurs: Manuel Jarry & Meryem El Kamouni
 */

#include <iostream>
#include <random>

using namespace std;

int main() {

	const double realPi = 3.141593;
	const int numberOfDecimals = 6;

	double lowerCircleBound = -1.0;
	double upperCircleBound = 1.0;
	double x;
	double y;
	double estimatedPi;
	double relativeDeviation;
	double numberOfTotalPoints = 0;
	double numberOfInterceptedPoints = 0;
	double doubleRoundingMultiplier = pow(10.0, numberOfDecimals);
	time_t randomEngineSeed = time(0);
	default_random_engine random(randomEngineSeed);
	uniform_real_distribution<double> distribution(lowerCircleBound, upperCircleBound);

	cout << "\nEntrez le nombre total de points a generer: ";
	cin >> numberOfTotalPoints;

	for (int i = 0; i < numberOfTotalPoints; i++) {
		x = distribution(random);
		y = distribution(random);
		if (sqrt(pow(x, 2) + pow(y, 2)) < 1.0) {
			numberOfInterceptedPoints++;
		}
	}

	estimatedPi = (numberOfInterceptedPoints / numberOfTotalPoints) * 4.0;
	relativeDeviation = ((abs(estimatedPi - realPi)) / realPi) * 100.0;
	relativeDeviation = (ceil(relativeDeviation * doubleRoundingMultiplier)) / doubleRoundingMultiplier;

	cout << "\nLa valeur de pi estimee est: " << estimatedPi << endl;
	cout << "\nL'ecart relatif entre cette valeur et la valeur reelle de pi (6 decimales) est de " << relativeDeviation << "%" << endl;

	return 0;
}