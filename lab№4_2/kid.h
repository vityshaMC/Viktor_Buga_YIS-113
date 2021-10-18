#pragma once

#include "Human.h"
#include <iomanip>
#include <sstream>

using std::string;

class Kid : public Human
{
protected:
    string lovelyHobby;

public:
	//параметры конструктора:
	//(имя, пол, возраст, 
	// фамилия, отчество,
	// доход, любимое хобби)
	//все аргументы, кроме пенрвых трех имеют значения 
	//по умолчанию, то есть их ввод необязателен
    Kid(string n, string s, int a,
        string sn = "", string tn = "",
        int inc = 0, string lh = "");
	//реализуем все функции абстрактного базового класса Human
	//override - спецификатор для компилятора, чтобы проверил 
	//точно ли виртуальные функции были переопределены
	//virtual - спецификатор для возможности переопеределения функций
	//в классах наследниках
    virtual void setIncome(const double&) override;
    virtual double getIncome() const override;
    virtual string reviewMyself() override;
    virtual string fullName() override;

};

