// ConsoleGame.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "ConsoleScreen.h"
#include "Player.h"
#include "Bullet.h"
// 4. 플레이어가 어떠한 키를 누르면 플레이어 위치에서
//    총알 1발이 발사되게 만드세요.

// 5. 그 총알 1발에 벽이 닿으면 벽이 없어지게 만드세요.

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
    MainPlayer.SetPos({ 5, 5 });

    int i=0;
    Bullet BulletArr[100];
   

    while (true)
    {       
        Screen.Clear();
        Screen.SetWall(5, '0');
        Screen.SetPixel(MainPlayer.GetPos(), 'a');

   

   

        if (0 != _kbhit())
        {        
            MainPlayer.Input(&Screen);      

            char Select = (char)_getch();
            switch (Select)
            {


            case ' ':

                BulletArr[i].SetPos({ MainPlayer.GetPosY() , MainPlayer.GetPosX() });
                Screen.ShootSetPixel(BulletArr[i].GetPos() + MainPlayer.ShootPos, '-');
                i++;

                break;


            default:
                break;
            }
            


        }
       
       



        Screen.Print();

        Sleep(200);
    }


}


