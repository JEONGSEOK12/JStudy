// HomeWork0518.cpp : 戚 督析拭澗 'main' 敗呪亜 匂敗桔艦陥. 暗奄辞 覗稽益轡 叔楳戚 獣拙鞠壱 曽戟桔艦陥.
//

#include <iostream>

//int ChCount = 0;
//while (Arr[ChCount])
//{
//    char PrintCh = Arr[ChCount];
//    putchar(PrintCh);
//    ++ChCount;
//}
//馬馬馬
// かいしかいしかしい

int StringCount(char* _Arr)
{
    // 是楕 森薦坪球研 凧壱馬室推

    int i = 0;
        while (_Arr[i])
        {
            ++i;


    }



    return i;
}

void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    // 1. 級嬢紳 越切研 穿採 '1'稽 辰趨坐虞.
    //  1-1. 敗呪 鎧採拭辞 馬走 源壱
    // for while亀 持唖馬走 源壱

    int i = 0;
        while (_Arr[i])
        {
            if (_Arr[i] == _PrevCh)
            {
                _Arr[i] = _NextCh;

            }

            ++i;
        }


    return;
}

int main()
{
    // 廃越 級嬢亜走 省柔艦陥.
    {
        char Arr[100] = "aa";
        // 5戚 蟹人醤 杯艦陥.
        // 越切呪研 室澗 敗呪脊艦陥.
        int Result = StringCount(nullptr);

        int a = 0;
    }

    {
        char Arr[100] = "aaa bbb ccc";

        Arr[0] = '1';

        // Arr[100] = "1111111111111";

        // 3戚 蟹人醤 杯艦陥.
        // "aaa bbb ccc"; => "aaa bbb ddd";
        ChangeCh(Arr, 'c', 'd');

        int a = 0;
    }


}

// 覗稽益轡 叔楳: <Ctrl+F5> 暁澗 [巨獄益] > [巨獄焔馬走 省壱 獣拙] 五敢
// 覗稽益轡 巨獄益: <F5> 徹 暁澗 [巨獄益] > [巨獄焔 獣拙] 五敢

// 獣拙聖 是廃 徳: 
//   1. [車欠芝 貼事奄] 但聖 紫遂馬食 督析聖 蓄亜/淫軒杯艦陥.
//   2. [得 貼事奄] 但聖 紫遂馬食 社什 薦嬢拭 尻衣杯艦陥.
//   3. [窒径] 但聖 紫遂馬食 柵球 窒径 貢 奄展 五獣走研 溌昔杯艦陥.
//   4. [神嫌 鯉系] 但聖 紫遂馬食 神嫌研 詐艦陥.
//   5. [覗稽詮闘] > [歯 牌鯉 蓄亜]稽 戚疑馬食 歯 坪球 督析聖 幻級暗蟹, [覗稽詮闘] > [奄糎 牌鯉 蓄亜]稽 戚疑馬食 奄糎 坪球 督析聖 覗稽詮闘拭 蓄亜杯艦陥.
//   6. 蟹掻拭 戚 覗稽詮闘研 陥獣 伸形檎 [督析] > [伸奄] > [覗稽詮闘]稽 戚疑馬壱 .sln 督析聖 識澱杯艦陥.
