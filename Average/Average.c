#include <stdio.h>
#include <locale.h> 
/*11. С клавиатуры вводятся числа,
пока не будет введен 0. Подсчитать среднее арифметическое 
всех положительных четных чисел, оканчивающихся на 8.
*/
int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int counter = 0;  // количество оценок
    int grade = 0;    // значение оценки
    double sum = 0;   // сумма оценок
    double average;   //средняя оценка
    printf("Введите числа (или 0 для выхода) :");
     
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
        printf("Среднее арифметическое всех положительных четных чисел, оканчивающихся на 8: %.2f\n", average);
    }
    else
    {
        printf("Нужного ввода не прозошло!\n");
    }

    return 0;
} 