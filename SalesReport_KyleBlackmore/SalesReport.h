#ifndef _SALESREPORT_H_
#define _SALESREPORT_H_

#include "stdafx.h"
#include <conio.h>
#include <vector>
#include <string.h>
#include <iosfwd>
#include <iomanip>
#include "Salesman.h"
using namespace std;


class SalesReport {

private:
	double totalSales;
	double totalExpenses;

public:
	SalesReport();
	SalesReport(double sales, double expenses); 

	void getTotals(vector<Salesman>& salesmen);
	double getPercentage(double base,double total);

	void report(vector<Salesman>& salesmen);

	void sortVector(vector<Salesman>& salesmen, int temp);



};


#endif

