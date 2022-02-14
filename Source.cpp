#define NOMINMAX

#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <climits>
#include <cmath>

#include "Carriage.h"
#include "Compartment.h"
#include "Econom.h"
#include "Sitting.h"

void CheckInput(int &input_buff, const int &count)
{

	if (count == 0)
	{

		while (!std::cin.good() || std::cin.peek() != '\n' || (input_buff < 0 || input_buff > 4))		//Проверка на то, что int
		{

			std::cerr << "Некорректный ввод данных!!!" << std::endl;
			std::cout << "Вводимое поле должно быть целым положительным числом!!!" << std::endl;
			std::cout << "Повторите ввод!!!" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cin >> input_buff;
			std::cout << std::endl;

		}

	}

	if (count == 1)
	{

		while (!std::cin.good() || std::cin.peek() != '\n' || (input_buff < 0 || input_buff > 3))		//Проверка на то, что int
		{

			std::cerr << "Некорректный ввод данных!!!" << std::endl;
			std::cout << "Вводимое поле должно быть целым положительным числом!!!" << std::endl;
			std::cout << "Повторите ввод!!!" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cin >> input_buff;
			std::cout << std::endl;

		}

	}

	if (count == 2)
	{

		while (!std::cin.good() || std::cin.peek() != '\n' || input_buff <= 0)		//Проверка на то, что int
		{

			std::cerr << "Некорректный ввод данных!!!" << std::endl;
			std::cout << "Вводимое поле должно быть целым положительным числом!!!" << std::endl;
			std::cout << "Повторите ввод!!!" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cin >> input_buff;
			std::cout << std::endl;

		}

	}

	if (count == 3)
	{

		while (!std::cin.good() || std::cin.peek() != '\n' || (input_buff < 0 || input_buff > 50))		//Проверка на то, что int
		{

			std::cerr << "Некорректный ввод данных!!!" << std::endl;
			std::cout << "Вводимое поле должно быть целым положительным числом!!!" << std::endl;
			std::cout << "Повторите ввод!!!" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cin >> input_buff;
			std::cout << std::endl;

		}

	}

	if (count == 4)
	{

		while (!std::cin.good() || std::cin.peek() != '\n' || (input_buff < 0 || input_buff > 27))		//Проверка на то, что int
		{

			std::cerr << "Некорректный ввод данных!!!" << std::endl;
			std::cout << "Вводимое поле должно быть целым положительным числом!!!" << std::endl;
			std::cout << "Повторите ввод!!!" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cin >> input_buff;
			std::cout << std::endl;

		}

	}

	if (count == 5)
	{

		while (!std::cin.good() || std::cin.peek() != '\n' || (input_buff < 0 || input_buff > 18))		//Проверка на то, что int
		{

			std::cerr << "Некорректный ввод данных!!!" << std::endl;
			std::cout << "Вводимое поле должно быть целым положительным числом!!!" << std::endl;
			std::cout << "Повторите ввод!!!" << std::endl;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cin >> input_buff;
			std::cout << std::endl;

		}

	}



}

void CreateSitting()
{

	int passengers{};
	int price{};
	int choice{};
	int years{};

	std::cout << "Введите кол-во пассажиров: ";
	std::cin >> passengers;
	CheckInput(passengers, 3);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите цену билета: ";
	std::cin >> price;
	CheckInput(price, 2);
	std::cout << std::endl;
	std::cout << std::endl;

	Sitting sitting{ price, passengers };

	while (choice != 3)
	{

		std::cout << "Выберите следующее действие: " << std::endl;
		std::cout << "1 - Вывести информацию о вагоне" << std::endl;
		std::cout << "2 - Рассчитать прибыль с использования вагона" << std::endl;
		std::cout << "3 - Закончить работу с вагоном" << std::endl;
		std::cout << "Введите номер действия: ";
		std::cin >> choice;
		CheckInput(choice, 1);
		std::cout << std::endl;
		std::cout << std::endl;

		if (choice == 1)
		{

			sitting.displayInfo();
			sitting.sittingInfo();

		}

		if (choice == 2)
		{

			std::cout << "Введите кол-во лет: ";
			std::cin >> years;
			CheckInput(years, 2);
			std::cout << std::endl;
			std::cout << "За " << years << "лет использования сидячего вагона ";
			std::cout << "с ценой билета в " << price << " руб. ";
			std::cout << "прибыль составит: ";
			std::cout << sitting.makeMoney(years) << std::endl;

		}

	}

}

