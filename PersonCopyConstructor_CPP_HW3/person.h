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
};

#endif PERSON_H
