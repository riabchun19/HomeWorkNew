#include <stdio.h>
#include <locale.h>
#include <math.h> 
/*7. � ���������� �������� �������� ���������� ���� ����� ��������� �����(x1, y1, x2, y2).
��������� ����������, ��������� �� � ���� � ������ ����� ��� ���.
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
        printf("������ �����������");
    }
    else
    {
        printf("������ ������������");
    }
}

int main(int argc, const char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    struct Field f1;
    struct Field f2; 

    printf("������� ���������� ������ ������(x, y), �� 1 �� 8: \n");
    scanf_s("%lf %lf", &f1.x, &f1.y); 
    printf("������� ���������� ������ ������(x, y), �� 1 �� 8: \n");
    scanf_s("%lf %lf", &f2.x, &f2.y);

    fieldComparison(f1, f2); 
    return 0;
}  
