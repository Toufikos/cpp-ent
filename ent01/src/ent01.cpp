//============================================================================
// Name        : ent01.cpp
// Author      : Toufik
// Version     :
// Copyright   :
// Description : Entrainement 01 in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main() {


	//Begin() class string
	string str("test string");

		for(string::iterator it=str.begin(); it!=str.end(); ++it)
			cout << *it;
		cout << '\n';

		cout << "*********************************************************"<< endl;




	return 0;
}