void CreateEconom()
{

	int topPassengers{};
	int topPrice{};
	int bottomPassengers{};
	int bottomPrice{};
	int choice{};
	int years{};

	std::cout << "Введите кол-во пассажиров на нижних полках: ";
	std::cin >> bottomPassengers;
	CheckInput(bottomPassengers, 4);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите цену билета на нижнюю полку: ";
	std::cin >> bottomPrice;
	CheckInput(bottomPrice, 2);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите кол-во пассажиров на верхних полках: ";
	std::cin >> topPassengers;
	CheckInput(topPassengers, 4);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите цену билета на верхнюю полку: ";
	std::cin >> topPrice;
	CheckInput(topPrice, 2);
	std::cout << std::endl;
	std::cout << std::endl;

	Econom econom{ topPrice, bottomPrice, topPassengers, bottomPassengers };

	while (choice != 3)
	{

		std::cout << "Выберите следующее действие: " << std::endl;
		std::cout << "1 - Вывести информацию о вагоне" << std::endl;
		std::cout << "2 - Рассчитать прибыль с использования вагона" << std::endl;
		std::cout << "3 - Закончить работу с вагоном" << std::endl;
		std::cout << "Введите номер действия: ";
		std::cin >> choice;
		CheckInput(choice, 1);
		std::cout << std::endl;
		std::cout << std::endl;

		if (choice == 1)
		{

			econom.displayInfo();
			econom.economInfo();

		}

		if (choice == 2)
		{

			std::cout << "Введите кол-во лет: ";
			std::cin >> years;
			CheckInput(years, 2);
			std::cout << std::endl;
			std::cout << "За " << years << "лет использования плацкартного вагона";
			std::cout << " с ценой билета за верхнее место в " << topPrice << " руб.";
			std::cout << " и ценой билета за нижнее место в " << bottomPrice << " руб. ";
			std::cout << "прибыль составит: ";
			std::cout << econom.makeMoney(years) << std::endl;

		}

	}

}

void CreateCompartment()
{

	int topPassengers{};
	int topPrice{};
	int bottomPassengers{};
	int bottomPrice{};
	int choice{};
	int years{};

	std::cout << "Введите кол-во пассажиров на нижних полках: ";
	std::cin >> bottomPassengers;
	CheckInput(bottomPassengers, 5);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите цену билета на нижнюю полку: ";
	std::cin >> bottomPrice;
	CheckInput(bottomPrice, 2);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите кол-во пассажиров на верхних полках: ";
	std::cin >> topPassengers;
	CheckInput(topPassengers, 5);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Введите цену билета на верхнюю полку: ";
	std::cin >> topPrice;
	CheckInput(topPrice, 2);
	std::cout << std::endl;
	std::cout << std::endl;

	Compartment compartment{ topPrice, bottomPrice, topPassengers, bottomPassengers };

	while (choice != 3)
	{

		std::cout << "Выберите следующее действие: " << std::endl;
		std::cout << "1 - Вывести информацию о вагоне" << std::endl;
		std::cout << "2 - Рассчитать прибыль с использования вагона" << std::endl;
		std::cout << "3 - Закончить работу с вагоном" << std::endl;
		std::cout << "Введите номер действия: ";
		std::cin >> choice;
		CheckInput(choice, 1);
		std::cout << std::endl;
		std::cout << std::endl;

		if (choice == 1)
		{

			compartment.displayInfo();
			compartment.compartmentInfo();

		}

		if (choice == 2)
		{

			std::cout << "Введите кол-во лет: ";
			std::cin >> years;
			CheckInput(years, 2);
			std::cout << std::endl;
			std::cout << "За " << years << "лет использования плацкартного вагона";
			std::cout << " с ценой билета за верхнее место в " << topPrice << " руб.";
			std::cout << " и ценой билета за нижнее место в " << bottomPrice << " руб. ";
			std::cout << "прибыль составит: ";
			std::cout << compartment.makeMoney(years) << std::endl;

		}

	}

}

void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choice{};

	std::cout << "Разработать программу с использованием наследования классов," << std::endl;
	std::cout << "реализующую классы: Железнодорожный вагон(вместимость, тип вагона, стоимость" << std::endl;
	std::cout << "провоза одного пассажира на верхней и нижней полках), Сидячий вагон(кол-во" << std::endl;
	std::cout << "пассажиров), Плацкартный вагон(занято верхних мест, занято нижних мест)," << std::endl;
	std::cout << "Купейный(занято верхних мест, занято нижних мест). В базовом классе предусмотреть" << std::endl;
	std::cout << "метод вывода параметров вагона. В производных классах предусмотреть методы расчета" << std::endl;
	std::cout << "выручки за использование вагона, количества лет эксплуатации вагона." << std::endl;
	std::cout << std::endl;

	while (choice != 4)
	{

		std::cout << "Выберите, что надо сделать: " << std::endl;
		std::cout << "1 - Создать и заполнить сидячий вагон" << std::endl;
		std::cout << "2 - Создать и заполнить плацкартный вагон" << std::endl;
		std::cout << "3 - Создать и заполнить купейный вагон" << std::endl;
		std::cout << "4 - Выйти из программы" << std::endl;
		std::cout << std::endl;
		std::cout << "Введите номер действия: ";
		std::cin >> choice;
		CheckInput(choice, 0);
		std::cout << std::endl;
		std::cout << std::endl;


		if (choice == 1)
		{

			CreateSitting();

		}

		if (choice == 2)
		{

			CreateEconom();

		}

		if (choice == 3)
		{

			CreateCompartment();

		}

	}

}