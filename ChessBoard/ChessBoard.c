#include <stdio.h>
#include <locale.h>
#include <math.h> 
/*7. С клавиатуры вводятся числовые координаты двух полей шахматной доски(x1, y1, x2, y2).
Требуется определить, относятся ли к поля к одному цвету или нет.
*/
struct Field
{
    double x;
    double y;
};

void fieldComparison(struct Field first, struct Field second)
{ 
    if (fmod(first.x + first.y + second.x + second.y, 2) == 0)
    {
        printf("Клетки Одноцветные");
    }
    else
    {
        printf("Клетки Разноцветные");
    }
}

int main(int argc, const char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    struct Field f1;
    struct Field f2; 

    printf("Введите координаты первой клетки(x, y), от 1 до 8: \n");
    scanf_s("%lf %lf", &f1.x, &f1.y); 
    printf("Введите координаты второй клетки(x, y), от 1 до 8: \n");
    scanf_s("%lf %lf", &f2.x, &f2.y);

    fieldComparison(f1, f2); 
    return 0;
}  
