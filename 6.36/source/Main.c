#include <stdio.h>
#include <stdlib.h>

void stringReverse(int,char[]);

int main(void)
{
	char string[10];

	printf("¿é¤J¤@¦r¦ê:");
	scanf_s("%s", &string, 10);

	stringReverse(0, string);

	system("pause");
}

void stringReverse(int add, char string[])
{
	if (string[add + 1] != '\0')
	{
		stringReverse((add + 1), string);
	}

	printf("%c", string[add]);
}