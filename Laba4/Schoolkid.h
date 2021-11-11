#pragma once
#include "Human.h"

#ifndef SCHULKID_H
#define SCHULKID_H

/// <summary>
/// Класс дошкольник, наследник класса Человек
/// </summary>
class SchoolKid : public Human
{
private:
    /// <summary>
    /// средний доход с краманных денег
    /// </summary>
    int _pocketMoney;
public:
    /// <summary>
    /// Конструктор по умолчанию
    /// </summary>
    SchoolKid();

    /// <summary>
    /// Конструкор с параметрами
    /// </summary>
    /// <param name="_pocketMoney"></param>
    /// <param name="fullName"></param>
    /// <param name="sex"></param>
    /// <param name="age"></param>
    SchoolKid(double _pocketMoney, const std::string& fullName, const std::string& sex, size_t age);

    /// <summary>
    /// Переопределение метода средний доход
    /// </summary>
    /// <returns></returns>
    double GetIncome() const override;
};
#endif