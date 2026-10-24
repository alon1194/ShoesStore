#pragma once
#include<string>
using namespace std; 
class Model {
	int ref; 
	string description; 
	float pvr; 
	bool exclusive; 
public:
	Model(int r, string d, float p, bool e);
	int getRef()const; 

	float getPVR()const;
	string getDescription()const; 
	bool modelExclusive()const; 
	void setPVR(float prec); 
	void print()const; 


};
