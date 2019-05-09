#ifndef PERSON_H
#define PERSON_H 1

#include <iostream>
#include <cstdio>
#include <string>

struct person {
	std::string name;
	int age;

	person(std::string n, int a);
	~person();

	std::string return_name();
	int 		return_age();
	void 		printPerson();
};

#endif