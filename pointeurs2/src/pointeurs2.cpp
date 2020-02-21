//============================================================================
// Name        : pointeurs2.cpp
// Author      : carl.seleborg.free.fr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void AfficherTableau(int* t){

	while(*t++) cout << *t << " ";
	cout << endl;

}

int main() {
	cout << "Pointeurs2" << endl; // prints Pointeurs2

	int tableau1[10] = {5, 3, 9, 11, 4, 132, 45, 2, 89, 0};
	int tableau2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -0};
	int *t1 = tableau1, *t2 = tableau2;

	AfficherTableau(tableau2);

	while(*t2++ = *t1++);

	AfficherTableau(tableau2);



	return 0;
}
