#include<stdio.h>
#include<conio.h>
void insertinto(char[], char[], int, int);
void main()
{
	int i = 0, l1 = 0, l2 = 0;
	char s1[20], s2[20];
	printf("enter two strings:");
	gets_s(s1, 20);
	gets_s(s2, 20);
	while (s1[i] != '\0')
	{
		i++;
		l1++;
	}
	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		l2++;
	}

	insertinto(s1, s2, l1, l2);
	system("pause");
}
void insertinto(char s1[], char s2[], int l1, int l2)
{
	int i, ch, j;
	int k = 0, p;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == '>' || s1[i] == ']' || s1[i] == '}' || s1[i] == ')')
		{
			ch = i;
			break;
		}
		k++;
	}
	p = 0;

	while (p <l2)
	{

		for (j = l1 + 1; j >= i; j--)
		{
			s1[j + 1] = s1[j];
		}
		p++;
		l1++;
	}
	j = 0;
	for (i = ch; s2[j] != '\0'; i++)
	{

		s1[i] = s2[j];
		j++;
	}

	printf("%s", s1);

}