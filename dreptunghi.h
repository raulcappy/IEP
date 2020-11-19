#pragma once

#ifndef DREPT_H
#define DREPT_H

class dreptunghi {
public:
    dreptunghi(const std::string n, const int L, const int l);
    dreptunghi(const dreptunghi& ob); //copy constructor
    dreptunghi& operator =(const dreptunghi& ob);
    dreptunghi& operator +=(const dreptunghi& ob2);
    dreptunghi& operator =(int a);
    ~dreptunghi();
    dreptunghi& getDreptunghiInstance();
    std::string getNume();
    int Arie();
    int getL();
    int getl();
private:
    std::string nume;
    int lungime;
    int latime;
};

int diagonala(dreptunghi& d);

#endif
