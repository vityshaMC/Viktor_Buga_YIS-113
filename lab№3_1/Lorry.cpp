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
	std::cout << "��������:\n"
		<< "�����: " << getMark() << std::endl
		<< "���������� ��������� � ���������: " << getCylinders() << std::endl
		<< "�������� � ��������� �����: " << getEnginePower() << std::endl
		<< "���������������� � ��: " << getCarrying() << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Lorry& c)
{
	out << "��������:\n"
		<< "�����: " << c.getMark() << std::endl
		<< "���������� ��������� � ���������: " << c.getCylinders() << std::endl
		<< "�������� � ��������� �����: " << c.getEnginePower() << std::endl
		<< "���������������� � ��: " << c.getCarrying() << std::endl;
	return out;
}