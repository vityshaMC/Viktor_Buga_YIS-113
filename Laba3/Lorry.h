#pragma once
#include "Car.h"

#ifndef LORRY_H
#define LORRY_H

/// <summary>
/// Производный класс Грузовик
/// </summary>
class Lorry :public Car
{
private:
	/// <summary>
	/// Грузоподъемность
	/// </summary>
	double _carryingСapacity;

	/// <summary>
	/// проверка на корректность новой грузоподъемности
	/// </summary>
	/// <param name="carryyingCapacity"></param>
	void CheckCorrectValue(double carryyingCapacity);
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Lorry();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="carryingСapacity"></param>
	/// <param name="mark"></param>
	/// <param name="numbersCylinders"></param>
	/// <param name="enginePower"></param>
	Lorry(double carryingСapacity, const std::string& mark, size_t numbersCylinders, double enginePower);

	/// <summary>
	/// Возвращает грузоподъемность
	/// </summary>
	/// <returns></returns>
	double GetCarryingСapacity() const;

	/// <summary>
	/// изменить грузоподь
	/// </summary>
	/// <param name="newCarryingСapacity"></param>
	void ChangeCarryingCapacity(double newCarryingСapacity);
};

#endif