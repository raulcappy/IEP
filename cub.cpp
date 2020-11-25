#include <iostream>
#include <cmath>
#include "cub.h";


using namespace std;

cub::cub(int l)
	:d(new dreptunghi(l)),
	latura(l)
{}

cub::~cub() {
	cout << "Cub distrus" << endl;
}

cub& cub::operator=(const cub& rhs) {
	this->latura = rhs.latura;
	dreptunghi* dOrig = d;
	d = new dreptunghi(*rhs.d);
	delete dOrig;

	return *this;
}

void cub::afisare() {
	cout << d->getNume() << "\tcu latura "  << d->getL() <<endl;
}