#include <stdio.h>
#include <stdlib.h>      // ��� ������������� ���������� ��������� �����
//13. *�������� �������, ������������ ��������� ����� �� 1 �� 100.
void myRandom() //b) ��� ������������� ����������� ������� rand()
{
    int x, a, b, m;
    m = 100; // ������� ������������������
    b = 3;
    a = 2;
    x = 1;
    int i;
    int modulus = 100;

    for (i = 0; i < modulus; i++)
    {
        x = (a * x + b) % m;
        printf("%d\t", x);
    }
}

int main(int argc, char* argv[]) //a) � �������������� ����������� ������� rand()
{
    srand(time(NULL));// ������������� �������� ��������� �����.
    
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d\t", rand() % 100 + 1);    //... �� 1 �� 100 
    } 
    printf("\n\n");
    myRandom();
    return 0;
} 