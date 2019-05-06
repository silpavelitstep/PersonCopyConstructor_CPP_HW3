#pragma once
#ifndef PERSON_H
#define PERSON_H

class Person {
	char *name;//person name
	short yearOfBirth;
	char sex;
	long phoneNumber;
public:
	Person(const char*,short,char,long);
	//Person(const Person &prs);
	~Person();
	//setters
	void setName(const char *name);
	void setYearOfBirth(short year);
	void setSex(char sex);
	void setPhoneNumber(long phoneNumber);
	//getters
	char* getName();
	short getYearOfBirth();
	char getSex();
	long getPhoneNumber();
	Person getSetPerson(Person prsn);
};

#endif PERSON_H
