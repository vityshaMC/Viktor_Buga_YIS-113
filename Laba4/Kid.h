#pragma once

#include "Human.h"

#ifndef Kid_H
#define Kid_H

/// <summary>
/// ������ ������, ��������� ������ Human
/// </summary>
class Kid : public Human
{
private:
	/// <summary>
	/// ������� �����
	/// </summary>
	std::string _lovelyHobby;

public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Kid();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="_lovelyHobby"></param>
	/// <param name="fullName"></param>
	/// <param name="sex"></param>
	/// <param name="age"></param>
	Kid(const std::string& _lovelyHobby, const std::string& fullName, const std::string& sex, size_t age);

	/// <summary>
	/// ��������� �������� �����
	/// </summary>
	/// <returns></returns>
	std::string GetLovelyHobby() const;

	/// <summary>
	/// ��������������� ������ �������� ������
	/// </summary>
	/// <returns></returns>
	double GetIncome() const;
};
#endif