#pragma once

#include "Human.h"

#ifndef Kid_H
#define Kid_H

/// <summary>
/// Возрас ребёнок, наследний класса Human
/// </summary>
class Kid : public Human
{
private:
	/// <summary>
	/// Любимое хобби
	/// </summary>
	std::string _lovelyHobby;

public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Kid();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="_lovelyHobby"></param>
	/// <param name="fullName"></param>
	/// <param name="sex"></param>
	/// <param name="age"></param>
	Kid(const std::string& _lovelyHobby, const std::string& fullName, const std::string& sex, size_t age);

	/// <summary>
	/// Получение любимого хобби
	/// </summary>
	/// <returns></returns>
	std::string GetLovelyHobby() const;

	/// <summary>
	/// Переопределение метода среднего дохода
	/// </summary>
	/// <returns></returns>
	double GetIncome() const;
};
#endif