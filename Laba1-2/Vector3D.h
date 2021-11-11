#include <iostream>
#include <cmath>

#ifndef VECTOR3D_H
#define VECTOR3D_H

/// <summary>
///	Шаблонный Класс задаваемый тройкой координат
/// </summary>
template <typename T>
class Vector3D
{
private:
	/// <summary>
	/// координаты вектора
	/// </summary>
	double* _coordinates;
	/// <summary>
	/// размер вектора
	/// </summary>
	const size_t _size = 3;
	void SetDefultValue()
	{
		for (size_t i = 0; i < _size; i++)
		{
			_coordinates[i] = T();
		}
	}

public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Vector3D()
	{
		_coordinates = new T[_size];
		SetDefultValue();
	}

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="x"></param>
	/// <param name="y"></param>
	/// <param name="z"></param>
	Vector3D(double x, double y, double z)
	{
		_coordinates = new T[_size];
		SetDefultValue();
		_coordinates[0] = x;
		_coordinates[1] = y;
		_coordinates[2] = z;
	}

	/// <summary>
	/// Конструктор копирования
	/// </summary>
	/// <param name="vecotor"></param>
	Vector3D(const Vector3D<T>& vecotor)
	{
		_coordinates = new T[_size];
		for (size_t i = 0; i < _size; i++)
		{
			_coordinates[i] = vecotor._coordinates[i];
		}
	}

	// Деструктор
	~Vector3D()
	{
		delete[] _coordinates;
	}

	/// <summary>
	/// Векторное произведение
	/// </summary>
	/// <param name="vector"></param>
	/// <returns></returns>
	double dot(const Vector3D<T>& vector)
	{
		double result = 0;
		for (size_t i = 0; i < _size; ++i)
		{
			result += _coordinates[i] * vector._coordinates[i];
		}
		return result;
	}

	/// <summary>
	/// Сложение вектор
	/// </summary>
	/// <param name="vector"></param>
	/// <returns>вектор суммы</returns>
	Vector3D<T> Add(const Vector3D<T>& vector)
	{
		Vector3D<T> result;
		for (size_t i = 0; i < _size; ++i)
		{
			result._coordinates[i] = _coordinates[i] + vector._coordinates[i];
		}
		return Vector3D<T>(result);
	}


	/// <summary>
	/// Вычиает вектор
	/// </summary>
	/// <param name="vector"></param>
	/// <returns>разность векторов</returns>
	Vector3D<T> Sub(const Vector3D<T>& vector)
	{
		Vector3D result;
		for (size_t i = 0; i < _size; ++i)
		{
			result._coordinates[i] = _coordinates[i] - vector._coordinates[i];
		}
		return result;
	}

	/// <summary>
	/// Вывод вектора в консоль
	/// </summary>
	void Print()
	{
		std::cout << "(";
		for (size_t i = 0; i < _size - 1; i++)
		{
			std::cout << _coordinates[i] << ", ";
		}
		std::cout << _coordinates[_size - 1] << ")";
	}

	/// <summary>
	/// Перегрузка оператора вывода
	/// </summary>
	/// <param name="out"></param>
	/// <param name="vector"></param>
	/// <returns></returns>
	friend std::ostream& operator<< (std::ostream& out, const Vector3D<T>& vector)
	{
		out << "(";
		for (size_t i = 0; i < vector._size - 1; i++)
		{
			out << vector._coordinates[i] << ", ";
		}
		out << vector._coordinates[vector._size - 1] << ")";
		return out;
	}

	/// <summary>
	/// Длинна вектора
	/// </summary>
	/// <returns>длинну вектора</returns>
	double Length() const
	{
		double sum = 0;
		for (size_t i = 0; i < _size; i++)
		{
			sum += _coordinates[i] * _coordinates[i];
		}
		return sqrt(sum);
	}

	/// <summary>
	/// Сравнение длин векторов
	/// </summary>
	/// <param name="length2"></param>
	/// <returns>
	/// 1 если длинна левого операнда больше длинны второго операнда
	/// 0 если длинны равны
	/// -1 если длинна правого больше левого
	/// </returns>
	int Compare(const double& length2)
	{
		if (length2 < 0)
		{
			throw std::invalid_argument("Length cannot be negative!");
		}
		double length1 = Length();
		return length1 > length2 ? 1 : length1 == length2 ? 0 : -1;
	}

	/// <summary>
	/// Поэлементное сравнение векторов
	/// </summary>
	/// <param name="vector"></param>
	/// <returns>true если все элементы совпали с vector, иначе false</returns>
	bool Compare(const Vector3D<T>& vector)
	{
		for (size_t i = 0; i < _size; ++i)
		{
			if (_coordinates[i] != vector._coordinates[i])
			{
				return false;
			}
		}
		return true;
	}

	/// <summary>
	/// Поэлементное перемножение векторов
	/// </summary>
	/// <param name="scalar"></param>
	/// <returns></returns>
	Vector3D<T> Mul(const T& scalar)
	{
		Vector3D<T> result;
		for (size_t i = 0; i < _size; ++i)
		{
			result._coordinates[i] = _coordinates[i] * scalar;
		}
		return result;
	}
};
#endif