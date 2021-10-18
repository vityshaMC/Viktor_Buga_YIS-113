#include "Lorry.h"

Lorry::Lorry(std::string name, int cyl, int power, int w)
    : Car(name, cyl, power)
{
    carrying = w;
}

int Lorry::getCarrying() const
{
    return carrying;
}

void Lorry::setCarrying(const int& n)
{
    carrying = n;
}

void Lorry::show()
{
	std::cout << "Грузовик:\n"
		<< "Марка: " << getMark() << std::endl
		<< "Количество цилиндров в двигателе: " << getCylinders() << std::endl
		<< "Мощность в лошадиных силах: " << getEnginePower() << std::endl
		<< "Грузоподъемность в кг: " << getCarrying() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Lorry& c)
{
	out << "Грузовик:\n"
		<< "Марка: " << c.getMark() << std::endl
		<< "Количество цилиндров в двигателе: " << c.getCylinders() << std::endl
		<< "Мощность в лошадиных силах: " << c.getEnginePower() << std::endl
		<< "Грузоподъемность в кг: " << c.getCarrying() << std::endl;
	return out;
}