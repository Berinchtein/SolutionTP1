/*
 * Nom: À REMPLIR
 * Description: À REMPLIR
 * Auteurs: À REMPLIR
 */

#include <iostream>
#include <random>
#include <cmath>

using namespace std;

int main() {

    double lower_bound = -1;
    double upper_bound = 1;
    uniform_real_distribution<double> unif(lower_bound, upper_bound);
    default_random_engine re;

    int precision;
    int numberOfPoints = 0;
    double x, y;
    double piEstimated;

    cout << "Combien de points voulez vous generer";
    cin >> precision;

    for (int i = 0; i < precision; i++) {
        x = unif(re);
        y = unif(re);
        if (sqrt(pow(x, 2) + pow(y, 2)) < 1) numberOfPoints++;
    }
    piEstimated = (static_cast<double>(numberOfPoints) / precision) * 4;
    cout << "La valeur de pi estimee est : " << piEstimated << endl;

    return 0;

}
