#include <iostream>
#include <conio.h>
#include"Player.h"
#include"Int4.h"
#include"ConsoleScreen.h"
#include"GeneralVarFuntions.h"


    int4 GetPos()
    {
        return Player::Pos;
    }

    void AddPos(const int4& _Pos)
    {
    }


    void SetPos(const int4& _Pos)
    {

    }

    // 생성자에는 붙일수가 없다.



    void Input(ConsoleScreen* _Sreen)
    {
        char Select = (char)_getch();

        int4 MovePos = { 0, 0 };

        switch (Select)
        {
        case 'a':

            MovePos = GeneralVarFuntions::Left;

            // 화면 바깥으로 나가지 않았다면 <= 행동 true
            // 나는 이동한다.
            // 4 5 + -1 0
            // 3 5 
            // int4 NextPos = GetPos() + Left;
            //if (false == _Sreen->IsScreenOut(GetPos() + Left))
            //{
            //    AddPos(Left);
            //}

            // 가고나서 돌아온다.
            //AddPos(Left);
            //if (true == _Sreen->IsScreenOut(GetPos()))
            //{
            //    AddPos(Right);
            //}
            break;
        case 'd':
            MovePos = GeneralVarFuntions::Right;

            //if (false == _Sreen->IsScreenOut(GetPos() + Right))
            //{
            //    AddPos(Right);
            //}

            break;
        case 'w':
            MovePos = GeneralVarFuntions::Up;

            //if (false == _Sreen->IsScreenOut(GetPos() + Up))
            //{
            //    AddPos(Up);
            //}
            break;
        case 's':
            MovePos = GeneralVarFuntions::Down;
            break;
        default:
            break;
        }

        if (false == _Sreen->IsScreenOut(GetPos() + MovePos))
        {
            AddPos(MovePos);
        }

    }