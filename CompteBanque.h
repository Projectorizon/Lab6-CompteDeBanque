#pragma once

#include "CarteDeCredit.h"
#include "Cheque.h"
#include "TransfertInterac.h"

#include <iostream>

class CompteBanque
{
private: 
	int _solde;

public:

	CompteBanque();
	CompteBanque(int _solde);

	int getSolde(int _solde) const;

	CompteBanque& operator += (const Cheque& cheque);
	CompteBanque& operator += (const TransfertInterac& transfertinterac);
	CompteBanque& operator += (const int versement);
	CompteBanque& operator -= (const Cheque& cheque);
	CompteBanque& operator -= (const CarteDeCredit& cartedecredit);
	CompteBanque& operator -= (const TransfertInterac& transfertinterac);

	friend std::ostream& operator << (std::ostream& flux, const CompteBanque& comptebanque);
	friend std::istream& operator >> (std::istream& flux, const CompteBanque& comptebanque);
};

CompteBanque operator + (const CompteBanque& comptebanque1, const CompteBanque& comptebanque2);
bool operator >= (const CompteBanque& comptebanque, const Cheque& cheque);
bool operator > (const CompteBanque& comptebanque, const CarteDeCredit& cartedecredit);
bool operator < (const CompteBanque& compte1, const CompteBanque& compte2);