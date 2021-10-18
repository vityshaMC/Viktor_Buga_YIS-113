#pragma once
#include "Car.h"
class Lorry :
    public Car
{
private:
    int carrying;
public:
    Lorry(std::string name = "none", int cyl = 0, int power = 0, int w = 0);
    int getCarrying() const;
    void setCarrying(const int& n);
    virtual void show();

    friend std::ostream& operator<< (std::ostream& out, const Lorry& c);
};

