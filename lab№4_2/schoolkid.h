#pragma once

#include "kid.h"

class SchoolKid : public Kid
{
private:
    string classRoom;
    int pocketMoney;
public:
    SchoolKid(string n, string s, int a,
              string sn = "", string tn = "",
              int inc = 0, string lh = "",
              string r = "", int m = 0);

    virtual void setIncome(const double&) override;
    virtual double getIncome() const override;
    virtual string reviewMyself() override;
    virtual string fullName() override;
};

