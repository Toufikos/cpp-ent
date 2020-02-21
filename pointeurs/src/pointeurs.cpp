//============================================================================
// Name        : pointeurs.cpp
// Author      : carl.seleborg.free
// Version     :
// Copyright   : Your copyright notice
// Description : Pointeurs in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Pointeurs" << endl; // prints Ent 1

	// Les pointeurs
			int a = 5, b = 7, c = 41;
			int* p;

			cout << "Taille int : " << sizeof(int) << "\n" << endl;

			p = &a;
			cout << "p pointe sur a " << *p << endl;

			p = &b;
			cout << "puis sur b : " << *p << endl;

			p = &c;
			cout << "et enfin sur c : " << *p << endl;

cout << "*********************************************************"<< endl;

	//Relation entre tableaux et pointeurs
	double tab1[10];
	tab1[5] =23;

	cout << "adresse de tab1[0] = " << tab1[0] << endl;
	cout << "tab1[5] vaut " << tab1[5] << " ou encore " << *(tab1 + 5) << endl;
	// *(tab1 + 5) siginfie la valeur contenue à l'adresse dans tab1 plus un décalage de 5fois le nombre d'octects occupés par un int

cout << "*********************************************************"<< endl;

  // Arithmétique des pointeurs
	int o = 20, *p1 = &a;

	cout << "a est un int, de taille " << sizeof(a) << " octects\n";
	cout << "adresse de a " << p << endl;
	cout << "adresse suivante : " << ++p << endl;


	return 0;
}
