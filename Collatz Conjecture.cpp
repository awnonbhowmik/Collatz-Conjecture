/* Coded by Awnon Bhowmik
Time Stamped: 09/07/2019 8:10 PM */

#include <iostream>
#include <iomanip>
using namespace std;

int N, steps = 0;

void Collatz(int N) {
	int m = N;
	while (m != 1) {
		(m % 2 == 0 ? m /= 2 : m = 3 * m + 1);
		steps++;
	}
	cout << setw(5) << N << "\t" << setw(4) << steps << endl;
	steps = 0;
}

int main() {
	int start;
	cout << "Enter Limit: ";
	cin >> start;
	while (true) {
		if (start < 1) {
			cerr << "Input must be greater than 0\n";
			system("PAUSE");
			system("CLS");

			cout << "Enter Limit: ";
			cin >> start;
		}
		else
			break;
	}

	system("CLS");

	cout << "Number\tStep\n";
	for (int i = 1; i <= start; i++) {
		Collatz(i);
	}
	return 0;
}