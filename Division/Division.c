#include <stdio.h>
#include <locale.h> 
/*9. ���� ����� ������������� ����� N � K. ��������� 
������ �������� �������� � ���������, ����� ������� �� 
������� ������ N �� K, � ����� ������� �� ����� �������.
*/
void main(int argc, char* argv[])
{
	char* locale = setlocale(LC_ALL, "");
	int N;
	int K; 
	int count = 0;
	printf("������� ����� N � K (����� ������): ");
	scanf_s("%d %d", &N, &K);

	while (N >= K && K > 0)
	{
		N -= K;
		count++;
	}

	printf("N / K = %d � %d � ������� \n", count, N); 
}