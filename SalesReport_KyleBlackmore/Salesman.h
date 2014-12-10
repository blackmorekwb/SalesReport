#ifndef _SALESMAN_H_
#define _SALESMAN_H_

#include "stdafx.h"
#include <conio.h>
#include <iosfwd>
#include <string>
#include <vector>
using namespace std;

class Salesman {

public:
	string fname;
	string lname;
	double expenses;
	double sales;

	Salesman();
	Salesman(string fname, string lname);
	Salesman(string fname, string lname,
			 double expenses, double sales);

};


#endif

