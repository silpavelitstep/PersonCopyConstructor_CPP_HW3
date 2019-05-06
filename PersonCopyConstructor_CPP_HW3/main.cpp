#include <iostream>
#include "person.h"
using namespace std;
int main() {
	{
		cout << "<new obj Person in stack>\n";
		Person prsn("Paul",1983,'m',123456789);
		cout << "name: " <<prsn.getName()<<'\t'<< (int)prsn.getName() << endl;
		cout << "<call func(Person)>\n";
		prsn.getSetPerson(prsn);
		cout << "<first line after function>\n";
		//значение name и его адрес не должны поменяться
		cout << "name: " << prsn.getName() << '\t' << (int)prsn.getName() << endl;
	}
	system("pause");
	return 0;
}