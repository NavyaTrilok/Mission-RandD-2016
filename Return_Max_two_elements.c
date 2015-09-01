#include<stdio.h>
#include<conio.h>

typedef struct maxelements
{
	int large1;
	int large2;
}large;
large maximumtwo(int[], int);
void main()
{
	int a[20], n, i;
	large temp;
	printf("enter n:");
	scanf_s("%d", &n);
	printf("enter elements");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	temp = maximumtwo(a, n);
	printf("\nfirst max element is %d", temp.large1);
	printf("\nsecond max element is %d", temp.large2);
	system("pause");
}
large maximumtwo(int a[], int n)
{
	int m1, m2, i;
	large temp;
	if (a[0]>a[1])
	{
		m1 = a[0];
		m2 = a[1];
	}
	else
	{
		m1 = a[1];
		m2 = a[0];
	}
	for (i = 0; i < n; i++)
	{
		if (a[i]>m1)
		{
			m2 = m1;
			m1 = a[i];
		}
		else if (a[i]<m1&&a[i]>m2)
		{
			m2 = a[i];
		}
		else
		{

		}
	}

	temp.large1 = m1;
	temp.large2 = m2;
	return temp;


}
