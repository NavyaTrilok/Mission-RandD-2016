#include<stdio.h>
#include<conio.h>
void permute(char[], char[]);
void main()
{
	int i;
	char s1[10], s2[10];
	printf("enter strings to be tested");
	gets_s(s1, 10);
	gets_s(s2, 10);
	permute(s1, s2);
	system("pause");
}
void permute(char s1[], char s2[])
{
	int i, j, a[256] = { 0 }, b[256] = { 0 }, flag;

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[s1[i]]++;

	}
	printf("\n");
	for (i = 0; s2[i] != '\0'; i++)
	{
		b[s2[i]]++;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (a[s1[i]] != b[s1[i]])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("no");
	else
		printf("yes");
}