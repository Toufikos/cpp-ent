/*
 * MyResource.h
 *
 *  Created on: 25 févr. 2020
 *      Author: Toufik
 */

#ifndef MYRESOURCE_H_
#define MYRESOURCE_H_


#include <string>

class MyResource{
	std::string name;
public:
	MyResource( const std::string & name);
	virtual ~MyResource();

	void doSomething() const;


};

//typedef MySharedPtr<MyResource> MyResourcePtr;
typedef MyResource * MyResourcePtr;

#endif /* MYRESOURCE_H_ */
