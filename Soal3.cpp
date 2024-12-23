#include <iostream>
using namespace std;

int Nilai[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 2, 27, 98, 34, 5, 7, 45, 76, 56, 100 };

void main() {
	int length = sizeof(Nilai) / sizeof(Nilai[0]);
	cout << "Jumlah dari panjang Array adalah : " << length;
	cout << "\n";
}