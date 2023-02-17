#include "CompteBanque.h"

#include <string>

using namespace std;

CompteBanque::CompteBanque()
{

}

CompteBanque::CompteBanque(const int _solde) : _solde(0)
{

}

int CompteBanque::getSolde(int _solde) const
{
	return _solde;
}

CompteBanque& CompteBanque::operator +=(const Cheque& cheque)
{
	_solde += cheque.getMontantCheque();
	return *this;
}

CompteBanque& CompteBanque::operator+=(const TransfertInterac& transfertinterac)
{
	_solde += transfertinterac.getMontantTransfert();
	return *this;
}

CompteBanque& CompteBanque::operator+=(const int versement)
{
	_solde += versement;
	return *this;
}

CompteBanque& CompteBanque::operator-=(const Cheque& cheque)
{
	_solde -= cheque.getMontantCheque();
	return *this;
}

CompteBanque& CompteBanque::operator -= (const CarteDeCredit& cartedecredit)
{
	_solde -= cartedecredit.getSoldeCarte();
	return *this;
}

CompteBanque& CompteBanque::operator-=(const TransfertInterac& transfertinterac)
{
	_solde -= transfertinterac.getMontantTransfert();
	return *this;
}

friend std::ostream& operator<<(std::ostream& flux, const CompteBanque& comptebanque)
{
	flux << comptebanque._solde;
	return flux;
}

friend std::istream& operator>>(std::istream& flux, const CompteBanque& comptebanque)
{
	flux >> comptebanque._solde;
	return flux;
}

CompteBanque operator+(const CompteBanque& comptebanque)
{
	int _solde;
	int somme = _solde + _solde;
	return somme;
}

bool operator>=(const CompteBanque& comptebanque, const Cheque& cheque)
{
	return comptebanque.getSolde() >= cheque.getMontantCheque();
}
