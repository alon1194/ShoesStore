#pragma once
#include "Shoestore.h"
class Dealership : public Shoestore {
public:
	Dealership(int i, string loc); 
	bool registerSale(Model* m, float pre, string dt); 
};