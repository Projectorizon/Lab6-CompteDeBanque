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

	compteDeAlain += chequeSalaire;  // le solde du compte de banque doit �tre augmenter du montant du ch�que 

	cout << "Paiement de " << paiementHydro << endl;
	if (compteDeAlain >= paiementHydro) { // le solde du compte de banque est compar� � celui du ch�que
		compteDeAlain -= paiementHydro; // le solde du compte de banque doit �tre r�duit du montant du ch�que
	}

	cout << "Paiement de " << carteDeCredit << endl;
	if (compteDeAlain > carteDeCredit) { // le solde du compte de banque est compar� � celui de la carte de cr�dit
		compteDeAlain -= carteDeCredit; // le compte de banque doit �tre d�duit du solde de la carte de cr�dit 
		carteDeCredit = 0; // le solde de la carte de cr�dit est mis � z�ro
	}

	compteDeAlain += 100; // le compte de banque doit �tre augmenter du montant recu 

	cout << transfert << endl;
	CompteBanque compteDeJosee(6500);
	compteDeJosee += transfert; // ajout le montant du transfert dans du solde du compte de Jos�e
	compteDeAlain -= transfert;  // enleve le montant du transfert du solde du compte de Alain

	cout << "Compte de Alain: " << compteDeAlain.getSolde() << "$" << endl;
	cout << "Compte de Jos�e: " << compteDeJosee.getSolde() << "$" << endl;

	if (compteDeJosee < compteDeAlain) {  // compare le solde du compte de Josee � celui de Alain
		cout << "Alain est le plus riche!" << endl;
	}
	else {
		cout << "Jos�e est plus riche!" << endl;
	}

	// finalement, Jos�e et Alain tombe en amour et d�cide d'unir leur compte de banque.
	CompteBanque compteConjoint = compteDeAlain + compteDeJosee;  // cr�e un nouveau compte de banque dont le solde est la somme du solde des comptes de Josee et Alain
	compteDeAlain = 0; // met le solde du compte de Alain � 0
	compteDeJosee = 0;  // met le solde du compte de Josee � 0

	cout << "Le compte conjoint a un solde de " << compteConjoint << "$" << endl;

	cout << "Entrer le solde du nouveau compte: " << endl;

	CompteBanque nouveauCompte;
	cin >> nouveauCompte;
	cout << "Solde du nouveau compte: " << nouveauCompte;

	return 0;
}
