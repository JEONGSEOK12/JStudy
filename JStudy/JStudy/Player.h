#pragma once
#include"int4.h"


class ConsoleScreen;

class Player
{
public:
    int4 MovePos;

    int GetPosX();


    int GetPosY();






    int4 GetPos();

        void AddPos(const int4& _Pos);



        void SetPos(const int4& _Pos);

        Player()
            : Pos()
        {};
            

    Player(const Player&) = delete;

    void Input(ConsoleScreen* _Sreen);


protected:

private:

    int4 Pos;
};
