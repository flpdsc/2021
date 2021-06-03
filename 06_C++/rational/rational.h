#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private:
  int n;  //멤버변수 .. 충돌
  int d;

public:
  Rational();
  Rational(int num);
  Rational(int num, int den);
  ~Rational();

  void num(int num);
  void den(int den);

  int num();
  int den();
};

#endif
