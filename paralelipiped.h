#pragma once

#include "dreptunghi.h";

#ifndef PAR_H
#define PAR_H

class Uncopyable {
protected:
	Uncopyable() {}
	~Uncopyable() {}
private:
	Uncopyable(const Uncopyable&);
	Uncopyable& operator=(const Uncopyable&);
};

class paralelipiped: private Uncopyable {
	public:
		paralelipiped(dreptunghi dr1, dreptunghi dr2, dreptunghi dr3);
		~paralelipiped();
		int Volum();
		dreptunghi d1, d2, d3;
};

#endif