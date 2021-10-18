#pragma once

#include "schoolkid.h"

class Student : public SchoolKid
{
protected:
    string universityName;
private:
    int numCourse;
    int subIncome;
public:
	//Те же параметры, но добавили несколько новых обязательных 
	//параметро uN - название университета, nC - курс, sI - доп. доход
    Student(string n, string s, int a,
            string uN, int nC, int sI,
            string sn = "", string tn = "",
            int inc = 0, string lh = "",
            string r = "", int m = 0);

    virtual void setIncome(const double&) override;
    virtual double getIncome() const override;
    virtual string reviewMyself() override;
    virtual string fullName() override;
};

