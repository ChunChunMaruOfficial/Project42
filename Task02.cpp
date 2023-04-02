#include "main.h"

int sum_line_matrix(int** matrix, int sizeX, int index) {
	int sum = 0;
	for (int i = 0; i < sizeX; i++)
	{
		sum += matrix[index][i];
	}
	return sum;
}

int check_same_value(int** matrix, int sizeX, int sizeY) {
	int max_line = sum_line_matrix(matrix, sizeX, 0);
	int index = 0;
	int sum_first, sum_second;




	for (int i = 0; i < sizeY - 1; i++)
	{
		int secons_line = sum_line_matrix(matrix, sizeX, i + 1);
		int first_line = sum_line_matrix(matrix, sizeX, i);
		if (first_line < secons_line && max_line < secons_line) {
			max_line = secons_line;
			index = i + 1;
		}
	}
	return index;
}

int main() {
	int sizeX = 10;
	int sizeY = 10;

	int** matrix = new int* [sizeY];

	for (int i = 0; i < sizeY; i++)
	{
		matrix[i] = new int[sizeX];
	}

	rand_init(matrix, sizeX, sizeY, -2, 10);

	cout << show(matrix, sizeX, sizeY) << endl;

	cout << "line: " << check_same_value(matrix, sizeX, sizeY) << endl;

	return 0;
}
