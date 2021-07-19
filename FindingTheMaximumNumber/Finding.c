#include <stdio.h>
#include <errno.h>
#define ARR_SIZE 100
// 12. Написать функцию нахождения максимального из трех чисел.
// Взял пример с методички (Нахождение максимального числа. Заполнения массива из файла).
void arrayPrint(int length, int* a)
{
    int i;
    for (i = 0; i < length; i++)
        printf("%i\t", a[i]);

    printf("\n");
}

// Нахождение максимального числа в массиве
int findMax(int length, int* a)
{
    // В качестве начального значения максимума берём первое число
    int result = a[0];
    int i;
    // Просматриваем остальные числа
    for (i = 1; i < length; i++)
        // если среди них есть число больше max, то берём его в качестве max
        if (a[i] > result) result = a[i];

    // Возвращаем результат
    return result;
}

int main(int argc, char* argv[])
{
    errno_t err;
    int data;
    int array[ARR_SIZE];
    int size = 0;
    FILE* file;
    err = fopen_s(&file,"C:\\Users\\Олександр\\source\\repos\\HelloApp2\\FindingTheMaximumNumber\\MyFile.txt", "r");
    if (file == NULL)
    {
        puts("Can't open file");
        return 1;
    }
     
    // Пока количество считанных данных больше нуля
    while (fscanf_s(file, "%d", &data) > 0)
    {
        array[size] = data;
        size++;
    }
    fclose(file);
    printf("Read %d records\n", size); 
    arrayPrint(size, array);
    printf("Max = %d", findMax(size, array));
    return 0;
}
