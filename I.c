#include <stdio.h>
main()
{
	int i, j, n;
	printf("Enter Size :");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == (n + 1) / 2)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
