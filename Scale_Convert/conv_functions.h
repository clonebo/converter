#ifndef CONV_FUNCTIONS_H
#define CONV_FUNCTIONS_H

#include <QString>


/*
*********************************
 * Qstring <-> double conversions
*********************************
*/

double qstring_to_double(QString input)
{
    bool ok;
    double d;
    d = input.toDouble(&ok);
    return d;
}


QString double_to_qstring(double value)
{
   return QString::number(value);
}

/*
**********************************
 * Imperial conversion
**********************************
*/

double ft_to_inch(double value)
{
    return value * 12;
}

void inch_to_ft(double &inch, double &ft)
{
    int trunk = (int)inch; //truncat the decimals from inch
    ft = trunk * 0.0833333333; //convert the trunkated inch to ft
    int trunk2 = (int)ft; //save the decimals from the ft
    inch = (inch - trunk) + ( (ft - trunk2) * 12); //calculate the leftover inch
    ft -= (ft - trunk2); //remove decimals from ft
}


/*
**********************************
 * Imperial to metric conversion
**********************************
*/

double inch_to_mm(double value)
{
    return value * 26.34;
}

double lbs_to_kg(double value)
{
    return value * 0.45359237;
}


/*
**********************************
 * Metric to imperial conversion
**********************************
*/

double mm_to_inch(double value)
{
    return value / 26.34;
}

double kg_to_lbs(double value)
{
    return value / 2.2046226218487757;
}


/*
**********************************
 * Scale conversion
**********************************
*/

double mm_to_scale(double value, QString scale)
{
    if (scale == "1/29")
        return value / 29;
    if (scale == "1/24")
        return value / 24;
    if (scale == "1/20")
        return value / 20;
    return 0;
}

double scale_to_mm(double value, QString scale)
{
    if (scale == "1/29")
        return value * 29;
    if (scale == "1/24")
        return value * 24;
    if (scale == "1/20")
        return value * 20;
    return 0;
}

double kg_to_scale(double value, QString scale)
{
    if (scale == "1/29")
        return value / pow(29,3);
    if (scale == "1/24")
        return value / pow(24,3);
    if (scale == "1/20")
        return value / pow(20,3);
    return 0;
}

double scale_to_kg(double value, QString scale)
{
    if (scale == "1/29")
        return value * pow(29,3);
    if (scale == "1/24")
        return value * pow(24,3);
    if (scale == "1/20")
        return value * pow(20,3);
    return 99;
}




#endif // CONV_FUNCTIONS_H
