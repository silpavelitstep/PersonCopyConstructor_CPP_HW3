#include "person.h"
#include <iostream>
using namespace std;
//constructors and destructor
Person::Person() {
	cout << "Person()   " << (int)this << endl;;
}
Person::Person(const Person &prs) {
	cout << "__copy__ Person()\n";
}
Person::~Person() {
	cout << "~~~~~Person()~~~  " << (int)this << endl;
}
//setters
void Person::setName(char *name) {
	this->name = name;
}
void Person::setYearOfBirth(short year) {
	this->yearOfBirth = year;
}
void Person::setSex(char sex) {
	this->sex = sex;
}
void Person::setPhoneNumber(char* phoneNumber) {
	this->phoneNumber = phoneNumber;
}
//getters
char* Person::getName() {
	return name;
}
short Person::getYearOfBirth() {
	return yearOfBirth;
}
char Person::getSex() {
	return sex;
}
char* Person::getPhoneNumber() {
	return phoneNumber;
}
Person Person::getSetPerson(Person prsn) {
	return prsn;
}


