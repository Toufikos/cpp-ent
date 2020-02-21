//============================================================================
// Name        : exo2ParamNString.cpp
// Author      : Toufik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


string cal(int n, string str){

	string res = "";
		   for (int i(0); i < str.size(); ++i)
		        {
		            if (i%n == 0 && i != 0){
		                res = res +'\n' +str.at(i);
		            }else{
		                res += str.at(i);
		            }

		        }

		        return res;
}

int main() {

	cout << cal(5, "AAAAAAAAAAAAAAAAAAA");


	return 0;
}
