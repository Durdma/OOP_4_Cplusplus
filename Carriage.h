#pragma once

#include <string>
#include <iostream>

class Carriage
{

protected:

	std::string m_typeOfCarriage;
	int m_capacity;
	int m_priceTop;
	int m_priceBottom;


public:

	Carriage(std::string, int, int, int);
	~Carriage();

	void displayInfo();

};



// START OF CONSTRUCTORS AND DESTRUCTORS

Carriage::Carriage(std::string typeOfCarriage = "None", int capacity = 50,
	int priceTop = 1500, int priceBottom = 2000)
	: m_typeOfCarriage{ typeOfCarriage }, m_capacity{ capacity },
	m_priceTop{ priceTop }, m_priceBottom{ priceBottom }
{}



Carriage::~Carriage()
{}

// END OF CONSTRUCTORS AND DESTRUCTORS



// START OF METHODS

void Carriage::displayInfo()
{

	std::cout << "Информация о вагоне:" << std::endl;
	std::cout << std::endl;
	std::cout << "Тип вагона: " << m_typeOfCarriage << std::endl;
	std::cout << "Вместимость вагона: " << m_capacity << std::endl;
	std::cout << "Цена верхних мест: " << m_priceTop << "руб." << std::endl;
	std::cout << "Цена нижних мест: " << m_priceBottom << "руб." << std::endl;

}

// END OF METHODS
