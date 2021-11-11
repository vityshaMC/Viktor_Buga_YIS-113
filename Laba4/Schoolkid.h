#pragma once
#include "Human.h"

#ifndef SCHULKID_H
#define SCHULKID_H

/// <summary>
/// ����� ����������, ��������� ������ �������
/// </summary>
class SchoolKid : public Human
{
private:
    /// <summary>
    /// ������� ����� � ��������� �����
    /// </summary>
    int _pocketMoney;
public:
    /// <summary>
    /// ����������� �� ���������
    /// </summary>
    SchoolKid();

    /// <summary>
    /// ���������� � �����������
    /// </summary>
    /// <param name="_pocketMoney"></param>
    /// <param name="fullName"></param>
    /// <param name="sex"></param>
    /// <param name="age"></param>
    SchoolKid(double _pocketMoney, const std::string& fullName, const std::string& sex, size_t age);

    /// <summary>
    /// ��������������� ������ ������� �����
    /// </summary>
    /// <returns></returns>
    double GetIncome() const override;
};
#endif