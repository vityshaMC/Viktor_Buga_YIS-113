#include "worker.h"
#include <stdexcept>

Worker::Worker() :_salary(0), Human() {}

Worker::Worker(double salary, const std::string& _position, const std::string& fullName, const std::string& sex, size_t age) :
	Human(fullName, sex, age)
{
	if (salary < 0)
	{
		throw std::invalid_argument("salary can not be negative!");
	}
	_salary = salary;
}

double Worker::GetIncome() const
{
	return _salary;
}

std::string Worker::GetPositon() const
{
	return _position;
}