#pragma once
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
	unsigned int mKilometer; 
	unsigned int mCost;
public:
	Car(std::string, std::string, Color, std::string, Date, unsigned int);
	Car();
	~Car();
	std::string GetBrand();
	std::string GetModel();
	std::string GetColor();
	std::string GetLicensePlate();
	unsigned int GetCost();
	void Roll(unsigned int);	
	void ChangeColor(Color);
};

