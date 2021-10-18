#pragma once

#include "student.h"

class Worker : public Student
{
public:
    Worker(string n, string s, int a,
           string uN, int nC, int sI,
           string sn = "", string tn = "",
           int inc = 0, string lh = "",
           string r = "", int m = 0);

    virtual void setIncome(const double&) override;
    virtual double getIncome() const override;
    virtual string reviewMyself() override;
    virtual string fullName() override;
};

