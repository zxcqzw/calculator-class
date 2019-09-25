#ifndef _CALCULATOR_H
#define _CALCULATOR_H

class CCalc
{
private:
  float m_a, m_b;

public:
  float plus();
  float minus();
  float multiply();
  float divide();
  void set(float a, float b);
  float getA();
  float getB();
};

#endif // _CALCULATOR_H
