#include<iostream>
using namespace std; 
#include "Exclusive.h"

Exclusive::Exclusive(int i, string loc) : Shoestore(i, loc) {}

void  Exclusive ::printSales() const {
	cout << "Sales from exclusive Camport shoes located in " << localisation << ":\n"; 

};