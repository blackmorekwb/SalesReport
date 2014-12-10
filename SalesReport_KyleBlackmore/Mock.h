#ifndef _MOCK_H_
#define _MOCK_H_
#include "stdafx.h"
#include "Salesman.h"
#include "SalesReport.h"
#include <vector>
#include <string>
#include <random>
using namespace std;

// Functional tests, mocking 25 salesman for report

class Mock {
public:
	Mock();

	void sendVector();
	void createVector();
	double random(double min, double max);
	void getNames();
private:
	SalesReport report;

	vector<Salesman> mockSalesmen;
	string employees[50];
	vector<string> salesmen;

};

#endif

