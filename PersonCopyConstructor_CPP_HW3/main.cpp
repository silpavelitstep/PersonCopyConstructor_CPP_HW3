#include <iostream>
#include "person.h"
using namespace std;
int main() {
	{
		cout << "<new obj Person in stack>\n";
		cout << endl;
		Person prsn("Lucas",1983,'m',123456789);
		cout << endl;
		cout << "name: " <<prsn.getName()<< endl;
		cout << "pointer to Name: " << (int)prsn.getPointerToName();
		cout << endl;
		cout << "\n<call func(Person)>\n";
		cout << endl;
		prsn.func(prsn);
		cout << endl;
		cout << "<first line after function>\n";
		cout << endl;
		//значение name и его адрес не должны поменяться
		cout << "name: " << prsn.getName() << endl;
		cout << "pointer to Name: " << (int)prsn.getPointerToName() << endl;
	}
	system("pause");
	return 0;
}