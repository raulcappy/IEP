#include <iostream>

#include "figGeo.h"

using namespace std;

figGeo::figGeo(const string n)
	:nume(n)
{}

figGeo::~figGeo() {
	//cout << "Figura distrusa" << endl;
}

figGeo& figGeo::operator=(const figGeo& ob) {
	nume = ob.nume;
	return *this;
}

string figGeo::getNume() {
	return nume;
}

figGeo *figGeo::construct(const string n) {
	return new figGeo(n);
}
