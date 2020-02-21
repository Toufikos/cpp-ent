//============================================================================
// Name        : pointeurs3.cpp
// Author      : Toufik
// Version     :
// Copyright   : Your copyright notice
// Description : Pointeur 3 in C++
//============================================================================

#include <iostream>
using namespace std;

struct Exemple {int a, b; } e;
int i;
void* p;


int main() {
	cout << "Pointeurs3" << endl;

	/*int a = 14;
	void* p = &a;
	cout << *((int*)p);
	*/

	e.a = 45;
	e.b = 32;
	i = 12;

	p = &e;
	cout << "e.a = " << ((Exemple*)p)->a << endl;
	cout << "e.b = " << ((Exemple*)p)->b << endl;

	p = &i;
	cout << "e.a = " << ((Exemple*)p)->a << " ????\n" << endl;
	cout << "e.b = " << ((Exemple*)p)->b << " !!!!\n" << endl;




	return 0;
}
