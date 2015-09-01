#include<stdio.h>
#include<conio.h>
void common(char[], char[]);
void main()
{
	char s1[20], s2[20];
	int a[500];
	char ch;
	int i, j;
	printf("enter two strings:");
	gets_s(s1, 20);
	gets_s(s2, 20);
	common(s1, s2);
	system("pause");
}
void common(char s1[], char s2[])
{
	int i, j;
	int a[256];
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[s1[i]] = 1;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (a[s2[j]] == 1)
		{
			printf("%c", s2[j]);
			a[s2[j]] = 0;
		}
	}


}