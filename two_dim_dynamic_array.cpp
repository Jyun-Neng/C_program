/* Create a two dimensional dynamic array.
   Using vector to create a two dimensional dynamic array.

	date 2017/05/02
	version 2

*/
#include <iostream>
#include <vector>

using namespace std;

void TwoDimArray_vector(int &m, int &n)
{
	vector<int> row;
	row.assign(m, 0);	// Create a 1-D dynamic array.	
	vector< vector<int> > array_2D;
	array_2D.assign(n, row);	// Create a 2-D dynamic array.
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", array_2D.at(j).at(i));	// columnXrow not rowXcolumn. i.e .at(column).at(row)
		}
		printf("\n");
	}

}

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
	column = 5;

	TwoDimArray(&A, &row, &column);
	TwoDimArray_vector(row, column);

	return 0;
}