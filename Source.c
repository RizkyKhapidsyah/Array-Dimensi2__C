#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Created by Rizky Khapidsyah */

int main() {
	int A[2][2];
	int B[2][2];
	int C[2][2];
	int i, j;

	/* Input */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%i][%i] : ", i + 1, j + 1);
			scanf_s("%i", &A[i][j]);
		}

		printf("\n");
	}

	puts("");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("b[%i][%i] : ", i + 1, j + 1);
			scanf_s("%i", &B[i][j]);
		}

		puts("");
	}

	printf("\n");

	/* Proses */

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	/* Output */

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("c[%i][%i] : %i\n", i + 1, j + 1, C[i][j]);
		}

		printf("\n");
	}

	printf("\n");

	_getch();
	return 0;
}