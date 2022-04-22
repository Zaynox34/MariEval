#include "Car.h"

Car::Car()
{
	mBrand = "Roussel";
	mModel = "Ludovic";
	mColor = Color::Yellow;
	mLicensePlate = "SSS-STM-MAT";
	mYearConstruction = Date();
	mCost = 1000000000;
	kilometer = 0;

}
Car::Car(std::string brand, std::string model, Color color,
	std::string licencePlate, Date date, unsigned int cost)
{
	mBrand = brand;
	mModel = model;
	mColor = color;
	mLicensePlate = licencePlate;
	mYearConstruction = date;
	mCost = cost;
	kilometer = 0;
}

Car::~Car()
{
}

void Car::Roll(unsigned int km                    )
{
	kilometer += km; 
	mCost--;
}

void Car::ChangeColor(Color c)
{
	mCost -= 2000;
	mColor = c;
}


