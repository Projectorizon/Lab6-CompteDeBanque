#include "CarteDeCredit.h"

using namespace std;

CarteDeCredit::CarteDeCredit() : _soldeCarte(0)
{

}

CarteDeCredit::CarteDeCredit(int _soldeCarte) : _soldeCarte(0)
{

}

int CarteDeCredit::getSoldeCarte() const
{
	return _soldeCarte;
}

void CarteDeCredit::operator = (const int montant)
{
	_soldeCarte = montant;
}

std::ostream& operator<<(std::ostream& flux, const CarteDeCredit& cartedecredit)
{
	flux << cartedecredit.getSoldeCarte();
	return flux;
}
