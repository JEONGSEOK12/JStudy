#pragma once


#include"int4.h"
class ConsoleScreen;

class Player
{
public:
    // 레퍼런스는 기본적으로 8바이트 참조입니다.
    // int4를 그냥 16바이트입니다.
    // int4&를 그냥 8바이트입니다.
    // int4*를 그냥 8바이트입니다.

    // 내가 넣으려는 인자가 합쳐서 8바이트가 넘어갈때
    // 그걸 구조체나 클래스로 묶어서 참조형태로 넘기는게 대부분의 상황에서
    // 무조건 이득이다.


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
            // 뭔가가 그냥 거저 된다.
            // => 내가 만들었다.
            // => 컴파일러나 기본문법으로 생략되어 있다.
            Pos = _Pos;

        }


    Player(const Player&) = delete;

    void Input(ConsoleScreen* _Sreen);
    static int4 Pos;
protected:
    
private:



    
};