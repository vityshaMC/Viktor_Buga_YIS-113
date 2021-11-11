#include "Vector3D.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		Vector3D<double> a(1, 1, 1);
		Vector3D<double> b(2, 2, 2);

		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
		std::cout << a << " + " << b << " = " << a.Add(b) << '\n';
		std::cout << a << " - " << b << " = " << a.Sub(b) << '\n';
		std::cout << a << " . " << b << " = " << a.dot(b) << '\n';
		std::cout << "len(" << a << ") = " << a.Length() << '\n';
		std::cout << "len(" << b << ") = " << b.Length() << '\n';
		std::cout << "Сравение по длинне вектора: \n";
		std::cout << "1 - длина левого операнда больше,\n0 - равенство длин,\n-1 - длина правого операнда больше" << '\n';
		std::cout << "len(" << a << ") <> len(" << b << ") : " << a.Compare(b.Length()) << '\n';
		std::cout << "len(" << b << ") <> len(" << a << ") : " << b.Compare(a.Length()) << '\n';
		std::cout << "len(" << b << ") <> len(" << b << ") : " << b.Compare(b.Length()) << '\n';
		std::cout << "Сравение по элементам вектора: \n";
		std::cout << a << " == " << a << " = " << (a.Compare(a) ? "true" : "false") << '\n';
		std::cout << a << " * 3 = " << a.Mul(3) << '\n';;
		std::cout << a << " * 2.1 = " << a.Mul(2.1) << '\n';;
	}
	catch (const std::invalid_argument& err)
	{
		std::cout << "invalid_argument " << err.what() << '\n';
	}

	system("pause");
	return 0;
}