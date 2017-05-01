/* Create a two dimensional dynamic array.

	date 2017/05/02
	version 1
*/
#include <iostream>

using namespace std;

void TwoDimArray(int **A, int *m, int *n)
{
	A = new int *[*m];	// Create an array of address.
	for (int i = 0; i < *m; ++i){
		A[i] = new int [*n];	// Create an array of data.
	}

	for (int i = 0; i < *m; ++i){
		for (int j = 0; j < *n; ++j){
			A[i][j] = i + j + 1;
		}	
	}
	for (int i = 0; i < *m; ++i){
		for (int j = 0; j < *n; ++j){
			printf("%3d ", A[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int row, column;
	int *A;

	row = 10;
	column = 10;

	TwoDimArray(&A, &row, &column);

	return 0;
}