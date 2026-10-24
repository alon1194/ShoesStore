#pragma once
#include<string>
using namespace std; 
class Model; 
class Shoestore; 

class Sale {
	int id; 
	float price; 
	string data; 
	Model* model; 
	Shoestore* store;
public:
	Sale(int i, float prec, string d, Model* m, Shoestore* s);
	int getId()const; 
	float getPrec()const; 
	string getData()const; 
	Model* getmodel()const; 
	Shoestore* getShoestore()const; 
	void print() const; 

};