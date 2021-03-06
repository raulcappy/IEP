#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING  1

#include <iostream>
#include "dreptunghi.h"
#include "paralelipiped.h"
#include "cub.h"
#include "figGeo.h"


using namespace std;

class Singleton
{
public:
    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;

    static shared_ptr<Singleton> instance()
    {
        static shared_ptr<Singleton> s{ new Singleton };
        return s;


    }

private:
    Singleton() {}
};



void doSomething(const string n) {
    tr1::shared_ptr<figGeo>plnv1(figGeo::construct(n));
    tr1::shared_ptr<figGeo>plnv2(plnv1);

    plnv1 = plnv2;

    cout << plnv1->getNume() << endl;
    cout << plnv2->getNume() << endl;
}


int main() {
    dreptunghi d1("d1", 4, 5), d2("d1", 10, 2);
    dreptunghi d3 = d1; //copy constructor is called here
    d2 = d1;            //assigment operator is called here
    cout << d2.getNume() << " " << d2.getL() << "\t" << d1.getNume() << " " << d1.getL() << endl;
    int diag = diagonala(d1);
    cout << "Aria celor 3 dreptunghiuri este: " << d1.Arie() << "\t" << d2.Arie() << "\t";
    cout << d3.Arie() << endl;
    cout << "Diagonala d1 este: " << diagonala(d1) << endl;

    paralelipiped p1(d1, d2, d3);
    cout << "Volumul paralelipipedului: " << p1.Volum() << endl;



    dreptunghi d4("d4", 8, 9), d5("d5", 9, 11), d6("d6", 12, 18);
    d4 = d5 = d6; //demonstrate multiple assigment
    cout << "d4 are L: " << d4.getL() << "\t" << " d5 are L: " << d5.getL() << "\t" << "d6 are L:" << d6.getL() << endl;

    d4 += d1;
    cout << "Latimea d4: " << d4.getl() << endl;

    d6 = 3;
    cout << "Latimea d6: " << d6.getl() << endl;

    cub c1(5);
    c1.afisare();
    c1 = c1;
    c1.afisare();
    cub c2(10);
    c2.afisare();
    c1 = c2;
    c1.afisare();
    
    doSomething("Shared Pointer");


    return 0;
}
