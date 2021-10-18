#pragma once
#include <string>

//абстрактный класс (так как кроме интерфейса
//в виде виртуальных ф-ций объявлены и переменные)
class Human
{
protected:
	std::string secondName;
	std::string thirdName;	
	std::string name;
	std::string sex;
	double income;
	int age;
public:
	//отсутсвие конструктора объясняется ролью класса - 
	//абстрактный класс для наследования и реализации 
	//заложенного интерфейса

	//получить значение дохода
    virtual double getIncome() const = 0;
	//установить значение дохода
    virtual void setIncome(const double&) = 0;
	//вывод информации об объекте в виде рассказа
    virtual std::string reviewMyself() = 0;
	//получить полное имя ФИО объекта
    virtual std::string fullName() = 0;
};

