#include<iostream>
using namespace std; 

#include"Model.h"; 

Model::Model(int r, string d, float p, bool e) {
	ref = r; 
	description = d; 
	pvr = p; 
	exclusive = e; 

}
int Model ::getRef()const {
	return ref; 
};
float  Model :: getPVR()const {
	return pvr; 

}; 
string Model ::getDescription()const {
	return description; 
};
bool Model:: modelExclusive()const {
	return exclusive; 

}; 
void Model::setPVR(float prec) {
	pvr = prec; 

}; 
void Model:: print() const {
	cout << "Ref." << ref << " - " << description; 
};