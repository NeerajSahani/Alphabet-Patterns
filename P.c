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
			if (j == 1 || i == 1 || i == ((n + 1) / 2) || j == n && i <= n / 2)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	i = 1;

	return 0;
}
