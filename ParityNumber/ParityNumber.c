#include <stdio.h>
#include <locale.h> 
/*10. ���� ����� ����� N(> 0).� ������� �������� ������� ������ � ������ ������� �� ������� ����������,
������� �� � ������ ����� N �������� �����.���� �������, �� ������� True, ���� ��� � ������� False.
*/
void main(int argc, char* argv[])
{
	char* locale = setlocale(LC_ALL, "");
	int N;
	int notEven = 0;
	int remainder;
	printf("������� ����� ����� N (������ ����): ");
	scanf_s("%d", &N);

	while (N > 0)
	{
		remainder = N % 10;
		N /= 10;
		if (remainder % 2)
		{
			notEven = 1;
			break;
		}
	}
	if (notEven)
		printf("True\n");
	else
		printf("False\n");
}