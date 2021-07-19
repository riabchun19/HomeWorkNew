#include <stdio.h>
#include <errno.h>
#define ARR_SIZE 100
// 12. �������� ������� ���������� ������������� �� ���� �����.
// ���� ������ � ��������� (���������� ������������� �����. ���������� ������� �� �����).
void arrayPrint(int length, int* a)
{
    int i;
    for (i = 0; i < length; i++)
        printf("%i\t", a[i]);

    printf("\n");
}

// ���������� ������������� ����� � �������
int findMax(int length, int* a)
{
    // � �������� ���������� �������� ��������� ���� ������ �����
    int result = a[0];
    int i;
    // ������������� ��������� �����
    for (i = 1; i < length; i++)
        // ���� ����� ��� ���� ����� ������ max, �� ���� ��� � �������� max
        if (a[i] > result) result = a[i];

    // ���������� ���������
    return result;
}

int main(int argc, char* argv[])
{
    errno_t err;
    int data;
    int array[ARR_SIZE];
    int size = 0;
    FILE* file;
    err = fopen_s(&file,"C:\\Users\\���������\\source\\repos\\HelloApp2\\FindingTheMaximumNumber\\MyFile.txt", "r");
    if (file == NULL)
    {
        puts("Can't open file");
        return 1;
    }
     
    // ���� ���������� ��������� ������ ������ ����
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
