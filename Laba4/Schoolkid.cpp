#include "Schoolkid.h"
#include <stdexcept>

SchoolKid::SchoolKid() : _pocketMoney(0), Human()
{}

SchoolKid::SchoolKid(double pocketMoney, const std::string& fullName, const std::string& sex, size_t age) :
	Human(fullName, sex, age)
{
	if (pocketMoney < 0)
	{
		throw std::invalid_argument("salary can not be negative!");
	}
	_pocketMoney = pocketMoney;
}

double SchoolKid::GetIncome() const
{
	return _pocketMoney;
}