#pragma once
#include <string>

#ifndef HUMAN_H
#define HUMAN_H

/// <summary>
/// Абстрактный класс Человек
/// </summary>
class Human
{
protected:
	/// <summary>
	/// ФИО
	/// </summary>
	std::string _fullName;

	/// <summary>
	/// Пол
	/// </summary>
	std::string _sex;

	/// <summary>
	/// Возраст
	/// </summary>
	size_t _age;
public:
	/// <summary>
	/// Консруктор по умолчанию
	/// </summary>
	Human();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="secondName"></param>
	/// <param name="thirdName"></param>
	/// <param name="firstName"></param>
	/// <param name="sex"></param>
	/// <param name="income"></param>
	/// <param name="age"></param>
	Human(const std::string& fullName, const std::string& sex, size_t age);

	/// <summary>
	/// Возвращает ФИО
	/// </summary>
	/// <returns></returns>
	std::string GetFullName() const;

	/// <summary>
	/// Возвращает пол
	/// </summary>
	/// <returns></returns>
	std::string GetSex() const;

	/// <summary>
	/// Возвращает пол
	/// </summary>
	/// <returns></returns>
	size_t GetAge() const;

	/// <summary>
	/// Возвращает средний доход
	/// </summary>
	/// <returns></returns>
	virtual double GetIncome() const = 0;
};
#endif 