#include <iostream>
#include "Shape.h"
#include "date.h"

int main() {
	std::cout << "Vvedite nomer zadaniya:" ;
	int nz;
	std::cin >> nz;
	if (nz == 1) {
		int a = 5;
		int b = 10;
		std::cout << a + b << std::endl;

		circle c1(10), c2(5);
		std::cout << c1 + c2/*c1.operator+(c2)*/ << std::endl;

		std::cout << c1 - c2 << std::endl;
		std::cout << c1 * c2 << std::endl;
		std::cout << c1 / c2 << std::endl;

		c2 = c1 + 7.0;
		std::cout << c2.getRadius() << std::endl;
		//std::cout << (c1 + 7.0).getRadius() << std::endl;

		//std::cout << (c1 == c2) << std::endl;

		std::cout << (c1 > c2) << std::endl;
	}
	else if (nz == 2) {
		setlocale(LC_ALL, "rus");
		int r;
		int zn;
		int pr;
		date d;
		date two;
		d.Get();
		d.print();
		std::cout << "1.��������� ���� �� ��������� ����� ����\n2.�������� �� ��������� ���� ���(�������� = =)\n3.�������� � ��������� ���� ��� (�������� +, -)\n";
		std::cin >> pr;
		if (pr == 1) {
			std::cout << "\n" << "������� 0 - ���� ��������� ���; 1 - ���� ������� ���" << std::endl;
			std::cin >> r;
			std::cout << "\n�� ������� ���� ����� ��������: ";
			std::cin >> zn;
			if (r == 0)
				d.inc(zn);
			else
				d.dec(zn);
			d.print();
		}
		else if (pr == 2) {
			std::cout << "\n������� ������ ����\n";
			two.Get();
			if (d == two) {
				std::cout << "\n���� �����!";
			}
			else{
				std::cout << "\n���� �� �����!";
			}
		}
		else if (pr == 3) {
			std::cout << "\n������� ������ ����\n";
			two.Get();
			std::cout << "\n" << "������� 0 - ����� ������� ����; 1 - ����� ������� ����" << std::endl;
			int rt;std::cin >> rt;
			if (rt == 0) {
				std::cout << d.getDay()+ two.getDay()<<":"<< std::endl;
			}
			else if (rt == 1) {
				std::cout << d.getDay() - two.getDay() << std::endl;
			}
			
		}
	}

	system("pause");
	return 0;
}