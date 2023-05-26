#include <iostream>
#include <conio.h>
#include"Player.h"
#include"Int4.h"
#include"ConsoleScreen.h"
#include"GeneralVarFuntions.h"


    void ConsoleScreen::Init(char _BaseCh)
    {
        BaseCh = _BaseCh;
        Clear();
    }

    void ConsoleScreen::SetPixel(const int4& _Pos, char _Ch)
    {
        ArrScreen[_Pos.Y][_Pos.X] = _Ch;
    }

    void ConsoleScreen::Clear()
    {
        system("cls");
        for (size_t y = 0; y < GeneralVarFuntions::YLine; y++)
        {
            for (size_t x = 0; x < GeneralVarFuntions::XLine; x++)
            {
                ArrScreen[y][x] = BaseCh;
            }
            ArrScreen[y][GeneralVarFuntions::XLine] = 0;
        }
    }

    bool ConsoleScreen::IsScreenOut(const int4& _Pos) const
    {
        if (0 > _Pos.X)
        {
            return true;
        }

        if (0 > _Pos.Y)
        {
            return true;
        }

        if (GeneralVarFuntions::XLine <= _Pos.X)
        {
            return true;
        }

        if (GeneralVarFuntions::YLine <= _Pos.Y)
        {
            return true;
        }

        return false;
    }


    void ConsoleScreen::Print() const
    {
        for (size_t y = 0; y < GeneralVarFuntions::YLine; y++)
        {
            printf_s(ArrScreen[y]);
            printf_s("\n");
        }
    }
