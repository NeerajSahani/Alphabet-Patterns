#include <stdio.h>
main()
{
	int i, j, n;
	printf("Enter Size :");
	scanf("%d", &n);
	n /= 2;
	for (i = 1; i <= n - 2; i++)
	{
		for (j = 1; j <= n - 1; j++)
		{
			if (j == 1 || j == n - i)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j == 1 || j == i)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
