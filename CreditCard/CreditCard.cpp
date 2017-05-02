#include "CreditCard.h"
using namespace std;

CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal, bool enough) 
{
	number = no; 
	name = nm; 
	balance = bal; 
	limit = lim;
	enough_mon = enough;
}

bool CreditCard::chargeIt(double price) 
{ 
	if (price + balance > double(limit))
		return false; 
	balance += price; 
	return true;
}

void CreditCard::makePayment(double payment) 
{ 
	if ((balance - payment) < 0)
	{
		enough_mon = false;
	}
	else
	{
		enough_mon = true;
		balance -= payment; 
	}
}

ostream& operator<<(ostream& out, const CreditCard &c) 
{
	if (c.IsEnough())
	{
		out << "Number = " << c.getNumber() << "\n" 
		<< "Name = " << c.getName() << "\n" 
		<< "Balance = " << c.getBalance() << "\n"
		<< "Limit = " << c.getLimit() << "\n";
	}
	else
	{
		out << "Number = " << c.getNumber() << "\n" 
		<< "Name = " << c.getName() << "\n" 
		<< "No enough money." << "\n"
		<< "Limit = " << c.getLimit() << "\n";	
	}
	return out;
  
}