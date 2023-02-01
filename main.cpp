#include <iostream>

#include "CompteBanque.h"
#include "Cheque.h"
#include "CarteDeCredit.h"
#include "TransfertInterac.h"

using namespace std;

int main()
{
	std::setlocale(LC_ALL, "en_US.UTF-8");

	CompteBanque compteDeAlain(5000);  // initialise un compte de banque avec un solde de 5000$
	Cheque chequeSalaire(2000);  // initialise un cheque dont le montant est de 2000$
	Cheque paiementHydro(175);  // initialise un cheque dont le montant est de 175$
	CarteDeCredit carteDeCredit(575);  // initialise une carte de credit dont le solde est de 575$
	TransfertInterac transfert(500);  // initialise un transfert interac de 500$ provenant du compte de Alain sans l'executer

	compteDeAlain += chequeSalaire;  // le solde du compte de banque doit être augmenter du montant du chèque 

	if (compteDeAlain >= paiementHydro) { // le solde du compte de banque est comparé à celui du chèque
		compteDeAlain -= paiementHydro; // le solde du compte de banque doit être réduit du montant du chèque
	}

	if (compteDeAlain > carteDeCredit) { // le solde du compte de banque est comparé à celui de la carte de crédit
		compteDeAlain -= carteDeCredit; // le compte de banque doit être déduit du solde de la carte de crédit 
		carteDeCredit = 0; // le solde de la carte de crédit est mis à zéro
	}

	compteDeAlain += 100; // le compte de banque doit être augmenter du montant recu 

	CompteBanque compteDeJosee(6500);
	compteDeJosee += transfert;
	compteDeAlain -= transfert;

	cout << "Compte de Alain: " << compteDeAlain.getSolde() << "$" << endl;
	cout << "Compte de Josée: " << compteDeJosee.getSolde() << "$" << endl;

	if (compteDeJosee < compteDeAlain) {
		cout << "Alain est le plus riche!" << endl;
	}
	else {
		cout << "Josée est plus riche!" << endl;
	}

	// finalement, Josée et Alain tombe en amour et décide d'unir leur compte de banque.
	CompteBanque compteConjoint = compteDeAlain + compteDeJosee;
	compteDeAlain = 0;
	compteDeJosee = 0;

	cout << "Le compte conjoint a un solde de " << compteConjoint.getSolde() << "$" << endl;

	return 0;
}