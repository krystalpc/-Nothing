#include <iostream>
#include "copeng1.h"
#include<string>

void AirlineTicket::setPassengerName(const std::string& name)
{
    mPassengerName = name;
}
void AirlineTicket::setNumberOfMiles(int miles)
{
    mNumberOfMiles = miles;
}
AirlineTicket::AirlineTicket()
    :mPassengerName("ssss")
    , mNumberOfMiles(0)
    , mHasEliteSuperRewardsStatus(false)
{
}
AirlineTicket::~AirlineTicket()
{
}
bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
    return mHasEliteSuperRewardsStatus;
}
const std::string& AirlineTicket::getPassengerName() const
{
    return mPassengerName;
}

int AirlineTicket::getNumberOfMiles() const
{
    return mNumberOfMiles;
}
double AirlineTicket::calculatePriceInDollars() const
{
    if (hasEliteSuperRewardsStatus())
    {
        return 0;
    }
    return getNumberOfMiles() * 0.1;
}

int main()
{
    AirlineTicket MyTicket;
    MyTicket.setPassengerName("ssssssss");
    MyTicket.setNumberOfMiles(700);
    double cost = MyTicket.calculatePriceInDollars();
    std::cout << "ticket is cost $" << cost << std::endl;


    std::cout << "Hello World!\n";
}


