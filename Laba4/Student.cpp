#include "Student.h"
#include <stdexcept>

Student::Student() : _scholarship(0), Human()
{}

Student::Student(double scholarship, const std::string& fullName, const std::string& sex, size_t age) :
	Human(fullName, sex, age)
{
	if (scholarship < 0)
	{
		throw std::invalid_argument("salary can not be negative!");
	}
	_scholarship = scholarship;
}

double Student::GetIncome() const
{
	return _scholarship;
}