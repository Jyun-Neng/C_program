#include <vector> 
#include "CreditCard.h"

#define JOHN 0
#define JASON 1
#define GEORGE 2

using namespace std; 

void testCard() {
	vector<CreditCard*> wallet(10);
	bool over_limit;

	wallet.at(JOHN) = new CreditCard("5391 0375 9387 5309", "John", 2500);
	wallet.at(JASON) = new CreditCard("3485 0399 3395 1954", "Jason", 3500);
	wallet.at(GEORGE) = new CreditCard("6011 4902 3294 2994", "George", 5000);

	// Charging test.
	over_limit = wallet.at(JOHN) -> chargeIt(3500);
	if (!over_limit)
	{
		printf("Over charge!\n\n");
	}
	else
	{
		cout << *wallet.at(JOHN) << endl;
	}
	over_limit = wallet.at(JASON) -> chargeIt(650);
	if (!over_limit)
	{
		printf("Over charge!\n\n");
	}
	else
	{
		cout << *wallet.at(JASON) << endl;
	}
	over_limit = wallet.at(GEORGE) -> chargeIt(472);
	if (!over_limit)
	{
		printf("Over charge!\n\n");
	}
	else
	{
		cout << *wallet.at(GEORGE) << endl;
	}

	// Payment test.
	cout << "Card payments: \n";
	wallet.at(JOHN) -> makePayment(450);
	cout << *wallet.at(JOHN) << endl;
	delete wallet.at(JOHN);
	wallet.at(JASON) -> makePayment(450);
	cout << *wallet.at(JASON) << endl;
	delete wallet.at(JASON);
	wallet.at(GEORGE) -> makePayment(450);
	cout << *wallet.at(GEORGE) << endl;
	delete wallet.at(GEORGE);
}

int main(int argc, char const *argv[])
{
	testCard();
	return EXIT_SUCCESS;
}