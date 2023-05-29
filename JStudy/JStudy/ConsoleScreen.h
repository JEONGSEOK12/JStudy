#pragma once



#include "GVars.h"



class int4;
class ConsoleScreen
{
public:
    ConsoleScreen();


        void Init(char _BaseCh);


        void SetPixel(const int4& _Pos, char _Ch);

        void ShootSetPixel(const int4& _Pos, char _Ch);
   

        void Clear();


        void SetWall(int num, char Ch);

        bool IsScreenOut(const int4& _Pos);
       

    void Print();


protected:


private:


    char BaseCh = ' ';
    char ArrScreen[YLine][XLine + 1] = {};
};