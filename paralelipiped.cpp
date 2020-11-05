#include <iostream>
#include "paralelipiped.h";

using namespace std;

paralelipiped::paralelipiped(dreptunghi dr1, dreptunghi dr2, dreptunghi dr3)
	:d1(dr1.getDreptunghiInstance()),
	d2(dr2.getDreptunghiInstance()),
	d3(dr3.getDreptunghiInstance())
{}

paralelipiped::~paralelipiped() {
	cout << "paralelipiped distrus" << endl;
}
/*
paralelipiped::paralelipiped(const paralelipiped& obj) {
	d1 = obj.d1;
	d2 = obj.d2;
	d3 = obj.d3;

	cout << "Paralelipiped Copy constructor is called here" << endl;
}

paralelipiped& paralelipiped::operator =(const paralelipiped& obj) {
	d1 = obj.d1;
	d2 = obj.d2;
	d3 = obj.d3;

	cout << "Paralelipiped Assigment operator is called here" << endl;
	return *this;
}
*/
int paralelipiped::Volum() {
	return (d1.getL() * d2.getL() * d3.getL());
}