
#include <iostream>

using namespace std;

int main() {

	const int array_length = 10;
	int initial_array[array_length] = { 7, 4, 7, 8, 4, 6, 3, 9, 6, 11 };
	int arranged_array[array_length] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iterator_1 = 0;
	int iterator_2 = 0;

	cout << "Tableau initial: {";
	for (iterator_1 = 0; iterator_1 < array_length - 1; iterator_1++) {
		cout << " " << initial_array[iterator_1] << ",";
	}
	cout << " " << initial_array[array_length - 1] << " }" << endl;

	// Unoptimized loops
	for (iterator_1 = 0; iterator_1 < array_length; iterator_1++) {
		if (initial_array[iterator_1] % 2 == 0) {
			arranged_array[iterator_2] = initial_array[iterator_1];
			iterator_2 += 1;
		}
	}
	for (iterator_1 = 0; iterator_1 < array_length; iterator_1++) {
		if (initial_array[iterator_1] % 2 == 1) {
			arranged_array[iterator_2] = initial_array[iterator_1];
			iterator_2 += 1;
		}
	}

	cout << "Tableau arrange: {";
	for (iterator_1 = 0; iterator_1 < array_length - 1; iterator_1++) {
		cout << " " << arranged_array[iterator_1] << ",";
	}
	cout << " " << arranged_array[array_length - 1] << " }" << endl;

	return 0;
}