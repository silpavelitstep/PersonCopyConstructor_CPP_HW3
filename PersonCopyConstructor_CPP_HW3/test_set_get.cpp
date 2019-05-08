#include <iostream>
using namespace std;
#include "person.h"
#include "test_set_get.h"
void Person_test::exeAllTest() {
	cout << "\n\nExecute all tests: \n";
	setExist();
	getExist();
	setTrueBackValue();
	getTrueBackValue();
	cout << "Testing end, resault: ";
	if (set_exist&&get_exist&&set_true_back_value&&set_true_back_value)
		cout << "PASS\n";
	else
		cout << "FAIL\n";
}
void Person_test::setExist() {}
void Person_test::getExist() {}
void Person_test::setTrueBackValue() {}
void Person_test::getTrueBackValue() {}
Person_test::Person_test(){
	set_exist = get_exist = set_true_back_value = get_true_back_value = true;
}