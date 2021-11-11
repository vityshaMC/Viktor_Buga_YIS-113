#pragma once
#include <string>

#ifndef CAR_H
#define CAR_H

/// <summary>
/// Класс Машина
/// </summary>
class Car
{
private:
	/// <summary>
	/// Модель
	/// </summary>
	std::string _mark;
	/// <summary>
	/// Кол-во цилиндров
	/// </summary>
	size_t _numbersCylinders;
	/// <summary>
	/// Мощность двигателя
	/// </summary>
	double _enginePower;
public: 
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Car();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="name"></param>
	/// <param name="numbersCylinders"></param>
	/// <param name="enginePower"></param>
	Car(const std::string&,  size_t, double);

	/// <summary>
	/// Возвращает кол-во целиндров
	/// </summary>
	/// <returns></returns>
	size_t GetNumbersCylinders() const;

	/// <summary>
	/// Изменить марку
	/// </summary>
	/// <param name="newMark"></param>
	void ChangeMark(const std::string& newMark);

	/// <summary>
	/// Возвращает мощность двигателя
	/// </summary>
	/// <returns></returns>
	double GetEnginePower() const;

	/// <summary>
	/// Возвращает мощность двигателя
	/// </summary>
	/// <returns></returns>
	std::string GetMark() const;
};
#endif