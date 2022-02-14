#pragma once

#include "Carriage.h"

class Compartment:
    public Carriage
{

private:

    int m_topSeat;
    int m_bottomSeat;

public:

    Compartment(int, int, int, int, std::string, int);
    ~Compartment();

    void compartmentInfo();
    int makeMoney(const int &);

};



Compartment::Compartment(int priceTop = 3000, int priceBottom = 4000,
    int topSeat = 18, int bottomSeat = 18,
    std::string typeOfCarriage = "Купейный", int capacity = 36)
    : Carriage(typeOfCarriage, capacity, priceTop, priceBottom),
    m_topSeat{ topSeat }, m_bottomSeat{ bottomSeat }
{}

Compartment::~Compartment()
{}



void Compartment::compartmentInfo()
{

    std::cout << "Количество пассажиров на верхних местах: ";
    std::cout << m_topSeat << std::endl;
    std::cout << "Количество пассажиров на нижних местах: ";
    std::cout << m_bottomSeat << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

}

int Compartment::makeMoney(const int &years)
{

    int res{};

    res = (18 * m_priceTop + 18 * m_priceBottom) * years;

    return res;

}


