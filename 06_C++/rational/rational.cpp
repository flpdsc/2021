#include "rational.h"

Rational::Rational()
{
    this->n = 0;
    this->d = 1;
}

Rational::Rational(int num)
{
  this->n = num;
  this->d = 1;
}

Rational::Rational(int num, int den)
{
  this->n = num;
  this->d = den;
}

Rational::~Rational()
{

}

void Rational::num(int num)
{
  this->n = num;
}

void Rational::den(int den)
{
  this->d = den;
}

int Rational::num()
{
  return this->n;
}

int Rational::den()
{
  return this->d;
}
