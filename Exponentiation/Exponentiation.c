#include <stdio.h>
#include <locale.h>
//8. ¬вести a и b и вывести квадраты и кубы чисел от a до b.
void count(int a, int b)
{ 
    for (int i = a; i <= b; i++)
    {
        int square = i * i;
        int cube = square * i;
        printf(" вадрат числа %d = %d, ", i, square);
        printf("куб = %d.\n", cube);
    } 
}

int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int a;
    int b;
    printf("¬ведите числа a и b (через пробел): ");
    scanf_s("%d %d", &a, &b);
    count(a, b); 
    return 0;
}  