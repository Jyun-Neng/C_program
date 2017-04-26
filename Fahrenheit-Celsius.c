#include <stdio.h>

/* Fahrenheit to Celsius */

int Fahrenheit_to_Celsius(int fahr)
{
	int celsius;

	celsius = 5 * (fahr - 32) / 9;
	return celsius;
}

int main(int argc, char const *argv[])
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 220;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while(fahr <= upper){
		celsius = Fahrenheit_to_Celsius(fahr);
		printf("%10d%13d\n", fahr, celsius);
		fahr += step;
	}
	fahr = 212;
	celsius = Fahrenheit_to_Celsius(fahr);
	printf("%10d%13d\n", fahr, celsius);

	return 0;
}
