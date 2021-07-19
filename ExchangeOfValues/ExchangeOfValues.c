#include <stdio.h>
#include <locale.h>
//3. Написать программу обмена значениями двух целочисленных переменных
void change(int one, int two)//a. с использованием третьей переменной;
{
    int intermediate = one;
    one = two;
    two = intermediate;
    printf("После обмена значениями(функция change):\n Первое число = %d\n Второе число = %d\n", one, two); 
}

int main(void) //b.	 *без использования третьей переменной.
{
    char* locale = setlocale(LC_ALL, "");
    int one, two;

    printf("Введите первое и второе число(через пробел):");
    scanf_s("%d %d", &one, &two);
    printf("Вы ввели:\n первое число - %d,\n второе число - %d. \n", one, two); 

    two = one + two;
    one = two - one;
    two = two - one;
     
    printf("После обмена значениями:\n Первое число = %d \n", one);  
    printf(" Второе число = %d \n", two);
    change(one, two);
}  