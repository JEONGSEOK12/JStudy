#pragma once


#include"int4.h"
class ConsoleScreen;

class Player
{
public:
    // ���۷����� �⺻������ 8����Ʈ �����Դϴ�.
    // int4�� �׳� 16����Ʈ�Դϴ�.
    // int4&�� �׳� 8����Ʈ�Դϴ�.
    // int4*�� �׳� 8����Ʈ�Դϴ�.

    // ���� �������� ���ڰ� ���ļ� 8����Ʈ�� �Ѿ��
    // �װ� ����ü�� Ŭ������ ��� �������·� �ѱ�°� ��κ��� ��Ȳ����
    // ������ �̵��̴�.


    Player()
    {
    };

    int4 GetPos()
    {
        return Pos;

        }

        void AddPos(const int4& _Pos)
        {
            Pos += _Pos;
        }


        void SetPos(const int4& _Pos)
        {
            // ������ �׳� ���� �ȴ�.
            // => ���� �������.
            // => �����Ϸ��� �⺻�������� �����Ǿ� �ִ�.
            Pos = _Pos;

        }


    Player(const Player&) = delete;

    void Input(ConsoleScreen* _Sreen);
    static int4 Pos;
protected:
    
private:



    
};