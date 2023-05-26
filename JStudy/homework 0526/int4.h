#pragma once



class int4
{
public:
    int X = 0;
    int Y = 0;
    int Z = 0;
    int W = 1;


    static const int4 Left;
    static const int4 Right;
    static const int4 Up;
    static const int4 Down;

    void operator=(const int4& _Other);

        void operator+=(const int4& _Other);

        int4 operator+(const int4& _Other) const;



};
