//============================================================================
// Name        : recursive.cpp
// Author      : carl.selebord.free.fr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Fact(int n){

	if(n == 1){

		return 1;
	}else{

		return (n*Fact(n-1));
	}
}

int SommeChiffres(int n ){

	if(n == 0) return 0; // Au cas où n == 0

	int total = 0;

	do{

		total += n%10; // Quel est le dernier chiffre ?
		n /= 10; // Et on le supprime

	}while(n !=0);


	if(total <= 9){

		return total; // C'est un chiffre
	}else{

		return SommeChiffres(total); // C'est un nombre, et on recommence
	}

}

int main() {
	cout << "Récursive" << endl; // prints Ent 1

	cout << Fact(0);

	cout << "***************************************************************" << endl;

	int n = 0;
	cout << "Entrez un nombre à tester";
	cin >> n;

	int resultat = SommeChiffres(n);

	if((resultat == 0) || (resultat == 3) || (resultat == 6) || (resultat ==9 )){

		cout << n << "est un multiple de 3! \n";
	}

	/* -Une fonction peut s'appeler elle-même
	 * -Dans une récursivité, il faut une condition d'arrêt
	 */



	return 0;
}
