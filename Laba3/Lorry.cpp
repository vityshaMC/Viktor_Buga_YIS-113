#include "Lorry.h"
#include <stdexcept>

Lorry::Lorry(): Car()
{
    _carrying�apacity = 0;
}

Lorry::Lorry(double carryyingCapacity, const std::string& mark, size_t numbersCylinders, double enginePower) :
	Car(mark, numbersCylinders, enginePower)
{
	CheckCorrectValue(carryyingCapacity);
	_carrying�apacity = carryyingCapacity;
}

void Lorry::CheckCorrectValue(double carryyingCapacity)
{
	if (carryyingCapacity < 0)
	{
		throw std::invalid_argument("Carryying Capacity cannot be negative!");
	}
}


double Lorry::GetCarrying�apacity() const
{
    return _carrying�apacity;
}

void Lorry::ChangeCarryingCapacity(double newCarrying�apacity)
{
	CheckCorrectValue(newCarrying�apacity);
	_carrying�apacity = newCarrying�apacity;
}