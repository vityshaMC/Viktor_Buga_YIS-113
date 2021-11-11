#pragma once
#include "Car.h"

#ifndef LORRY_H
#define LORRY_H

/// <summary>
/// ����������� ����� ��������
/// </summary>
class Lorry :public Car
{
private:
	/// <summary>
	/// ����������������
	/// </summary>
	double _carrying�apacity;

	/// <summary>
	/// �������� �� ������������ ����� ����������������
	/// </summary>
	/// <param name="carryyingCapacity"></param>
	void CheckCorrectValue(double carryyingCapacity);
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Lorry();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="carrying�apacity"></param>
	/// <param name="mark"></param>
	/// <param name="numbersCylinders"></param>
	/// <param name="enginePower"></param>
	Lorry(double carrying�apacity, const std::string& mark, size_t numbersCylinders, double enginePower);

	/// <summary>
	/// ���������� ����������������
	/// </summary>
	/// <returns></returns>
	double GetCarrying�apacity() const;

	/// <summary>
	/// �������� ���������
	/// </summary>
	/// <param name="newCarrying�apacity"></param>
	void ChangeCarryingCapacity(double newCarrying�apacity);
};

#endif