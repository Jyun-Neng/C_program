/* Using Euclidean algorithm to find the greatest common divisor. 

   Date: 2017/05/01
   version 1 
*/
#include <iostream>

using namespace std;

int gcd(int *a, int *b)
{
	int big_num, small_num;
	int q, r;

	big_num = (*a > *b) ? *a : *b;
	small_num = (big_num == *a) ? *b : *a;

	// Euclidean algorithm
	while(small_num > 0){
		r = big_num % small_num;
		big_num = small_num;
		small_num = r;
	}

	return big_num;
}

int main(int argc, char const *argv[])
{
	int a = 103, b = 209;
	int gcd_num;
	gcd_num = gcd(&a, &b);
	printf("%d\n", gcd_num);
	return 0;
}