#include "Kid.h"

Kid::Kid() : _lovelyHobby("defult lovely Hobby"), Human()
{}

Kid::Kid(const std::string& lovelyHobby, const std::string& fullName, const std::string& sex, size_t age) :
	Human(fullName, sex, age)
{
	_lovelyHobby = lovelyHobby;
}

std::string Kid::GetLovelyHobby() const
{
	return _lovelyHobby;
}

double Kid::GetIncome() const
{
	return 0;
}