#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("Дано:\n%10d\n%10d\n      ____", 3, 233);
	printf("\nОтвет:\n%2.2f", 3. / 233.);
	return 777;
}