//============================================================================
// Name        : MySmartPointer.cpp
// Author      : Toufik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MyResource.h"
using namespace std;

int main() {
	cout << "MySmartPointers" << endl; // prints MySmartPointers

	MyResourcePtr r = new MyResource( "truc" );
	r->doSomething();

	delete r;

	return 0;
}
