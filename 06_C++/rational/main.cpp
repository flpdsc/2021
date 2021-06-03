#include <iostream>
#include "rational.h"

int main()
{

  Rational r1;   // 0/1
  Rational r2(3); // 3/1
  Rational r3(3, 4); // 3/4


  std::cout << "r1 : " << r1.num() << "/" << r1.den()  <<std::endl;
  std::cout << "r2 : " << r2.num() << "/" << r2.den()  <<std::endl;
  std::cout << "r3 : " << r3.num() << "/" << r3.den()  <<std::endl;

  Rational r4;

  return 0;
}
