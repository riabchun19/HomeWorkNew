#include <stdio.h>
#include <locale.h>
//6.¬вести возраст человека(от 1 до 150 лет) и вывести его вместе с последующим словом Ђгодї, Ђгодаї или Ђлетї.
int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int age;
    printf("¬ведите возраст от 1 до 150: ");
    scanf_s("%d", &age);

    if (age % 10 == 1 && age / 10 != 1)
    {
        printf("¬ам %d год", age);
    }
    else if(age / 10 != 1 && age % 10 == 2 || age % 10 == 3 || age % 10 == 4)
    {
        printf("¬ам %d года", age);
    }
    else
    {
        printf("¬ам %d лет", age);
    } 
     
    return 0;
} 