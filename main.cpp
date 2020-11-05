#include <iostream>
#include "dreptunghi.h"
#include "paralelipiped.h"

using namespace std;

int main() {
    dreptunghi d1("d1",4, 5), d2("d1",10, 2);
    dreptunghi d3 = d1; //copy constructor is called here
    d2 = d1;            //assigment operator is called here
    cout << d2.getNume() << " " << d2.getL() << "\t" << d1.getNume() << " " << d1.getL() << endl;
    int diag = diagonala(d1);
    cout << "Aria celor 3 dreptunghiuri este: " << d1.Arie() << "\t" << d2.Arie() << "\t";
    cout << d3.Arie() << endl;
    cout << "Diagonala d1 este: " << diagonala(d1) << endl;


    paralelipiped p1(d1, d2, d3);
    cout << "Volumul paralelipipedului: " << p1.Volum() << endl;
    
    //paralelipiped p2 = p1;  eroare de compilare
    return 0;
}