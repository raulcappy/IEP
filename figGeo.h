#pragma once
#include <map>
#include <string>
#include <stack>
#ifndef FIG_H
#define FIG_H


class figGeo {
public:
	figGeo(const std::string n);
	~figGeo();
	figGeo& operator= (const figGeo& ob);
	std::string getNume();
private:
	std::string nume;
};



#endif // !FIG_H
