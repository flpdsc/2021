#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
  double re;  //real part(실수부)
  double im;  // imagenary part(허수)

public:
  Complex();                      //default constructor
  Complex(double re);             //convert constructor
  Complex(double re, double im);  //
  ~Complex();                     //destructor
  //똑같은 이름의 함수 사용 가능

  void real(double re);
  void imag(double im);

  double real();
  double imag();

};

#endif
