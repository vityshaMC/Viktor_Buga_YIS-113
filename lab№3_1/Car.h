#pragma once
#include <string>
#include <iostream>

class Car
{
private:
	std::string mark;
	int countCylinders;
	int enginePower;
public:
	Car(std::string name = "none", int cyl = 0, int power = 0);
	int getCylinders() const;
	int getEnginePower() const;
	std::string getMark() const;

	void setCountCylinders(const int &n);
	void setEnginePower(const int &n);
	void setMark(const std::string &str);

	virtual void show();

	friend std::ostream& operator<< (std::ostream& out, const Car &c);
};

