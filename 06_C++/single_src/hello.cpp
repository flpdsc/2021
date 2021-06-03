#include <iostream>

int main()
{
  std::cout << "hello, world" << std::endl;

  //std::cout << "hello, world";
  //std::cout.operator<<("hello, world");  //멤버함수형태
  ::operator<<(std::cout, "hello, world"); //전역함수형태

  //std::cout << std::endl;
  std::cout.operator<<(std::endl);
  //operator<<(std::cout, std::endl); //전역함수형태

  ::operator<<(std::cout, "hello, world").operator<<(std::endl);

  return 0;
}


// a + b
// add(a, b)
// operator+(a, b)
// a.operator+(b)
