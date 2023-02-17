#pragma once

#include <iostream>

class TransfertInterac
{
private:
	int _montantTransfert;

public:
	TransfertInterac();
	TransfertInterac(int _montantTransfert);

	int getMontantTransfert();

};

std::ostream& operator << (std::ostream& flux, const TransfertInterac& transfertinterac);

