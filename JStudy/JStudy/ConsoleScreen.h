
class int4;
class ConsoleScreen
{
public:
    ConsoleScreen() {};
    ConsoleScreen(char arr[])
    {};

    void Init(char _BaseCh);
   
    void SetPixel(const int4& _Pos, char _Ch);

    void Clear();

    void Print();

protected:


private:



};


const int XLine = 20;
const int YLine = 10;
static char BaseCh = ' ';
static char ArrScreen[YLine][XLine + 1] = {};
