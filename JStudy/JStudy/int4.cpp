#include"int4.h"

void int4::operator=(const int4& _Other)
{
    X = _Other.X;
    Y = _Other.Y;

};

void int4::operator+=(const int4& _Other)
{
    X += _Other.X;
    Y += _Other.Y;

};
