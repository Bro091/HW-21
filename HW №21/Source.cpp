
#include <iostream>




int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;

	std::cout << "�� �21\n������� ��� ����� -> ";
	std::cin >> x >> y;
	double* px = &x;
	double* py = &y;
	std::cout << "��������� px = " << px << std::endl;
	std::cout << "��������� py = " << py << std::endl;
	double arith = (*px + *py) / 2;

	std::cout << "��. �������������� x � y = " << arith << std::endl;






	return 0;
}