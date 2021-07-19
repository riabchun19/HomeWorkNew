#include <stdio.h> 
#include <locale.h>
//2. Найти максимальное из четырех чисел.Массивы не использовать.
int main(int argc, const char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int one, two, three, four, max = 0; 

    printf("Введите первое число:");
    scanf_s("%i", &one);
    printf("Введите второе число:");
    scanf_s("%i", &two);
    printf("Введите третье число:");
    scanf_s("%i", &three);
    printf("Введите четвертое число:");
    scanf_s("%i", &four);

    max = one;
     
    if (one < two) 
        max = two;
      
    if (three > four && three > max)
    {
        max = three;
        printf("Максимальное введенное число: %d", max);
    } 
    else if(max > four)
    {  
        printf("Максимальное введенное число: %d", max);
    }
    else
    {
        max = four;
        printf("Максимальное введенное число: %d", max);
    } 

    return 0;
} 