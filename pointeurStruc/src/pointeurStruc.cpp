//============================================================================
// Name        : pointeurStruc.cpp
// Author      : carl.seleborg.free.fr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct ABC{

	int a, b, c;

};

void ChangerValeurs(ABC* p, int valeur){

	p->a = valeur - 1;
	p->b = valeur;
	p->c = valeur + 1;

}

int main() {
	cout << "Pointeurs Struc" << endl;

	ABC maStruct;
	ChangerValeurs(&maStruct, 10);
	cout << "Valeurs : a = " << maStruct.a;
	cout << " b = " << maStruct.b;
	cout << " c = " << maStruct.c << endl;

	return 0;
}
