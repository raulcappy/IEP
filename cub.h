#pragma once
#include "dreptunghi.h"


#ifndef CUB_H
#define CUB_H

class cub{
public:
    cub(int latura);
    //cub(const cub& ob); //copy constructor
    cub& operator =(const cub& rhs);
    ~cub();
    void afisare();
private:
    int latura;
    dreptunghi* d;
};

#endif;
