#pragma once
#include <string>

#ifndef CAR_H
#define CAR_H

/// <summary>
/// ����� ������
/// </summary>
class Car
{
private:
	/// <summary>
	/// ������
	/// </summary>
	std::string _mark;
	/// <summary>
	/// ���-�� ���������
	/// </summary>
	size_t _numbersCylinders;
	/// <summary>
	/// �������� ���������
	/// </summary>
	double _enginePower;
public: 
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Car();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="name"></param>
	/// <param name="numbersCylinders"></param>
	/// <param name="enginePower"></param>
	Car(const std::string&,  size_t, double);

	/// <summary>
	/// ���������� ���-�� ���������
	/// </summary>
	/// <returns></returns>
	size_t GetNumbersCylinders() const;

	/// <summary>
	/// �������� �����
	/// </summary>
	/// <param name="newMark"></param>
	void ChangeMark(const std::string& newMark);

	/// <summary>
	/// ���������� �������� ���������
	/// </summary>
	/// <returns></returns>
	double GetEnginePower() const;

	/// <summary>
	/// ���������� �������� ���������
	/// </summary>
	/// <returns></returns>
	std::string GetMark() const;
};
#endif