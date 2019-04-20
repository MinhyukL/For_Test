#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;

	printf("★우주선찍기★\n\n");

		for (i = 0; i < 5; i++)
		{
			for (j = 4; j > i; j--)
				printf(" ");
			for (j = 0; j < (i * 2) + 1; j++)
				printf("*");

			puts("");
		}
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 9; j++)
				printf("*");

			puts("");
		}
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < i; j++)
				printf(" ");
			for (j = 10; j > i * 2 + 1; j--)
				printf("*");

			if(i!=4)
			puts("");
		}
		for (i = 0; i < 5; i++)
		{
			for (j = 4; j > i; j--)
				printf(" ");
			for (j = 0; j < i; j++)
				printf("*");
			for (j = 0; j < 1; j++)
				printf(" ");
			for (j = 0; j < i; j++)
				printf("*");

			puts("");
		}

	system("pause");
	return 0;
}