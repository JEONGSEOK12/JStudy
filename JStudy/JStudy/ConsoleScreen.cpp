
#include "ConsoleScreen.h"
#include "int4.h"
#include "Player.h"
#include <iostream>
#include <conio.h>



ConsoleScreen::ConsoleScreen()
{

};

void ConsoleScreen::Init(char _BaseCh)
{
    BaseCh = _BaseCh;
    Clear();
};

void ConsoleScreen::SetPixel(const int4& _Pos, char _Ch)
{
    ArrScreen[_Pos.Y][_Pos.X] = _Ch;
};

void ConsoleScreen::ShootSetPixel(const int4& _Pos, char _Ch)
{
    ArrScreen[_Pos.Y][_Pos.X] = _Ch;
};


void ConsoleScreen::SetWall(int num, char Ch)
{
    for (int i = 0; i < num; i++)
    {
        SetPixel({ 3,i }, Ch);
    }
};



bool ConsoleScreen::IsScreenOut(const int4& _Pos)
{
    if (0 > _Pos.X)
    {
        return true;
    }

    if (0 > _Pos.Y)
    {
        return true;
    }

    if (XLine <= _Pos.X)
    {
        return true;
    }

    if (YLine <= _Pos.Y)
    {
        return true;
    }

    if (ArrScreen[_Pos.Y][_Pos.X] == '0')
    {
        return true;
    }

    return false;
};




void ConsoleScreen::Clear()
{
    system("cls");
    for (size_t y = 0; y < YLine; y++)
    {
        for (size_t x = 0; x < XLine; x++)
        {
            ArrScreen[y][x] = BaseCh;
        }
        ArrScreen[y][XLine] = 0;
    }
};


void ConsoleScreen::Print()
{
    for (size_t y = 0; y < YLine; y++)
    {
        printf_s(ArrScreen[y]);
        printf_s("\n");
    }
};
