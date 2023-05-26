#pragma once





class ConsoleScreen
{
public:
    ConsoleScreen();


    void Init(char _BaseCh);

    void SetPixel(const int4& _Pos, char _Ch);
 

    void Clear();

    
    bool IsScreenOut(const int4& _Pos) const;



    void Print() const;

protected:


private:
    char BaseCh = ' ';
    char ArrScreen[YLine][XLine + 1] = {};
};