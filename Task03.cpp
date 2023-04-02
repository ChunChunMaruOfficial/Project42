//#include "main.h"
//
//int sum_column_matrix(int** matrix, int sizeY, int index) {
//	int sum = 0;
//	for (int i = 0; i < sizeY; i++)
//	{
//		sum += matrix[i][index];
//	}
//	return sum;
//}
//
//int check_same_value(int** matrix, int sizeX, int sizeY) {
//	int max_line = sum_column_matrix(matrix, sizeY, 0);
//	int index = 0;
//	int sum_first, sum_second;
//
//	for (int i = 0; i < sizeX - 1; i++)
//	{
//		int secons_line = sum_column_matrix(matrix, sizeY, i + 1);
//		int first_line = sum_column_matrix(matrix, sizeY, i);
//		if (first_line < secons_line && max_line < secons_line) {
//			max_line = secons_line;
//			index = i + 1;
//		}
//
//	}
//
//	return index;
//}
//
//int main() {
//		int sizeX = 10;
//		int sizeY = 10;
//
//	int** matrix = new int* [sizeY];
//
//	for (int i = 0; i < sizeY; i++)
//	{
//		matrix[i] = new int[sizeX];
//	}
//
//	rand_init(matrix, sizeX, sizeY, -2, 10);
//
//	cout << show(matrix, sizeX, sizeY) << endl;
//
//	cout << "column: " << check_same_value(matrix, sizeX, sizeY) << endl;
//
//	return 0;
//}
