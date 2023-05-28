
#include "int4.h"


void int4::operator=(const int4& _Other)
{
    X = _Other.X;
    Y = _Other.Y;
    Z = _Other.Z;
    W = _Other.W;
};

    void int4::operator+=(const int4& _Other)
    {
        X += _Other.X;
        Y += _Other.Y;
        Z += _Other.Z;
        W += _Other.W;
    };
    

