#include <iostream>
#include "date.h"

// void printDate(const Date *pd)
// {
//         printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);
// }

void printDate(const Date &rd)
{
  std::cout << "(" << rd.year << "/" << rd.month << "/" <<rd.day << ")" << std::endl;
}
