#pragma once

#include <iostream>
#include <math.h>

class Vector3D
{
private:
    double coords [3]; // координаты конца вектора
    
public:
    Vector3D(double x = 0, double y = 0, double z = 0);
    
    double dot (const Vector3D& v);    //скалярное произведение
    Vector3D add (const Vector3D& v);  //сложение
    Vector3D sub (const Vector3D& v);  //вычитание
    
    void print ();  //операции вывода значений вектора 
    friend std::ostream& operator<< (std::ostream& out, const Vector3D& v);

    double len () const; //вычисление длины вектора
    int compareLen (const Vector3D& v); //сравнение длин векторов (1 - больше, 0 - равны, -1 - меньше)
    bool compareVectors(const Vector3D& v); //так как все вектора в данном классе имеют начало в (0,0,0),
                                            //то равны будут только при совпадении координат конечных точек

    template <class T> Vector3D prod(const T &v);  //в виде шаблона
                                                   //умножение на число

};

template<class T>
inline Vector3D Vector3D::prod(const T& v)
{
    Vector3D result;
    for (int i = 0; i < 3; ++i) {
        result.coords[i] = coords[i] * v;
    }
    return result;
}
