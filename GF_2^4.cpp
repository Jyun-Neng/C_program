/* 	Calculate the result in the GF(2^4). GF is denoted to Galois Field
	It can do addition, subtraction(the same to addition!).

	Date 2017/5/04
	vesion 1
*/

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

unsigned int Addition(unsigned int f1, unsigned int f2)
{
	unsigned int g;
	return g = f1 ^ f2;
}

int main(int argc, char const *argv[])
{
	string f1_binary, f2_binary, g_binary;
	unsigned int f1_dec, f2_dec, g_dec;

	f1_binary = "1001";
	f2_binary = "1111";

	f1_dec = bitset<4>(f1_binary).to_ulong();
	f2_dec = bitset<4>(f2_binary).to_ulong();
	g_dec = Addition(f1_dec, f2_dec);	// Do addition.
	g_binary = bitset<4>(g_dec).to_string();
	cout << f1_binary << " + " << f2_binary << " = " << g_binary << endl;

	return 0;
}





