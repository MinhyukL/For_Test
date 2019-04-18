#include <stdio.h>
#include <windows.h>

int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("¡Ú");
		for (j = 5; j > i; j--)
			printf("  ");
		for (j = 5; j > i; j--)
			printf("  ");
		for (j = 0; j <= i; j++)
			printf("¡Ú");
		puts("");
	}
	for (i = 5; i >= 0; i--)
	{
		for (j = 0; j <=i; j++)
			printf("¡Ú");
		for (j = 5; j > i; j--)
			printf("  ");
		for (j = 5; j > i; j--)
			printf("  ");
		for (j = 0; j <= i; j++)
			printf("¡Ú");
		puts("");
	}

	system("pause");
	return 0;
}