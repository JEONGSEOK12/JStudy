#include <conio.h>
#include "int4.h"
#include "Player.h"


const int4 Left = { -1, 0 };
const int4 Right = { 1, 0 };
const int4 Up = { 0, -1 };
const int4 Down = { 0, 1 };

    int4 Player::GetPos()
    {
        return Pos;
    }

    void Player::AddPos(const int4& _Pos)
    {
        Pos += _Pos;
    }


    void Player::SetPos(const int4& _Pos)
    {
        // ������ �׳� ���� �ȴ�.
        // => ���� �������.
        // => �����Ϸ��� �⺻�������� �����Ǿ� �ִ�.
        Pos = _Pos;
    }



    void Player::Input()
    {
        char Select = (char)_getch();

        switch (Select)
        {
        case 'a':
            if (Pos.X > 0)
            {
                AddPos(Left);
            }
            break;

        case 'd':
            if (Pos.X < 19)
            {
                AddPos(Right);
            }
            break;

        case 'w':
            if (Pos.Y > 0)
            {
                AddPos(Up);
            }
            break;

        case 's':
            if (Pos.Y < 9)
            {
                AddPos(Down);
            }

            break;
        default:
            break;
        }
    }
