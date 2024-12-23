#include <iostream>
using namespace std;

int matriksA[3][3];
int matriksB[3][3];
int Hasil[3][3];

void main() {
	cout << "Masukkan matriks A (3x3): \n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Matriks A [" << i << "," << j << "]: ";
			cin >> matriksA[i][j];
		}
		cout << "\n";
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriksA[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n" << "Masukkan matriks B (3x3): \n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Matriks B [" << i << "," << j << "]: ";
			cin >> matriksB[i][j];
		}
		cout << "\n";
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriksB[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Hasil[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				Hasil[i][j] += (matriksA[i][k] * matriksB[k][j]);
			}
		}
	}
	cout << "\n" << "Hasil dari perkalian matriks A dan B 3x3 yaitu: \n";
	cout << "===============================================\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriksA[i][j] << " ";
		}

		if (i == 1) {
			cout << " x ";
		} else {
			cout << "   ";
		}

		for (int j = 0; j < 3; j++) {
			cout << matriksB[i][j] << " ";
		}

		if (i == 1) {
			cout << " = ";
		} else {
			cout << "   ";
		}

		for (int j = 0; j < 3; j++) {
			cout << Hasil[i][j] << " ";
		}
		cout << "\n";
	}
}