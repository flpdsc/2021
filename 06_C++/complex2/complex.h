#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
  double re;  // real part(실수부)
  double im;  // imagenary part(허수부)

public:
  // Complex();                      // default constructor
  // Complex(double re);             // convert constructor
  Complex(double re=0.0, double im = 0.0);  //default argument
  Complex(const Complex& rhs);    // copy constructor, right hand side
  ~Complex();                     // destructor

  Complex& operator=(const Complex& rhs);

  bool operator==(const Complex& rhs);

  Complex operator+(const Complex& rhs);
  Complex operator-(const Complex& rhs);

  void real(double re);
  void imag(double im);

  double real();
  double imag();

};

#endif
