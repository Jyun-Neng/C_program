#ifndef CREDIT_CARD_H 
#define CREDIT_CARD_H
#include <string> 
#include <iostream>

using namespace std;

class CreditCard 
{ 
public:
    CreditCard(const string &no, 
    	const string &nm, int lim, double bal = 0, bool enough_mon = true);

	string getNumber() const {return number;}
	string getName() const { return name; }
	double getBalance() const { return balance; } 
	int getLimit() const { return limit; }
	bool chargeIt(double price);	// Deposite the money.
	void makePayment(double payment); // Draw the money.
	bool IsEnough() const {return enough_mon; }
private:
	string number; 
	string name; 
	int limit; 
	double balance;
	bool enough_mon;
};
ostream& operator<<(ostream& out, const CreditCard &c);
#endif