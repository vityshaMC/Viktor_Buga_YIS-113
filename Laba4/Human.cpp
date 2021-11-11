#include "Human.h"
#include <stdexcept>

Human::Human(const std::string& fullName, const std::string& sex, size_t age)
{
	_fullName = fullName;
	_sex = sex;
	_age = age;
}

Human::Human()
{
	_fullName = "defult full name";
	_sex = "defult sex";
	_age = 0;
}

std::string Human::GetFullName() const
{
	return _fullName;
}

std::string Human::GetSex() const
{
	return _sex;
}

size_t Human::GetAge() const
{
	return _age;
}