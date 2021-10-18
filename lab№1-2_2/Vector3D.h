#pragma once

#include <iostream>
#include <math.h>

class Vector3D
{
private:
    double coords [3]; // ���������� ����� �������
    
public:
    Vector3D(double x = 0, double y = 0, double z = 0);
    
    double dot (const Vector3D& v);    //��������� ������������
    Vector3D add (const Vector3D& v);  //��������
    Vector3D sub (const Vector3D& v);  //���������
    
    void print ();  //�������� ������ �������� ������� 
    friend std::ostream& operator<< (std::ostream& out, const Vector3D& v);

    double len () const; //���������� ����� �������
    int compareLen (const Vector3D& v); //��������� ���� �������� (1 - ������, 0 - �����, -1 - ������)
    bool compareVectors(const Vector3D& v); //��� ��� ��� ������� � ������ ������ ����� ������ � (0,0,0),
                                            //�� ����� ����� ������ ��� ���������� ��������� �������� �����

    template <class T> Vector3D prod(const T &v);  //� ���� �������
                                                   //��������� �� �����

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
