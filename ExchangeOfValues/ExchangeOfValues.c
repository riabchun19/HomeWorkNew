#include <stdio.h>
#include <locale.h>
//3. �������� ��������� ������ ���������� ���� ������������� ����������
void change(int one, int two)//a. � �������������� ������� ����������;
{
    int intermediate = one;
    one = two;
    two = intermediate;
    printf("����� ������ ����������(������� change):\n ������ ����� = %d\n ������ ����� = %d\n", one, two); 
}

int main(void) //b.	 *��� ������������� ������� ����������.
{
    char* locale = setlocale(LC_ALL, "");
    int one, two;

    printf("������� ������ � ������ �����(����� ������):");
    scanf_s("%d %d", &one, &two);
    printf("�� �����:\n ������ ����� - %d,\n ������ ����� - %d. \n", one, two); 

    two = one + two;
    one = two - one;
    two = two - one;
     
    printf("����� ������ ����������:\n ������ ����� = %d \n", one);  
    printf(" ������ ����� = %d \n", two);
    change(one, two);
}  