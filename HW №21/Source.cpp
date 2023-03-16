
#include <iostream>




int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;

	std::cout << "ДЗ №21\nВведите два числа -> ";
	std::cin >> x >> y;
	double* px = &x;
	double* py = &y;
	std::cout << "Указатель px = " << px << std::endl;
	std::cout << "Указатель py = " << py << std::endl;
	double arith = (*px + *py) / 2;

	std::cout << "Ср. Арифмитическое x и y = " << arith << std::endl;






	return 0;
}