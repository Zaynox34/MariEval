#pragma once
#include "Car.h"
#include "Gender.h"
#include "Date.h"
class Person
{
private:
	std::string mFirstname;
	std::string mLastname;
	float mMoney;
	Car* mCar;
	Gender mGender;
	Date mBirthDate;
public:
	Person();
	Person(std::string, std::string, float, Car, Gender, Date);
	~Person();
	void IntroduceThemselves();
	void BuyACar(Car);
	void SellACar();
	void RollInTheCar(int);
	void PaintTheCar();
};

