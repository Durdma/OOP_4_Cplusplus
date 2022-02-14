#pragma once

#include "Carriage.h"

class Sitting:
    public Carriage
{

private:

    int m_passengers;

public:

    Sitting(int, int, std::string, int);
    ~Sitting();

    void sittingInfo();
    int makeMoney(int);

};



// START OF CONSTRUCTORS AND DESTRUCTORS

Sitting::Sitting(int priceBottom = 2000, int passangers = 50,
    std::string typeOfCarriage = "Сидячий", int capacity = 50)
    : Carriage(typeOfCarriage, capacity, 0, priceBottom),
    m_passengers(passangers)
{}

Sitting::~Sitting()
{}

// END OF CONSTRUCTORS AND DESTRUCTORS



// START OF METHODS

void Sitting::sittingInfo()
{

    std::cout << "Количество пассажиров: " << m_passengers << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

}

int Sitting::makeMoney(int years)
{

    int res{};

    res = m_capacity * m_priceBottom * years;

    return res;

}

// END OF METHODS