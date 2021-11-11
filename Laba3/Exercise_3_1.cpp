#include <iostream>
#include "Lorry.h"

/// <summary>
/// Вывод в консоль класс Lorry
/// </summary>
void PrintLorry(Lorry& lorry)
{
	std::cout << "Lorry:\n"
		<< "Carrying Capacity: " << lorry.GetCarryingСapacity() << '\n'
		<< "Mark: " << lorry.GetMark() << '\n'
		<< "Numbers of Cylinders: " << lorry.GetNumbersCylinders() << '\n'
		<< "Engine Power: " << lorry.GetEnginePower() << '\n';
}

int main()
{
	try
	{
		Lorry lorry(5123.5, "Volvo", 24, 802.3);
		PrintLorry(lorry);
		std::cout << '\n';

		std::cout << "ChangeMark\n";
		lorry.ChangeMark("Changed name Volvo");
		PrintLorry(lorry);
		std::cout << '\n';

		std::cout << "ChangeCarryingCapacity\n";
		lorry.ChangeCarryingCapacity(123.123);
		PrintLorry(lorry);
		std::cout << '\n';
	}
	catch (std::invalid_argument err)
	{
		std::cout << "invalid_argument: " << err.what() << std::endl;
	}	

	system("pause");
	return 0;
}