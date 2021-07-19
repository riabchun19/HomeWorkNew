#include <stdio.h>
#include <stdlib.h>      // Для использования генератора случайных чисел
//13. *Написать функцию, генерирующую случайное число от 1 до 100.
void myRandom() //b) без использования стандартной функции rand()
{
    int x, a, b, m;
    m = 100; // Вершина последовательности
    b = 3;
    a = 2;
    x = 1;
    int i;
    int modulus = 100;

    for (i = 0; i < modulus; i++)
    {
        x = (a * x + b) % m;
        printf("%d\t", x);
    }
}

int main(int argc, char* argv[]) //a) с использованием стандартной функции rand()
{
    srand(time(NULL));// Инициализация счетчика случайных чисел.
    
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d\t", rand() % 100 + 1);    //... от 1 до 100 
    } 
    printf("\n\n");
    myRandom();
    return 0;
} 