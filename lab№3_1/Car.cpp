#include "Car.h"

Car::Car(std::string name, int cyl, int power)
{
	mark = name;
	countCylinders = cyl;
	enginePower = power;
}

int Car::getCylinders() const
{
	return countCylinders;
}

int Car::getEnginePower() const
{
	return enginePower;
}

std::string Car::getMark() const
{
	return mark;
}

void Car::setCountCylinders(const int& n)
{
	countCylinders = n;
}

void Car::setEnginePower(const int& n)
{
	enginePower = n;
}

void Car::setMark(const std::string& str)
{
	mark = str;
}

void Car::show()
{
	std::cout << "Автомобиль:\n"
		<< "Марка: " << getMark() << std::endl
		<< "Количество цилиндров в двигателе: " << getCylinders() << std::endl
		<< "Мощность в лошадиных силах: " << getEnginePower() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Car& c)
{
	out << "Автомобиль:\n"
		<< "Марка: " << c.getMark() << std::endl
		<< "Количество цилиндров в двигателе: " << c.getCylinders() << std::endl
		<< "Мощность в лошадиных силах: " << c.getEnginePower() << std::endl;
	return out;
}
