#pragma once
#include "figGeo.h"
#ifndef DREPT_H
#define DREPT_H

class dreptunghi: public figGeo {
public:
    dreptunghi(const std::string n, const int L, const int l);
    dreptunghi(const int latura);
    dreptunghi(const dreptunghi& ob); //copy constructor
    dreptunghi& operator =(const dreptunghi& ob);
    dreptunghi& operator +=(const dreptunghi& ob2);
    dreptunghi& operator =(int a);
    ~dreptunghi();
    dreptunghi& getDreptunghiInstance();
    int Arie();
    int getL();
    int getl();
private:
    int lungime;
    int latime;
};

int diagonala(dreptunghi& d);

#endif
