#include "Person.h"
#include "Car.h"
using namespace std;
Person::Person()
{
	mFirstname = "Ludovic";
	mLastname = "Rouselle";
	mMoney = 0;
	vector<Car*>mListCar;
	mGender = Gender::Man;
	mBirthDate = Date();
	cout << "The person " << mFirstname << " was created" << "\n";

}

Person::Person(std::string f, std::string l, float money, vector<Car*>listCar, Gender g, Date d)
{
	mFirstname = f;
	mLastname = l;
	mMoney = money;
	vector<Car*>mListCar;
	mListCar = listCar;
	mGender = g;
	mBirthDate = d;
	cout << "The person " << mFirstname << " was created" << "\n";
}

Person::~Person()
{
	mListCar.~vector();
	
}

void Person::IntroduceThemselves()
{
	string tmp;
	switch (mGender) {
	case Gender::Man:
		tmp = "man";
		break;
	case Gender::Woman:
		tmp = "woman";
		break;
	case Gender::other:
		tmp = "triton man";
		break;
	default:
		tmp = "soy boy";
	}
	cout << mFirstname << " " << mLastname << " was born on " << mBirthDate.to_string()
		<< " and is a " << tmp << "\n";
	if (mListCar.size()==0)
	{
		cout << mFirstname << " has " << mMoney << ""
			<< " and no car"<<"\n";
	}
	else
	{
		for(Car* element : mListCar)
		cout << mFirstname << " has " << mMoney << "€ and a " << element->GetBrand()
			<<" "<< element->GetModel()<<" (" << element->GetLicensePlate() <<")" << "\n";
	}
	
}

void Person::BuyACar(Car& car)
{
	mMoney -= car.GetCost();
	mListCar.push_back(&car);
	cout << mFirstname << " spend " << car.GetCost() << " €,they now have "
		<< std::to_string(mMoney) << "€" << "\n";
}

Car* Person::GetCar(int i)
{
	return mListCar[i];
}

std::string Person::GetFirstName()
{
	return mFirstname;
}

void Person::SellACar(Person& p)
{
	if (mListCar.size() == 0)
	{
		cout << mFirstname << " sell failed because " << mFirstname << " doesn't have a car" << "\n";
	}
	else
	{
		cout << mFirstname << " sell their car to  " << p.GetFirstName() <<"\n";
		mMoney += mCar->GetCost();
		cout << mFirstname << " earned " << mCar->GetCost() << " €,they now have "
			<< std::to_string(mMoney) << "€" << "\n";

	}

	p.BuyACar(*mCar);
	mCar = nullptr;


}

void Person::GainMoney(int i)
{
	mMoney += i;
	cout << mFirstname << " gain " << i <<" €,they now have "
		<< std::to_string(mMoney) << "€" <<"\n";
}

void Person::RollInTheCar(int km)
{
	cout << mFirstname << " rolls with the " << mCar->GetBrand()
		<< " " << mCar->GetModel() << " (" << mCar->GetLicensePlate() << ") for " << km << " km" << "\n";
	mCar->Roll(km);
	
}

void Person::PaintTheCar(Color c)
{
	cout << mFirstname << " paints his car ";
	mCar->ChangeColor(c);
	
}
