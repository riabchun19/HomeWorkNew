#include <stdio.h> 
#include <locale.h>
//2. ����� ������������ �� ������� �����.������� �� ������������.
int main(int argc, const char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int one, two, three, four, max = 0; 

    printf("������� ������ �����:");
    scanf_s("%i", &one);
    printf("������� ������ �����:");
    scanf_s("%i", &two);
    printf("������� ������ �����:");
    scanf_s("%i", &three);
    printf("������� ��������� �����:");
    scanf_s("%i", &four);

    max = one;
     
    if (one < two) 
        max = two;
      
    if (three > four && three > max)
    {
        max = three;
        printf("������������ ��������� �����: %d", max);
    } 
    else if(max > four)
    {  
        printf("������������ ��������� �����: %d", max);
    }
    else
    {
        max = four;
        printf("������������ ��������� �����: %d", max);
    } 

    return 0;
} 