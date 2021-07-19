#include <stdio.h>
#include <locale.h>
#include <math.h>
//4. Написать программу нахождения корней заданного квадратного уравнения.
int main(void)
{
    char* locale = setlocale(LC_ALL, "");
    int a, b, c; 

    printf("Введите значение а:");
    scanf_s("%d", &a);
    printf("Введите значение b:");
    scanf_s("%d", &b);
    printf("Введите значение c:");
    scanf_s("%d", &c);
    printf("Вы ввели такое квадратное уравнение: \t %dх2 + %dx + %d = 0 \n", a, b, c);
    findingRoots(a, b, c);
 
    return 0;
}

int findingRoots(int a, int b, int c)
{
    double x1, x2, discriminant;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        printf("Заданное квадратное уравнение имеет 2 корня \n");
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        printf("Первый корень равен: %f \n", x1);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Второй корень равен: %f", x2);
    }

    if (discriminant == 0)
    {
        printf("Заданное квадратное уравнение имеет 1 корень \n");
        x1 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корень равен: %f", x1);
    }

    if (discriminant < 0)
    {
        printf("Заданное квадратное уравнение не имеет корней");
    }
}
