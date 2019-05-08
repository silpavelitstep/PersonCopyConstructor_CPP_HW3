#pragma once
#ifndef TEST_SET_GET_H
#define TEST_SET_GET_H
class Person_test {
	bool set_exist;
	bool get_exist;
	bool set_true_back_value;
	bool get_true_back_value;
public:
	void setExist();
	void getExist();
	void setTrueBackValue();
	void getTrueBackValue();
	void exeAllTest();
	Person_test();
};
#endif
