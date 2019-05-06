#pragma warning(disable: 4996)
#include "person.h"
#include <iostream>
using namespace std;
//constructors and destructor
Person::Person(const char* name, short year, char sex, long phone) {
	this->name=new char[strlen(name)+1];
	strcpy(this->name, name);
	yearOfBirth = year;
	this->sex = sex;
	phoneNumber = phone;
	cout << "Person()   " << (int)this << endl;
}
/*
Person::Person(const Person &prs) {
	cout << "__copy__ Person()   " << (int)this << endl;
	//this->name = new char[strlen(name) + 1];
	//strcpy(this->name, name);
}
*/
Person::~Person() {
	cout << "~~~~~Person()~~~  " << (int)this << endl;
}
//setters
void Person::setName(const char *name) {
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
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
char* Person::getName() {
	return name;
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
Person Person::getSetPerson(Person prsn) {
	cout << "<first line in function, next return Person>\n";
	cout << "name: " << prsn.getName() << '\t' << (int)prsn.getName() << endl;
	//если закоментить конструктор копирования то name копии будет указывать
	// на ту же область памяти что и name объекта в main
	prsn.setName("Henry");
	return prsn;
}


