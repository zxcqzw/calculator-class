#include "calculator.h"

float CCalc::plus()
{
    return m_a + m_b;
}

float CCalc::minus()
{
    return m_a - m_b;
}

float CCalc::multiply()
{
    return m_a * m_b;
}

float CCalc::divide()
{
    return m_a / m_b;
}

void CCalc::set(float a, float b)
{
    m_a = a; m_b = b;
}

float CCalc::getA()
{
    return m_a;
}

float CCalc::getB()
{
    return m_b;
}
