#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10], i = 0, l = 0,  n,res;
	printf("enter n:");
	scanf_s("%d", &n);
	printf("enter number:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	res=divisible(a, n);
	if (res == 1)
	{
		printf("divisible");
	}
	else
	{
		printf("not dividble");
	}
	system("pause");

}
int divisible(int a[],int n)
{
	int evensum = 0, oddsum = 0,i;
	for (i = 0; i < n; i++)
	{
		
		if (i % 2 == 0)
		{
			evensum += a[i];
		}
		else
		{
			oddsum += a[i];
		}
	}
	if (evensum == oddsum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	

}