#include <stdio.h>
#include <locale.h>
//6.������ ������� ��������(�� 1 �� 150 ���) � ������� ��� ������ � ����������� ������ ����, ����� ��� ����.
int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int age;
    printf("������� ������� �� 1 �� 150: ");
    scanf_s("%d", &age);

    if (age % 10 == 1 && age / 10 != 1)
    {
        printf("��� %d ���", age);
    }
    else if(age / 10 != 1 && age % 10 == 2 || age % 10 == 3 || age % 10 == 4)
    {
        printf("��� %d ����", age);
    }
    else
    {
        printf("��� %d ���", age);
    } 
     
    return 0;
} 