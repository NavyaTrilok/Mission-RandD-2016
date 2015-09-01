//rotate left program without using temp
#include<stdio.h>
#include<conio.h>
void rotate(int);
int a[10];
void main()
{
	int n, i, s;
	printf("enter n:");
	scanf_s("%d", &n);
	printf("enter number of times to be rotated:");
	scanf_s("%d", &s);
	printf("enter the values:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	rotate(n, s);
	system("pause");


}
void rotate(int n, int s)
{
	int i;
	s = s%n;
	while (s != 0)
	{

		
		for (i = n - 1; i >= 0; i--)
		{
			a[i + 1] = a[i];
		}
		a[0] = a[n];
		s--;
	}
	for (i= 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}

}