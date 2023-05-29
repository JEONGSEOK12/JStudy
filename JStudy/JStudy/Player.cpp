#include <conio.h>
#include "Player.h"
#include "ConsoleScreen.h"

const int4 Left = { -1, 0 };
const int4 Right = { 1, 0 };
const int4 Up = { 0, -1 };
const int4 Down = { 0, 1 };

    int4 Player::GetPos()
    {
        return Pos;
    }

    int Player::GetPosX()
    {
        return Pos.X;
    }

    int Player::GetPosY()
    {
        return Pos.Y;
    }

    void Player::AddPos(const int4& _Pos)
    {
        Pos += _Pos;
    }


    void Player::SetPos(const int4& _Pos)
    {
        // 뭔가가 그냥 거저 된다.
        // => 내가 만들었다.
        // => 컴파일러나 기본문법으로 생략되어 있다.
        Pos = _Pos;
    }


    void Player::Input(ConsoleScreen* _Screen)
    {
        char Select = (char)_getch();

     

        switch (Select)
        {
        case 'a':
            MovePos = Left;
            ShootPos = Left;
            break;

        case 'd':
            MovePos = Right;
            ShootPos = Right;
            break;

        case 'w':
            MovePos = Up;
            ShootPos = Up;
            break;

        case 's':
            MovePos = Down;
            ShootPos = Down;
            break; 
    
        case ' ':

            Bullet = 1;


        default:
            MovePos = { 0,0 };
            break;
        }

        if (false == _Screen -> IsScreenOut(GetPos() + MovePos))
        {
                       
                AddPos(MovePos);
            
        }
    };

    
