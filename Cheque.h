#pragma once

#include <ostream>

class Cheque
{
private:
	int _montantCheque;

public:
	Cheque();
	Cheque(int _montantCheque);

	int getMontantCheque(int _montantCheque) const;
};

std::ostream& operator << (std::ostream& flux, const Cheque& cheque);