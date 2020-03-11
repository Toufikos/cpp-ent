/*
 * MyResource.cpp
 *
 *  Created on: 25 févr. 2020
 *      Author: Toufik
 *
 */


#include <iostream>
#include "MyResource.h"

using namespace std;

MyResource::MyResource(const std::string & name) : name( name){

	cout << "Resource" << name << " created" << endl;
}

MyResource::~MyResource(){

	cout << "Resource " << name << " deleted" << endl;
}

void MyResource::doSomething() const{

	cout << " Resource " << name << " used" << endl;
}


