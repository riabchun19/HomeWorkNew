#include <stdio.h>
#include <locale.h> 
/*11. � ���������� �������� �����,
���� �� ����� ������ 0. ���������� ������� �������������� 
���� ������������� ������ �����, �������������� �� 8.
*/
int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int counter = 0;  // ���������� ������
    int grade = 0;    // �������� ������
    double sum = 0;   // ����� ������
    double average;   //������� ������
    printf("������� ����� (��� 0 ��� ������) :");
     
    do
    {
        scanf_s("%d", &grade);
        if (grade % 2 == 0 && grade >= 1 && grade % 10 == 8)
        {
            sum = sum + grade;
            counter++; 
        }
    } while (grade); 

    if (counter != 0)
    {
        average = sum / counter;
        printf("������� �������������� ���� ������������� ������ �����, �������������� �� 8: %.2f\n", average);
    }
    else
    {
        printf("������� ����� �� ��������!\n");
    }

    return 0;
} 