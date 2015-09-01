#include<stdio.h>
#include<conio.h>
void tuples(int[], int, int);
void main()
{
	int i, n, a[10], sum;
	printf("enter n:\n");
	scanf_s("%d", &n);
	printf("enter sum\n");
	scanf_s("%d", &sum);
	printf("enter array elements\n");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	tuples(a,sum, n);
	system("pause");
}
	void tuples(int a[],int sum,int n)
	{
		int i, j,tuple1 = 0, tuple2 = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i] + a[j] ==sum)
			{
				tuple1 = a[i];
				tuple2 = a[j];

				if (tuple1 != tuple2)
				{
					printf("%d\t%d\n", tuple1, tuple2);
				}

			}
		}

	}
	
}