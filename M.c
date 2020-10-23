#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, n;
	printf("Enter Size :");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			//if( j==1 || j==n || j<=n/2 && j==i || j > n/2 && j == n-i+1 )

			if (j == 1 || j == n || i <= n / 2 && i == j || i <= n / 2 && j == n - i + 1)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}

	getch();
}
