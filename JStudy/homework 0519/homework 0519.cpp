﻿// HomeWork0519.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int ChCount = 0;
//while (_string[ChCount])
//{
//    ++ChCount;
//}

int ChCount(const char* const _string, char Ch)
{
    if (nullptr == _string)
    {
        return -1;
    }

    int Count = 0;
    int CHCount = 0;
    while (_string[Count])
    {
        char Chv = _string[Count];
        if (Chv == Ch)
        {

            ++CHCount;

        }

        ++Count;
    }

    // for문을 돌리는건 당연한거야.

    // Ch와 같은 문자가 몇개들어있는지 세어서 리턴해주는 함수
    return CHCount;
}

void TrimDelete(char* _string)
{

    if (nullptr == _string)
    {
        return;
    }

    int Ct = 0;
    int TrimedCt = 0;
    char TrimedArr[240] = {};

        while (_string[Ct])
        {
            
            if (_string[Ct] != ' ')
            {
                TrimedArr[TrimedCt] = _string[Ct];
                ++Ct;
                ++TrimedCt;
            }
            else
            {
                ++Ct;
            }

        }

        int Ct2 = 0;
        while (_string[Ct2])
        {
            _string[Ct2] = TrimedArr[Ct2];
            ++Ct2;

        }

}


int DigitsCount(int _Number)
{
    int ct = 0;
    while (_Number)
    {
        if (_Number != 0)
        {
            _Number = _Number / 10;
            ++ct;
        }

    }
    




    return ct;
}

void StrCopy(const char* const _Left, char* _Right)
{

    if (nullptr == _Left)
    {
        return;
    }
    if (nullptr == _Right)
    {
        return;
    }




    int ct = 0;
    char CopedArray[256] = {};
    while (_Left[ct])
    {
        CopedArray[ct] = _Left[ct];
        ++ct;
    }

    int Ct2 = 0;
    while (_Left[Ct2])
    {
        _Right[Ct2] = CopedArray[Ct2];

        ++Ct2;

    }

    



    return;
}

// 가장 어려운 숙제
void NumberToString(int _Number, char* _Right)
{
    if (nullptr == _Right)
    {

    };



    while (_Number)
    {
        int Count = DigitsCount(_Number);

            int i = 0;

        for (i = 0; i < Count ; i++)
        {
            int Value = _Number % 10;
            _Right[Count - i - 1] = Value;
            _Number = _Number / 10;

        };






    }







   
}


int main()
{
    // 4가 리턴되어야 합니다.
    // 문자열의 마지막에 들어가는 0은 글자로 치지 않습니다.
    {
        int Result = ChCount("ab aaa ccc ddd eee", 'a');

        int Result2 = ChCount(nullptr, 'w');
    }

    {
        char Arr[250] = "aa b c dd  ee";

        TrimDelete(Arr);

        // Arr "aabcddee"
        int a = 0;
    }

    {
        // 8이 리턴되게 만들어라.
        int Result = DigitsCount(100);

        int a = 0;
    }

    {
        char ArrCopyText[256] = {};

        StrCopy("aaaa bbb ccc", ArrCopyText);

        int a = 0;
    }

    {
        char Result[256] = {};

        // Result = "312312";

        NumberToString(312312, Result);

        char Ch = '0';

        int Value = 7;

        char ChConvert = Value + 48;

        int a = 0;
    }

    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
