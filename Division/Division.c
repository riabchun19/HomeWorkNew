#include <stdio.h>
#include <locale.h> 
/*9. Даны целые положительные числа N и K. Используя 
только операции сложения и вычитания, найти частное от 
деления нацело N на K, а также остаток от этого деления.
*/
void main(int argc, char* argv[])
{
	char* locale = setlocale(LC_ALL, "");
	int N;
	int K; 
	int count = 0;
	printf("Введите числа N и K (через пробел): ");
	scanf_s("%d %d", &N, &K);

	while (N >= K && K > 0)
	{
		N -= K;
		count++;
	}

	printf("N / K = %d и %d в остатке \n", count, N); 
}