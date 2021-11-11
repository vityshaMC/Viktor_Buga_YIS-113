#include <iostream>

#include "Human.h"
#include "Kid.h"
#include "Schoolkid.h"
#include "Student.h"
#include "Worker.h"

/// <summary>
/// Вывод информации
/// </summary>
/// <param name="human"></param>
void ShowInfo(Human* human)
{
	std::cout << typeid(*human).name() << '\n';
	std::cout << "ФИО: " << human->GetFullName() << '\n';
	std::cout << "Возраст: " << human->GetAge() << '\n';
	std::cout << "Пол: " << human->GetSex() << '\n';
	std::cout << "Средний доход: " << human->GetIncome() << '\n';
}

int main()
{
	setlocale(LC_ALL, "Russian");

	bool isExit = false;
	int userInput;
	Human* human;
	while (isExit == false)
	{
		std::cout << "1) Дошкольник\n";
		std::cout << "2) Школьник\n";
		std::cout << "3) Студент\n";
		std::cout << "4) Работающий\n";
		std::cout << "5) Выйти из программы\n";
		std::cout << "Выберите номер команды:\n";
		std::cin >> userInput;
		switch (userInput)
		{
			case 1:
			human = new Kid("Ходить на улицу", "Иванов Дмитрий Олегович", "мужской", 5);
			ShowInfo(human);
			break;

			case 2:
			human = new SchoolKid(25, "Петров Алексей Максимович", "мужской", 12);
			ShowInfo(human);
			break;

			case 3:
			human = new Student(100.32, "Сушко Иван Юрьевич", "мужской", 17);
			ShowInfo(human);
			break;

			case 4:
			human = new Worker(2310, "Главнее всех", "Анна Мишно Игоревна", "женский", 27);
			ShowInfo(human);
			break;

			case 5:
			isExit = true;
			std::cout << "Программа закончила свою работу\n";
			break;

			default:
			std::cout << "Такого варианта не существует.\n";
			break;
		}
		std::cout << '\n';
	}
}