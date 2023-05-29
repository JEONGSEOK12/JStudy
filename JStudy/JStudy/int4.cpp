
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
    

    int4 int4::operator+(const int4& _Other)
    {
        int4 Return;
        Return.X = X + _Other.X;
        Return.Y = Y + _Other.Y;

        return Return;
    };


    bool int4::operator==(const int4& _Other)
    {
        int4 Return;
        if (Return.X == _Other.X && Return.Y == _Other.Y)
        {

            return 1;
        }
        else
        {
            return 0;
        }


    }