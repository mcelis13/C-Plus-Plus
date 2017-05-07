#ifndef COAT_H_INCLUDED
#define COAT_H_INCLUDED
#include <iostream>
using namespace std;

    string CoatType
    {
        "Pea Coat",
        "Puff Ball",
        "Cool Coat",
        "Hippster Coat"
    };

    enum Color
    {
        blue,
        grey,
        black,
        white
    };

    string Size
    {
        Extra-Small,
        Small,
        Medium,
        Large
    };

    float Price
    {
        25.99,
        35.99,
        45.99
    };

class Coat
{
protected:
    Color Color;
    string Size;
    float Price;
    string CoatType;


public:

    Color Coat::GetColor()
    {
        return Color;
    }
    string Coat::GetSize()
    {
        return Size;
    }
    float Coat::GetPrice()
    {
        return Price;
    }
};

#endif // COAT_H_INCLUDED
