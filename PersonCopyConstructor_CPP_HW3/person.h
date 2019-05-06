#pragma once
#ifndef PERSON_H
#define PERSON_H

class Person {
	char *name;//person name
	short yearOfBirth;
	char sex;
	char *phoneNumber;//" f.e. +7(123)456-78-90"
public:
	Person();
	Person(const Person &prs);
	~Person();
	//setters
	void setName(char *name);
	void setYearOfBirth(short year);
	void setSex(char sex);
	void setPhoneNumber(char* phoneNumber);
	//getters
	char* getName();
	short getYearOfBirth();
	char getSex();
	char* getPhoneNumber();
	Person getSetPerson(Person prsn);
};

#endif PERSON_H
