#include <stdio.h>
#include <locale.h>
//5. С клавиатуры вводится номер месяца.Требуется определить, к какому времени года он относится.
int main(void)
{
    char* locale = setlocale(LC_ALL, "");
    int number = 2;
    printf("Введите номер месяца от 1 до 12: \n");
    scanf_s("%d", &number);

    switch (number)
    {
    case 1: case 2: case 12:
        printf("Зима \n");
        break;
    case 3: case 4: case 5:
        printf("Весна \n");
        break;
    case 6: case 7: case 8:
        printf("Лето \n");
        break;
    case 9: case 10: case 11:
        printf("Осень \n");
        break;
    default:
        printf("Неправильный ввод!!! \n");
        break;
    }
    return 0;
} 