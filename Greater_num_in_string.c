//program to find which string is greater

#include<stdio.h>
#include<conio.h>
char a[10], b[10];
int greater();
void main()
{
	int flag; //char a[10]
	printf("enter two string:");
	gets_s(a, 10);
	gets_s(b, 10);
	flag = greater();
	if (flag == 0)
	{
		printf("first string is greater");
	}
	else if (flag==1)
	{
		printf("second string is greater");
	}
	else
	{
		printf("equal\n");
	}
	system("pause");
}
int greater()
{
	int n1 = 0, n2 = 0, i = 0, j = 0, flag, c = 0, count1 = 0, count2 = 0;


		while (a[i] == '0')
		{
			j++;
			i++;
		}
		i = 0;
		while (b[i] == '0')
		{
			i++;
			c++;

		}
		for (i = j; a[i] != '\0'; i++)
		{
			count1++;
	

		}
		printf("\n");
		for (i = c; b[i] != '\0'; i++)
		{
			count2++;
		
		}
		printf("\n");
		if (count1 > count2)
			return 0;
		else if(count1 < count2)
			return 1;
		else
		{
			while (a[j])
			{
				if (a[j] < b[c])
				{
					return 1;
				}
				if (b[c]>a[j])
				{
					return 0;
				}
				c++;
				j++;
			}
			return 2;
		}
	}

