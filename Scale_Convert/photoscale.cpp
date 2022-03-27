#include "photoscale.h"



PhotoScale::PhotoScale(double x_orig, double x_photo, double y_orig, double y_photo)
    :m_x_orig(x_orig), m_x_photo(x_photo), m_y_orig(y_orig), m_y_photo(y_photo), m_x_factor(0), m_y_factor(0), m_x_messure(0), m_y_messure(0), m_x_calc(0), m_y_calc(0)
{
    m_x_factor = m_x_photo / m_x_orig;
    m_y_factor = m_y_photo / m_y_orig;
}

void PhotoScale::calculate(void)
{
    m_x_calc = m_x_messure * m_x_factor;
    m_y_calc = m_y_messure * m_y_factor;
}

void PhotoScale::setMessure(double x, double y)
{
    m_x_messure = x;
    m_y_messure = y;
}

void PhotoScale::getFactor(double &x, double &y)
{
    x = m_x_factor;
    y = m_y_factor;
}

void PhotoScale::getCalc(double &x_calc, double &y_calc)
{
    x_calc = m_x_calc;
    y_calc = m_y_calc;
}

PhotoScale::~PhotoScale()
{

};
