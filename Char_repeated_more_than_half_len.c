#include<stdio.h>
#include<conio.h>
void fun(int);
void main()
{
	char s1[20];
	int i = 0, l = 0 ,count = 0, n;
	printf("enter string");
	scanf_s("%s", s1);
	while (s1[i] != '\0')
	{
		i++;
		l++;
	}
	fun(l);
	system("pause");
}
void fun(int n)
{
	int i, count[256];
	char s[20];
	printf("enter string:");
	gets_s(s, 20);
	for (i = 0; s[i] != '\0'; i++)
	{
		count[s[i]] = 0;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		count[s[i]]++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (count[s[i]] > n / 2)
		{
			printf("%c", s[i]);
			count[s[i]] = 0;
		}
	}
}