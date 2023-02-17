#include "Cheque.h"

using namespace std;

Cheque::Cheque() : _montantCheque(0)
{

}

Cheque::Cheque(int _montantCheque) : _montantCheque(0)
{
}

int Cheque::getMontantCheque(int _montantCheque) const
{
	return _montantCheque;
}

std::ostream& operator << (std::ostream& flux, const Cheque& cheque)
{
	flux << cheque.getMontantCheque();
	return flux;
}
