#include "TransfertInterac.h"

using namespace std;

TransfertInterac::TransfertInterac() : _montantTransfert(0)
{

}

TransfertInterac::TransfertInterac(int _montantTransfert) : _montantTransfert(0)
{

}

int TransfertInterac::getMontantTransfert()
{
	return _montantTransfert;
}

std::ostream& operator<<(std::ostream& flux, const TransfertInterac& transfertinterac)
{
	flux << transfertinterac.getMontantTransfert();
	return flux;
}
