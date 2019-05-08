#include <iostream>
using namespace std;
#include "person.h"
#include "test_set_get.h"
void Person_test::exeAllTest() {
	cout << "\n\nExecute all tests: \n";
	//next testing
	test();
	
	//end testing
	
	cout << "Testing end, resault: ";
	if (exist&&true_back_value)
		cout << "PASS\n";
	else
		cout << "FAIL\n";
}
void Person_test::test() {
	Person *p = new Person("A", 1, 'c', 8);
	//check exist getters
	exist = !strcmp(p->getName(), "A") && p->getYearOfBirth() == 1
		&& p->getSex() == 'c' && p->getPhoneNumber() == 8;
	//check exist setter and true back value
	p->setName("B");
	p->setYearOfBirth(1925);
	p->setSex('x');
	p->setPhoneNumber(123456);

	true_back_value=exist = !strcmp(p->getName(), "B") && p->getYearOfBirth() == 1925
		&& p->getSex() == 'x' && p->getPhoneNumber() == 123456;
	

	delete p;
}

Person_test::Person_test(){
	exist = false;	
	true_back_value = false;

}