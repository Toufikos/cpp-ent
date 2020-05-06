//============================================================================
// Name        : carnetadresse.cpp
// Author      : carl.seleborg.free.fr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Carnet d'adresses" << endl;

	char buffer[30];

	cout << "Entrez une phrase : ";
	cin.get(buffer, 30);
	cin.sync();
	cout << "Vous avez écrits : " << buffer << endl;
	return 0;
}
