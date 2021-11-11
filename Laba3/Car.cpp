#include "Car.h"
#include <stdexcept>

Car::Car()
{
	_mark = "defult mark";
	_numbersCylinders = 0;
	_enginePower = 0;
}

Car::Car(const std::string& mark, size_t numbersCylinders, double enginePower)
{
	_mark = mark;
	_numbersCylinders = numbersCylinders;
	if (enginePower < 0)
	{
		throw std::invalid_argument("Power cannot be negative!");
	}
	_enginePower = enginePower;
}

void Car::ChangeMark(const std::string& newMark)
{
	_mark = newMark;
}

size_t Car::GetNumbersCylinders() const
{
	return _numbersCylinders;
}

double Car::GetEnginePower() const
{
	return _enginePower;
}

std::string Car::GetMark() const
{
	return _mark;
}