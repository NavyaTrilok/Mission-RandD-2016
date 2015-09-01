#include<stdio.h>
#include<conio.h>
void check(int);
int a[10], count = 0;
void main()
{
	int i, n;
	printf("enter n");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	check(n);
	if (count<3)
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}

	system("pause");

}
void check(int n)
{
	int i, c, b, flag = 0;
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			flag = 1;
			printf("invalid input");
			break;
		}
		if (a[i]>a[i + 1])
		{
			count++;
			if (count >= 3)
				printf("invalid input");
			if (count == 1)
				b = i;
			if (count == 2)
				c = i + 1;

		}
	}
	if (count < 3 && flag == 0)
	{

		a[b] = a[b] + a[c];
		a[c] = a[b] - a[c];
		a[b] = a[b] - a[c];
	}


}