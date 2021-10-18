// Exercise_3_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Car.h"
#include "Lorry.h"

void substitutionPrinciple(Car &);

int main()
{
    setlocale(LC_ALL, "Russian");

    Car car("Volvo XC40 Recharge", 3, 150);

    std::cout << car;
    car.setMark("Volvo XC90 Recharge");
    car.setCountCylinders(4);
    car.setEnginePower(235);
    std::cout << car;

    Lorry carL("марка грузовика", 6, 200, 5000);

    std::cout << carL;
    carL.setMark("другая марка грузовика");
    carL.setCountCylinders(8);
    carL.setEnginePower(235);
    carL.setCarrying(4999);
    std::cout << carL;

    substitutionPrinciple(car);
    substitutionPrinciple(carL);
}

void substitutionPrinciple(Car &c)
{
    std::cout << "_______________________\nДЕМОНСТРАЦИЯ ЗАМЕЩЕНИЯ:\n";
    c.show();
    std::cout <<"_______________________\n";
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
