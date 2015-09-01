//program to insert an element into array
#include<stdio.h>
#include<conio.h>
int a[20];
int n;
int insert();
void main()
{
	int i,num,flag=0;
	printf("enter n:");
	scanf_s("%d", &n);
	printf("enter values:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("enter no to be inserted:");
	scanf_s("%d", &num);
	flag=insert(num, n);
	if (flag == 1)
	{
		printf("alredy exist");
	}
	else
	{
		
		for (i = 0; i <= n; i++)
		{
			printf("%d\t", a[i]);
		}
	}
	system("pause");

}
int insert(int num,int n)
{
	int i, j, ch,flag=0;
	if (num < a[0])
	{
		for (j = n - 1; j >= 0; j--)
		{
			a[j + 1] = a[j];

		}
		a[j + 1] = num;
	}
	else if (num>a[n - 1])
	{
		a[n] = num;
	}
	else
	{


		for (i = 0; i<n; i++)
		{
			if (a[i] == num)
			{
				flag = 1;
				return flag;
				break;
			}
			if (num>a[i] && num < a[i + 1])
			{
				ch = i + 1;
			}

		}
		for (j = n - 1; j >= 0; j--)
		{
			a[j + 1] = a[j];
			if (j == ch)
			{
				a[j] = num;
				n++;
				break;

			}
		}
		return flag;
	}
}