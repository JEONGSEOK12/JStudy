// HomeWork0518.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>

//int ChCount = 0;
//while (Arr[ChCount])
//{
//    char PrintCh = Arr[ChCount];
//    putchar(PrintCh);
//    ++ChCount;
//}
//������
// ������������������

int StringCount(char* _Arr)
{
    // ���� �����ڵ带 �����ϼ���

    int i = 0
        while (_Arr[i])
        {
            ++i;


    }



    return i;
}

void ChangeCh(char* _Arr, char _PrevCh, char _NextCh)
{
    // 1. ���� ���ڸ� ���� '1'�� ä������.
    //  1-1. �Լ� ���ο��� ���� ����
    // for while�� �������� ����

    int = 0
        while (_Arr[i])
        {
            if (_Arr[i] == _PrevCh)
            {
                _Arr[i] = _NextCh

            }

            ++i;
        }


    return;
}

int main()
{
    // �ѱ� ���� �ʽ��ϴ�.
    {
        char Arr[100] = "aa";
        // 5�� ���;� �մϴ�.
        // ���ڼ��� ���� �Լ��Դϴ�.
        int Result = StringCount(nullptr);

        int a = 0;
    }

    {
        char Arr[100] = "aaa bbb ccc";

        Arr[0] = '1';

        // Arr[100] = "1111111111111";

        // 3�� ���;� �մϴ�.
        // "aaa bbb ccc"; => "aaa bbb ddd";
        ChangeCh(Arr, 'c', 'd');

        int a = 0;
    }


}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.