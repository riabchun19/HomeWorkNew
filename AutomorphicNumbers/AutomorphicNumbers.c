#include <stdio.h>
#include <locale.h> 
/*14. *??????????? ?????. ??????????? ????? ?????????? ???????????,
???? ??? ????? ????????? ?????? ?????? ????????. ????????, 25 ? ???????? = 625. ???????? ?????????, 
??????? ?????? ??????????? ????? N ? ??????? ?? ????? ??? ??????????? ?????, ?? ????????????? N.
*/
void main()
{  
	/*???????????? ???????? ??????????? ????? - 1787109376,
	????????? ??????????? ????? - 8212890625 ??? ?? ?????? 
	? ?????????? unsigned long long int, ??????? ?????? ?????? ?????????,
	?? ?? ?????, ???????? ??? ???????.
	??? ?????? ??????? ????? ??? (????? ????? ??????????).
	?????, ???????, ????? ?????????? ???????. ??????? ?? ?????? "??????? ????"!
	*/
	char* locale = setlocale(LC_ALL, ""); 
	unsigned long long int input = 0;
	printf("??????? ????? ????????????? ?????: ");
	scanf_s("%d", &input);

	if (input == 1)
	{
		printf("??? ??????????? ?????\n"); 
	}
	else if(input % 10 == 5 || input % 10 == 6)
	{
		unsigned long long int divider = 10;
		while (divider < input)
			divider *= 10;
		if ((unsigned long long int)input * input % divider == input)
		{
			printf("??? ??????????? ?????\n");
		}
		else
		{
			printf("??? ?? ??????????? ?????\n");
		}
	}
	else
	{
		printf("??? ?? ??????????? ?????\n");
	} 
}