#include <iostream>
#include <string>

using namespace std;

string show(int** matrix, int sizeX, int sizeY) {
	string msg = "";

	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			msg += to_string(matrix[i][j]) + "\t";
		}
		msg += "\n";
	}
	return msg;
}

void rand_init(int** matrix, int sizeX, int sizeY, int min, int max) {

	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}