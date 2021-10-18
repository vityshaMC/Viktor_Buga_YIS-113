#include "Vector3D.h"

Vector3D::Vector3D(double x, double y, double z)
{
	coords[0] = x;
	coords[1] = y;
	coords[2] = z;
}

double Vector3D::dot(const Vector3D& v)
{
	double result = 0;
	for (int i = 0; i < 3; ++i) {
		result += this->coords[i] * v.coords[i];
	}
	return result;
}

Vector3D Vector3D::add(const Vector3D& v)
{
	Vector3D result;
	for (int i = 0; i < 3; ++i) {
		result.coords[i] = this->coords[i] + v.coords[i];
	}
	return result;
}

Vector3D Vector3D::sub(const Vector3D& v)
{
	Vector3D result;
	for (int i = 0; i < 3; ++i) {
		result.coords[i] = this->coords[i] - v.coords[i];
	}
	return result;
}

void Vector3D::print()
{
	std::cout << "( " << this->coords[0]
			  << ", " << this->coords[1]
			  << ", " << this->coords[2]
			  << " )\n";
}

double Vector3D::len() const
{
	return sqrt(powf(this->coords[0], 2)
			  + powf(this->coords[1], 2)
			  + powf(this->coords[2], 2));
}

int Vector3D::compareLen(const Vector3D& v)
{
	return this->len() > v.len() ? 1 : this->len() == v.len() ? 0 : -1;
}

bool Vector3D::compareVectors(const Vector3D& v)
{
	for (int i = 0; i < 3; ++i) {
		if (this->coords[0] != v.coords[i]) {
			return false;
		}
	}
	return true;
}

std::ostream& operator<<(std::ostream& out, const Vector3D& v)
{
	out << "( " << v.coords[0]
		<< ", " << v.coords[1]
		<< ", " << v.coords[2]
		<< " )\n";
	return out;
}
