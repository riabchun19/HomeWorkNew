#include <stdio.h>
#include <locale.h>
//8. ������ a � b � ������� �������� � ���� ����� �� a �� b.
void count(int a, int b)
{ 
    for (int i = a; i <= b; i++)
    {
        int square = i * i;
        int cube = square * i;
        printf("������� ����� %d = %d, ", i, square);
        printf("��� = %d.\n", cube);
    } 
}

int main(int argc, char* argv[])
{
    char* locale = setlocale(LC_ALL, "");
    int a;
    int b;
    printf("������� ����� a � b (����� ������): ");
    scanf_s("%d %d", &a, &b);
    count(a, b); 
    return 0;
}  