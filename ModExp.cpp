/*	Modular Exponentiation.

	date: 2017/05/17
*/
#include <iostream>

using namespace std;

int ModExponent(int &exp, int &mod, int &base)
{
	int r, q = exp;
	int x = 1;
	int power = base;

	while(q != 0)
	{
		r = q % 2;	// base 2 expansion.
		q  = q / 2;

		// Modular Exponentiation algorithm.
		if (r == 1)	
		{
			x = (x * power) % mod;
		}
		power = (power * power) % mod;
	}
	return x;
}

int main(int argc, char const *argv[])
{
	int result, exp, mod, base;

	base = 3;
	exp = 644;
	mod = 645;
	
	result = ModExponent(exp, mod, base);

	printf("%d^%d mod %d is %d\n", base, exp, mod, result);

	return 0;
}