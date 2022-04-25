#pragma once
#include <iostream>
#include "Car.h"
#include <vector>
#include "Gender.h"
#include "Date.h"
class Person
{
private:
	std::string mFirstname;
	std::string mLastname;
	int mMoney;
	std::vector<Car*> mListCar;
	Gender mGender;
	Date mBirthDate;
public:
	Person();
	Person(std::string, std::string, float, vector<Car*>, Gender, Date);
	~Person();
	void IntroduceThemselves();
	void BuyACar(Car&);
	Car* GetCar(int);
	std::string GetFirstName();
	void SellACar(Person&);
	void GainMoney(int);
	void RollInTheCar(int);
	void PaintTheCar(Color);
};

