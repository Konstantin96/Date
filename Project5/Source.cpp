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
		std::cout << "1.Изменение даты на указанное число дней\n2.Проверка на равенство двух дат(операция = =)\n3.Сложение и вычитание двух дат (операции +, -)\n";
		std::cin >> pr;
		if (pr == 1) {
			std::cout << "\n" << "Введите 0 - если прибавить дни; 1 - если убавить дни" << std::endl;
			std::cin >> r;
			std::cout << "\nНа сколько дней нужно изменить: ";
			std::cin >> zn;
			if (r == 0)
				d.inc(zn);
			else
				d.dec(zn);
			d.print();
		}
		else if (pr == 2) {
			std::cout << "\nВведите вторую дату\n";
			two.Get();
			if (d == two) {
				std::cout << "\nДаты равны!";
			}
			else{
				std::cout << "\nДаты не равны!";
			}
		}
		else if (pr == 3) {
			std::cout << "\nВведите вторую дату\n";
			two.Get();
			std::cout << "\n" << "Введите 0 - чтобы сложить даты; 1 - чтобы вычесть даты" << std::endl;
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