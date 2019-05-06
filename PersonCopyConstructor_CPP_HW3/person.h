#pragma once
#ifndef PERSON_H
#define PERSON_H
//вспомогательный класс, только для демонcтрации работы
//конструктора копии
class Name {
	char *first;
	char *second;
public:
	Name(const char* first, const char* second);
	~Name();
};
//main work class
class Person {
	Name *name;//person name
	short yearOfBirth;
	char sex;
	long phoneNumber;
public:
	Person(const char*, const char*,short,char,long);
	//Person(const Person &prs);
	~Person();
	//setters
	void setName(Name);
	void setYearOfBirth(short year);
	void setSex(char sex);
	void setPhoneNumber(long phoneNumber);
	//getters
	Name getName();
	short getYearOfBirth();
	char getSex();
	long getPhoneNumber();
	Person getSetPerson(Person prsn);
};

#endif PERSON_H
