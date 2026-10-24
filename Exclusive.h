#pragma once
#include<string>
using namespace std; 
#include "Shoestore.h"

class Exclusive :public Shoestore {
public:
	Exclusive(int i, string loc); 
	void printSales() const; 

};