#pragma once
#ifndef PERSON_H
#define PERSON_H
//вспомогательный класс, только для демонcтрации работы
//конструктора копии
class Name {
	char *first;
	
public:
	const char* getFirst();
	void setFirst(const char*);
	Name(const char* first);
	~Name();
};
//main work class
class Person {
	Name *name;//person name
	short yearOfBirth;
	char sex;
	long phoneNumber;
public:
	Person(const char*,short,char,long);
	Person(const Person &prs);
	~Person();
	//setters
	void setName(const char *name);
	void setYearOfBirth(short year);
	void setSex(char sex);
	void setPhoneNumber(long phoneNumber);
	//getters
	const char* getName();
	Name *getPointerToName();
	short getYearOfBirth();
	char getSex();
	long getPhoneNumber();
	Person func(Person prsn);
};

#endif PERSON_H
