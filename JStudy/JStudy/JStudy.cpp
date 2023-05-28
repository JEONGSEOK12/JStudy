// ConsoleGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include "ConsoleScreen.h"
#include "Player.h"
#include "Wall.h"

// 숙제 플레이어가 화면 바깥으로 나가지 못하게 해라.


// 이녀석은 캡슐화된 클래스라기 보다는 기본자료형


// 리스 이니셜라이저

// Init('*')

// [*][*][0] \n
// [*][*][0] \n




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
        Screen.SetWall(5, '0');        
        Screen.Print();

        MainPlayer.Input();
    }


}
