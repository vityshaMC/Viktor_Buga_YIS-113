#pragma once
#include "Human.h"

#ifndef WORKER_H
#define WORKER_H

/// <summary>
/// Класс рабочий, наследует класс человек
/// </summary>
class Worker : public Human
{
private:
	/// <summary>
	/// Зарплата
	/// </summary>
	double _salary;

	/// <summary>
	/// Должность
	/// </summary>
	std::string _position;
public:

    Worker();
    Worker(double salary, const std::string& _position, const std::string& fullName, const std::string& sex, size_t age);

	double GetIncome() const override;

	std::string GetPositon() const;
};
#endif