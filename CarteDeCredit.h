#pragma once

#include <iostream>

class CarteDeCredit
{
private:
	int _soldeCarte;

public:

	CarteDeCredit();
	CarteDeCredit(const int _soldeCarte);

	int getSoldeCarte() const;

	void operator = (const int montant);
};

std::ostream& operator << (std::ostream& flux, const CarteDeCredit& cartedecredit);