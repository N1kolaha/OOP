// ООПЛаб1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
double PRIMER(/*double n, double x*/) {

	const double PI = 3.1416;

	double j, k, n, x;

	std::cout << "input n and x";
	std::cin >> n;

	std::cin >> x;

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "input n and x ";
		std::cin >> n;
		std::cin >> x;
	}

	else {
		for (k = 1; k <= n; k++)
			j = ((2 * x) / ((x * x) - (k * k) * (PI * PI)));
		j = 1 / x + x * j;
		return j;

	}
}
int main()
{
	//int c = 1;
	double z;
	z = PRIMER(/*20.0, 0.5*/);
	std::cout << z;
}


