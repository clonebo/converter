#ifndef PHOTOSCALE_H
#define PHOTOSCALE_H

#include <QWidget>


class PhotoScale : public QWidget
{
public:
    PhotoScale(double x_orig, double x_photo, double y_orig, double y_photo);
    ~PhotoScale();

public:
    void calculate(); //calculates the real lenght with the x and y factors

public:
    void setMessure(double x, double y);
    void getFactor(double &x, double &y);
    void getCalc(double &x_calc, double &y_calc);


private:
    double m_x_orig;
    double m_x_photo;
    double m_y_orig;
    double m_y_photo;
    double m_x_factor;
    double m_y_factor;
    double m_x_messure;
    double m_y_messure;
    double m_x_calc;
    double m_y_calc;

};

#endif // PHOTOSCALE_H
