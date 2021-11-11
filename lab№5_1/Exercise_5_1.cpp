// Exercise_5_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;
//создаем классы наших ошибок в соотвествии с заданием
class MyException
{
public:
    virtual string report() = 0;
};

class MyException_empty : MyException
{
    string report() { return "Пустой пользовательский класс исключения."; }
};

class MyException_full
{
private:
    double a, b, c;
public:
    MyException_full(double a1, double b1, double c1)
        : a(a1), b(b1), c(c1) {}

    string report() {
        string msg = "Пользовательский класс исключения с полями.\n";
        msg += "Одна из переменных задана неверно:\n";
        msg += "a = " + to_string(a) + "\n";
        msg += "b = " + to_string(b) + "\n";
        msg += "c = " + to_string(c) + "\n";
        return msg;
    }
};

class MyException_heir : public exception, public MyException
{
private:
    double a, b, c;
    string error;
public:
    MyException_heir(double a1, double b1, double c1, string str)
        : a(a1), b(b1), c(c1), error(str) {}
    string report() {
        string msg = "Пользовательский класс исключения унаследовавший "
            "базовый class exception.\n";
        msg += "Одна из переменных задана неверно:\n";
        msg += "a = " + to_string(a) + "\n";
        msg += "b = " + to_string(b) + "\n";
        msg += "c = " + to_string(c) + "\n";
        return msg;
    }
};
//объявляем функции для демонстрации разных способов 
//обрабатки исключения
double squareOfTriangle(double, double, double);
double squareOfTriangle_Exs(double, double, double);
double squareOfTriangle_Ex_RE(double, double, double);
double squareOfTriangle_Ex_MyEx(double, double, double);

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Обработка ошибки без throw: " << squareOfTriangle(1, -1, 1) << endl;
    //если в блоке try что-то вызывает исключение, то весь блок прекращает свое выполнение
    //и начинается поиск подъодящего по параметрам блока catch
    //как только такой блок найден, то исключение считается обработанным, вне зависимости
    //от действий в этом catch
    try {
        squareOfTriangle_Exs(1, 1, -1);
    }
    catch (int a) {
        cout << "Ошибка с типом int: " << a << endl;
    }
   

    try {
        squareOfTriangle_Ex_RE(1, -1, 1);
    }
    catch (exception& ex) {
        cout << "Ошибка с типом exception: " << ex.what() << endl;
    }

    try {
        squareOfTriangle_Ex_MyEx(1, 1, -1);
    }
    catch (MyException_full& ex) {
        cout << "Ошибка с типом MyException_full: " << ex.report() << endl;
    }
    catch (MyException& ex) {
        cout << "Ошибка с типом MyException: " << ex.report() << endl;
    }
    catch (exception& ex) {
        cout << "Ошибка с типом exception: " << ex.what() << endl;
    }

    return 0;
}

double squareOfTriangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0) {
        return -1;
    }

    double p = (a + b + c) / 2;
    double S = (p * (p - a) * (p - b) * (p - c)) * 0.5;
    return S;
}

double squareOfTriangle_Exs(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0) {
        throw - 1;
    }
    return squareOfTriangle(a, b, c);
}

double squareOfTriangle_Ex_RE(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0) {
        throw exception(std::runtime_error("Плохой аргумент."));
    }
    return squareOfTriangle(a, b, c);
}

double squareOfTriangle_Ex_MyEx(double a, double b, double c)
{
    if (a <= 0) {
        throw MyException_empty();
    }
    if (b <= 0) {
        throw MyException_full(a, b, c);
    }
    if (c <= 0) {
        throw MyException_heir(a, b, c, "my error");
    }
    return squareOfTriangle(a, b, c);
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
