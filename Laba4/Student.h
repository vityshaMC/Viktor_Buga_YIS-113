#pragma once
#include "Human.h"

#ifndef STUDENT_H
#define STUDENT_H

class Student : public Human
{
private:
    /// <summary>
    /// ���������
    /// </summary>
    double _scholarship;
public:
	/// <summary>
	/// ���������� �� ���������
	/// </summary>
    Student();

    /// <summary>
    ///  ����������� � �����������
    /// </summary>
    /// <param name="scholarship"></param>
    /// <param name="fullName"></param>
    /// <param name="sex"></param>
    /// <param name="age"></param>
    Student(double scholarship, const std::string& fullName, const std::string& sex, size_t age);

    /// <summary>
    /// ��������������� ������ �������� ������
    /// </summary>
    /// <returns></returns>
    double GetIncome() const override;
};
#endif