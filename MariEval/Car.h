#pragma once
#include <string>
#include "Color.h"
#include "Date.h"
#include "Person.h"
class Car
{
private:
	std::string mBrand;
	std::string mModel;
	Color mColor;
	std::string mLicensePlate;
	Date mYearConstruction;
	unsigned int kilometer; 
	unsigned int mCost;
public:
	Car(std::string, std::string, Color, std::string, Date, unsigned int);
	Car();
	~Car();
	void Roll(unsigned int);	
	void ChangeColor(Color);
};

