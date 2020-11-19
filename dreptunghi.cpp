#include <iostream>
#include <cmath>
#include "dreptunghi.h";

using namespace std;


dreptunghi::dreptunghi(const string n, const int L, const int l)
    :nume(n),
    lungime(L),
    latime(l)
{}

dreptunghi::~dreptunghi() {
    cout << "Dreptunghi distrus" << endl;
}

dreptunghi::dreptunghi(const dreptunghi& obj) {
    nume = obj.nume;
    lungime = obj.lungime;
    latime = obj.latime;
}
dreptunghi& dreptunghi::operator =(const dreptunghi& ob) {
    nume = ob.nume;
    lungime = ob.lungime;
    latime = ob.latime;
    return *this;
}
dreptunghi& dreptunghi::operator =(int a)
 {  
    latime = a;
    lungime = a;
    return *this;
 }
dreptunghi& dreptunghi:: operator +=(const dreptunghi& ob2)
{
    this->latime = this->latime + ob2.latime;
    //this->latime += ob2.latime;
    return *this;
}
dreptunghi& dreptunghi::getDreptunghiInstance() {
    static dreptunghi d(this->getNume(), this->getL(), this->getl());
    return d;
}

int dreptunghi::Arie() {
    return lungime * latime;
}
string dreptunghi::getNume() {
    return nume;
}
int dreptunghi::getL() {
    return lungime;
}
int dreptunghi::getl() {
    return latime;
}

int diagonala(dreptunghi& d) {
    return sqrt(pow(d.getL(), 2) + pow(d.getl(), 2));
}
