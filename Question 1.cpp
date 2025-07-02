// Question 1

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <string>
#include <vector>

bool magicSquare();

using namespace std;

int main() {

	if (magicSquare()) {
		cout << "--------------------------";
		cout << endl;
		cout << "Your Values Form a Magic Square!\n\n";
	}
	else {
		cout << endl;
		cout << "Your Values Do Not Form a Magic Square :(\n\n";
	}
	
	system("pause");
	return 0;
}

bool magicSquare() {
	int index;
	int numbers[4][4];

	cout << "Please enter values: " << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0;j < 4;j++) {
			cin >> index;
			numbers[i][j] = index; 
		}
	}

	for (int i = 0; i < 4; i++) {
		int rowSum = 0;
		for (int j = 0; j < 4;j++) {
			rowSum += numbers[i][j];
		}

		int columnSum = 0;
		for (int j = 0; j < 4; j++) {
			columnSum += numbers[j][i];
		}

		if (rowSum != columnSum)
			return false;

		int leftDiagonalSum = numbers[0][0] + numbers[1][1] + numbers[2][2] + numbers[3][3];
		if (rowSum != leftDiagonalSum)
			return false;

		int rightDiagonalSum = numbers[0][3] + numbers[1][2] + numbers[2][1] + numbers[3][0];
		if (rowSum != rightDiagonalSum)
			return false;
	}

	cout << "Your answer is correct:" << endl;
	cout << "--------------------------";
	cout << endl;

	for (unsigned int i = 0; i < 4; i++) {
		for (unsigned int j = 0;j < 4; j++)
			cout << numbers[i][j] << "\t";
		cout << endl;
	}

	return true;
}

