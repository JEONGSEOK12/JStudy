﻿// ConsoleGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include "ConsoleScreen.h"
#include  "int4.h"
// 숙제 플레이어가 화면 바깥으로 나가지 못하게 해라.


// 이녀석은 캡슐화된 클래스라기 보다는 기본자료형

// 리스 이니셜라이저
// Init('*')

// [*][*][0] \n
// [*][*][0] \n




// 기계어적으로 볼때 함수가 호출되고 함수의 메모리를 만들고
// 메모리를 정리하는 담당자를 정해야하는 규칙이 있는데.
// C++에서는 그걸 직접 정해줄수 있는 문법이 또 있는거야.
// 컴파일러가 가장 최적의 함수호출규약을 알아서 정해줍니다.
void /*__cdecl*/ Function()
{

}

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

    Player()
        : Pos()
    {
    }

    Player(const Player&) = delete;

    void Input()
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

protected:

private:

    int4 Pos;
};

int main()
{
    ConsoleScreen Screen;
    Screen.Init('*');

    Player MainPlayer;
    // 클래스의경우에는 
    MainPlayer.SetPos({ 10, 5 });

    while (true)
    {
        Screen.Clear();
        Screen.SetPixel(MainPlayer.GetPos(), 'a');
        Screen.Print();

        MainPlayer.Input();
    }


}
