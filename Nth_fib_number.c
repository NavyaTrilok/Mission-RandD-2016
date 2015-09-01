#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
	int n, val, pos;
	printf("enter range:");
	scanf_s("%d", &n);
	printf("enter position:");
	scanf_s("%d", &pos);
	val = fibo(n, pos);
	printf("\n%d", val);
	system("pause");
}
int fibo(int n, int pos)
{
	int sum = 0, next = 1, prev = 1, i = 0, a[100], temp;
	printf("%d\t", prev);
	printf("%d\t", next);
	while (sum != n)
	{
		sum = prev + next;
		printf("%d\t", sum);
		a[i] = sum;
		prev = next;
		next = sum;
		i++;
		if (i == pos)
		{
		
			temp = a[i-3];
		}

	}
	return temp;
}