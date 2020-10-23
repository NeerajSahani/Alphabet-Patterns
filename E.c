#include <stdio.h>
int main()
{
	int i, j, n;
	printf("Enter Size :");
	scanf("%d", &n);
	n = 10;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || i == n || i == n/2)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
