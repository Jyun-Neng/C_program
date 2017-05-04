/* Using Euclidean algorithm to find the greatest common divisor. 
   Can also find the inverse of the congruence, using extended Euclidean algorithm.

   Date: 2017/05/04
   version 2
*/
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int big_num, small_num;
	int q, r;

	big_num = (a > b) ? a : b;
	small_num = (big_num == a) ? b : a;

	// Euclidean algorithm
	while(small_num > 0){
		r = big_num % small_num;
		big_num = small_num;
		small_num = r;
	}

	return big_num;
}

int ExtendedEuclideanAlgo(int a, int b)	// find the inverse of b mod a.
{
	int q, r, x, x1, x2, y, y1, y2, ori_a;

	x2 = 1;
	x1 = 0;
	y2 = 0;
	y1 = 1;
	ori_a = a;

	while(b > 0)
	{
		q = a / b;
		r = a % b;
		x = x2 - q * x1;
		y = y2 - q * y1;
		x2 = x1;
		x1 = x;
		y2 = y1;
		y1 = y;
		a = b;
		b = r;
	}
	y = y2;
	y = (y < 0) ? ori_a + y : y;	// let the inverse is between 0 to a. 
	return y;
}

int main(int argc, char const *argv[])
{
	int a = 1759, b = 550;
	int gcd_num, inverse;
	gcd_num = gcd(a, b);
	printf("%d\n", gcd_num);

	if (gcd_num == 1)	// find the inverse.
	{
		inverse = ExtendedEuclideanAlgo(a, b);
		
		printf("The inverse of %d mod %d is %d\n", b, a, inverse);
	}
	else
	{
		printf("No inverse.\n");
	}

	return 0;
}