#pragma once

#include "Carriage.h"

class Econom:
    public Carriage
{

private:

    int m_topSeat;
    int m_bottomSeat;

public:

    Econom(int, int, int, int, std::string, int);
    ~Econom();

    void economInfo();
    int makeMoney(const int &);

};



// START OF CONSTRUCTORS AND DESTRUCTORS

Econom::Econom(int priceTop = 1500, int priceBottom = 2000,
    int topSeat = 27, int bottomSeat = 27,
    std::string typeOfCarriage = "Плацкартный", int capacity = 54)
    : Carriage(typeOfCarriage, capacity, priceTop, priceBottom),
    m_topSeat{ topSeat }, m_bottomSeat{ bottomSeat }
{}

Econom::~Econom()
{}

// END OF CONSTRUCTORS AND DESTRUCTORS



// START OF METHODS

void Econom::economInfo()
{

    std::cout << "Количество пассажиров на верхних местах: ";
    std::cout << m_topSeat << std::endl;
    std::cout << "Количество пассажиров на нижних местах: ";
    std::cout << m_bottomSeat << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

}

int Econom::makeMoney(const int &years)
{

    int res{};

    res = (27 * m_priceTop + 27 * m_priceBottom) * years;

    return res;

}

// END OF METHODS