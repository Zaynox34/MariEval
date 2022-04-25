#include "Car.h"

using namespace std;

Car::Car()
{
	mBrand = "Roussel";
	mModel = "Ludovic";
	mColor = Color::Yellow;
	mLicensePlate = "SSS-MAT-SSS";
	mYearConstruction = Date();
	mCost = 1000000000;
	mKilometer = 0;
	cout << "The car " << mBrand << " " << mModel << " was created" << "\n";
	cout << "It is a " << mColor << " with license plate " << mLicensePlate << "\n";
	cout << "With a kilometer " << mKilometer << " km, it has a value of " << mCost <<"€"<< "\n";

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
	mKilometer = 0;
	cout << "The car " << mBrand << " " << mModel << " was created" << "\n";
	cout << "It is a " <<mColor << " with license plate " << mLicensePlate <<"\n";
	cout << "With a kilometer " << mKilometer << " km, it has a value of " << mCost << "€" << "\n";
}

Car::~Car()
{
}

std::string Car::GetBrand()
{
	return mBrand;
}

std::string Car::GetModel()
{
	return mModel;
}

std::string Car::GetColor()
{
	string tmp;
	switch (mColor) {
	case Color::Red:
		tmp = "red";
		break;
	case Color::Green:
		tmp = "green";
		break;
	case Color::Blue:
		tmp = "blue";
		break;
	case Color::Yellow:
		tmp = "yellow";
		break;
	case Color::Cyan:
		tmp = "cyan";
		break;
	case Color::Magenta:
		tmp = "magenta";
		break;
	case Color::White:
		tmp = "white";
		break;
	case Color::Black:
		tmp = "black";
		break;
	default:
		tmp = "abyss";
	}
	return tmp;
}

std::string Car::GetLicensePlate()
{
	return mLicensePlate;
}


unsigned int Car::GetCost()
{
	return mCost;
}

void Car::Roll(unsigned int km)
{
	mKilometer += km;
	mCost--;
	cout << "The " << mBrand
		<< " " << mModel<< " (" << mLicensePlate << ") kilometer is now " << mKilometer << " km" << "\n";
}

void Car::ChangeColor(Color c)
{
	mCost -= 2000;
	mColor = c;
	cout << GetColor()<<"\n";
	cout << mBrand << " " << mModel << " now has the color " << GetColor()<<"\n";
}


