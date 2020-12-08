#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data1,data2;
    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalcnt = data1.units_sold + data2.units_sold;
        double totalrevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalcnt << " " << totalrevenue << " ";
        if(totalcnt != 0)
        std::cout << totalrevenue/totalcnt << std::endl;
        else
        std::cout << "(no sales)"<< std::endl;
        return 0;
    }
    else
    {
        std::cerr << "data must refer to the ssame isbn" << std::endl
    }    
    return -1;
}
