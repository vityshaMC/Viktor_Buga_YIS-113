#include "Lorry.h"
#include <stdexcept>

Lorry::Lorry(): Car()
{
    _carryingÑapacity = 0;
}

Lorry::Lorry(double carryyingCapacity, const std::string& mark, size_t numbersCylinders, double enginePower) :
	Car(mark, numbersCylinders, enginePower)
{
	CheckCorrectValue(carryyingCapacity);
	_carryingÑapacity = carryyingCapacity;
}

void Lorry::CheckCorrectValue(double carryyingCapacity)
{
	if (carryyingCapacity < 0)
	{
		throw std::invalid_argument("Carryying Capacity cannot be negative!");
	}
}


double Lorry::GetCarryingÑapacity() const
{
    return _carryingÑapacity;
}

void Lorry::ChangeCarryingCapacity(double newCarryingÑapacity)
{
	CheckCorrectValue(newCarryingÑapacity);
	_carryingÑapacity = newCarryingÑapacity;
}