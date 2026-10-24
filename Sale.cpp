#include<iostream>
#include "Sale.h"
#include "Model.h"
#include "Shoestore.h"
using namespace std; 

Sale :: Sale(int i, float prec, string d, Model* m, Shoestore* s) {
	id = i; 
	price = prec; 
	data = d; 
	model = m; 
	store = s; 
};
int  Sale::getId() const{
	return id; 

};
float Sale:: getPrec()const {
	return price;
};
string  Sale::getData()const {
	return data; 
};
Model* Sale::getmodel()const {
	return model; 
};
Shoestore* Sale::getShoestore()const {
	return store; 
};
void  Sale::print() const {
	cout << "sales n." << id << " " << price << "Eur In" << data << "of shoe Model";
	if (model != NULL) {
		model->print(); 
	}
};

