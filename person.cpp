#include <iostream>
#include <string>
#include <cstdio>

#include "person.h"

person::person(std::string n, int a){
	std::string name = n;
	int age = a;
}
person::~person()
{}

std::string person::return_name(){
	return name;
}

int person::return_age(){
	return age;
}

void person::printPerson(){
	std::cout << name << "(" << age << " anos)" << std::endl;
}