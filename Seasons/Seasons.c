#include <stdio.h>
#include <locale.h>
//5. � ���������� �������� ����� ������.��������� ����������, � ������ ������� ���� �� ���������.
int main(void)
{
    char* locale = setlocale(LC_ALL, "");
    int number = 2;
    printf("������� ����� ������ �� 1 �� 12: \n");
    scanf_s("%d", &number);

    switch (number)
    {
    case 1: case 2: case 12:
        printf("���� \n");
        break;
    case 3: case 4: case 5:
        printf("����� \n");
        break;
    case 6: case 7: case 8:
        printf("���� \n");
        break;
    case 9: case 10: case 11:
        printf("����� \n");
        break;
    default:
        printf("������������ ����!!! \n");
        break;
    }
    return 0;
} 