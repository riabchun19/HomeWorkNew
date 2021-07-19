#include <stdio.h>
#include <locale.h> 
/*10. Дано целое число N(> 0).С помощью операций деления нацело и взятия остатка от деления определить,
имеются ли в записи числа N нечетные цифры.Если имеются, то вывести True, если нет — вывести False.
*/
void main(int argc, char* argv[])
{
	char* locale = setlocale(LC_ALL, "");
	int N;
	int notEven = 0;
	int remainder;
	printf("Введите целое число N (больше ноля): ");
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