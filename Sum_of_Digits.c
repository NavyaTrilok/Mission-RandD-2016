#include<stdio.h>
#include<conio.h>
void main()
{
	int n,res;
	printf("enter the number:");
	scanf_s("%d", &n);
	res = sum(n);
	printf("the result is:%d", res);
	system("pause");
	
}
int sum(int n)
{
	int s=0,d;
	while (n != 0)
	{
		d= n % 10;
		s = s + d;
		n = n / 10;
	}
	return s;
}