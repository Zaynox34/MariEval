#include "Person.h"
#include "Car.h"
Person::Person()
{
	mFirstname = "Ludovic";
	mLastname = "Rouselle";
	mMoney = 0;
	mCar = new Car();
	mGender = Gender::Homme;
	mBirthDate = Date();


}

Person::Person(std::string f, std::string l, float money, Car* car, Gender g, Date d)
{
	mFirstname = f;
	mLastname = l;
	mMoney = money;
	mCar = car;
	mGender = g;
	mBirthDate = d;
		

}

Person::~Person()
{
}

void Person::IntroduceThemselves()
{
	delete mCar;
}

void Person::BuyACar(Car)
{

}

void Person::SellACar()
{
}

void Person::RollInTheCar(int)
{
}

void Person::PaintTheCar()
{
}
