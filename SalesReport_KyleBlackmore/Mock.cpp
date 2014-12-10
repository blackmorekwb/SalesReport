#include "stdafx.h"
#include "Mock.h"

Mock::Mock(){
	getNames();
	createVector();
	sendVector();
	report.report(mockSalesmen);


}

void Mock::sendVector(){
	report.getTotals(mockSalesmen);
}

void Mock::createVector(){
	double mockExpenses;
	double mockSales;
	string fname;
	string lname;
	random_device rd;

	for (int i = 0; i <= 25; i++){
		mockExpenses = random(100.00, 2000.00);
		mockSales = random(1500.00, 5000.00);
		fname = salesmen[i];
		lname = salesmen[i + 1];
		
		mockSalesmen.push_back(Salesman(fname, lname, mockExpenses, mockSales));

	}
}

double Mock::random(double  min, double max){
	/* In page citation: lines 37-41
			http://www.cplusplus.com/reference/random/default_random_engine/
	*/
	random_device rd;
	default_random_engine generator(rd());		// <random> library
	uniform_real_distribution<double> distribution(min, max);

	double random = distribution(generator);

	return random;
}
void Mock::getNames() {	
	string employees[50] = { 
		"Sandy",
		"Dean",
		"Kevin",
		"Smith",
		"Jamie",
		"Lee-curtis",
		"Jim",
		"Halpert",
		"Beth",
		"Bruns",
		"Roberta",
		"Jones",
		"Jack",
		"Frost",
		"Kyle",
		"Blackmore",
		"Annie",
		"Smith",
		"Branden",
		"Frazier",
		"Curtis",
		"Malogne",
		"Max",
		"Adabat",
		"Leslie",
		"Thomas",
		"Nimesh",
		"Sunry",
		"Aaron",
		"Donnovan",
		"Michelle",
		"Jones",
		"Kate",
		"Hudson",
		"Jerimiah",
		"Thebullfrog"
		"lisa",
		"O'reily",
		"Arthur",
		"Picasso",
		"Robert",
		"Pinto",
		"Susan",
		"Kellie",
		"Riley",
		"Davis",
		"Kim",
		"Tina",
		"Fey",
		"Carrottop"

	};

	for (int i = 0; i < sizeof(employees)/sizeof(*employees); i++){
		salesmen.push_back(employees[i]);
	}

}


