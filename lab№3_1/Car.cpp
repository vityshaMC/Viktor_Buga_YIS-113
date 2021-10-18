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
	std::cout << "����������:\n"
		<< "�����: " << getMark() << std::endl
		<< "���������� ��������� � ���������: " << getCylinders() << std::endl
		<< "�������� � ��������� �����: " << getEnginePower() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Car& c)
{
	out << "����������:\n"
		<< "�����: " << c.getMark() << std::endl
		<< "���������� ��������� � ���������: " << c.getCylinders() << std::endl
		<< "�������� � ��������� �����: " << c.getEnginePower() << std::endl;
	return out;
}
