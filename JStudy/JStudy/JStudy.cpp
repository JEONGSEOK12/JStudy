#include <iostream>


class test {
public:
    int num1;
    int num2;

public :
    test(int x, int y) {
        num1 = x;
        num2 = y;



    }

    void printNum() const {
      printf_s("%d",num1);
      printf_s("%d",num2);
    }


};










int main()
{
    std::cout << "Hello World!\n";



    test abc{ 1,2 };
    printf_s("%d", abc.num1);
    printf_s("%d", abc.num2);











}
