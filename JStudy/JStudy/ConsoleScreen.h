#pragma once


#include "int4.h"
#include "GVars.h"




class ConsoleScreen
{
public:
    ConsoleScreen();


        void Init(char _BaseCh);


        void SetPixel(const int4& _Pos, char _Ch);


        void Clear();


    void Print();



protected:


private:


    char BaseCh = ' ';
    char ArrScreen[YLine][XLine + 1] = {};
};