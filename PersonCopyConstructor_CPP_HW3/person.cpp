#pragma warning(disable: 4996)
#include "person.h"
#include <iostream>
using namespace std;
//constructors and destructor
Person::Person(const char* first, short year, char sex, long phone) {
	name = new Name(first);
	yearOfBirth = year;
	this->sex = sex;
	phoneNumber = phone;
	cout << "<constructor> Person() " << (int)this << endl;
}

Person::Person(const Person &prs) {
	cout << "<copy constructor> Person() " << (int)this << endl;
	name = new Name(prs.name->getFirst());
}

Person::~Person() {
	cout << "<destructor> Person() " << (int)this << endl;
	delete name;
}
//setters
void Person::setName(const char *first) {
	name->setFirst(first);
}
void Person::setYearOfBirth(short year) {
	this->yearOfBirth = year;
}
void Person::setSex(char sex) {
	this->sex = sex;
}
void Person::setPhoneNumber(long phoneNumber) {
	this->phoneNumber = phoneNumber;
}
//getters
const char* Person::getName() {
	return name->getFirst();
}
short Person::getYearOfBirth() {
	return yearOfBirth;
}
char Person::getSex() {
	return sex;
}
long Person::getPhoneNumber() {
	return phoneNumber;
}
Person Person::func(Person prsn) {
	cout << "\n<first line in function>\n\n";
	cout << "name: " << prsn.getName() << endl;
	cout << "pointer to Name: " << (int)prsn.getPointerToName();
	cout << endl;
	prsn.setName("Genry");
	cout << "<last line in function, next return Person>\n\n";
	return prsn;
}
Name *Person::getPointerToName() {
	return name;
}
// Name Name
Name::Name(const char* first) {
	setFirst(first);
	cout << "<constructor> Name() "<<(int)this<<endl;
}
Name::~Name() {
	delete[] first;
	cout << "<destructor> Name() " << (int)this << endl;
}
const char* Name::getFirst() {
	return first;
}
void Name::setFirst(const char* first) {
	this->first = new char[strlen(first) + 1];
	strcpy(this->first, first);
}

