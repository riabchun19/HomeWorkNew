#include <stdio.h> 
#include <locale.h>
/*Домашнее задание
1.	Ввести вес и рост человека.Рассчитать и вывести 
индекс массы тела по формуле I = m / (h * h); 
где m - масса тела в килограммах, h - рост в метрах.
*/
int main(int argc, const char* argv[])
{
    char* locale = setlocale(LC_ALL, ""); // задаем текущую локаль (культуру) для вывода символов в консоль
    double weight, height, index;

    printf("Введите Ваш вес в кг.");
    scanf_s("%lf", &weight);
    printf("Введите Ваш рост в м.");
    scanf_s("%lf", &height);
    index = weight / (height * height);
    printf("Индекс массы массы тела = %f \n", index);
     
    if (index > 0 & index <= 16)
        printf("Выраженный дефицит массы тела\n");

    if (index >= 16 & index <= 18.5)
        printf("Недостаточная масса тела\n");

    if (index >= 18.5 & index <= 24.99)
        printf("Вес в норме\n");

    if (index >= 25 & index <= 30)
        printf("Избыточная масса тела\n");

    if (index >= 30 & index <= 35)
        printf("Ожирение\n");

    if (index >= 35 & index <= 40)
        printf("Ожирение резкое\n");

    if (index > 40)
        printf("Очень резкое ожирение\n"); 

    return 0;
} 