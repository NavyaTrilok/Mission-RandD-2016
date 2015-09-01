#include<stdio.h>
#include<conio.h>
void fun(char[]);
void main()
{
	char s[50];
	int l = 0, i = 0;
	printf("please enter the sentence:\n");
	gets_s(s, 50);
	while (s[i] != '\0')
	{
		i++;
		l++;
	}
	
	fun(s, l);
	system("pause");


}

void fun(char s[50], int length)
{
	char temp;
	int	i = 0, j = 0, k, l, a, b, j1 = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			i++;

			for (j = i; s[j] != ' '; j++)
			if (s[j] == '\0')
				break;
			j--;
			j1 = j;

	

		}


		for (k = i, l = j; k < l; k++, l--)
		{
			temp = s[l];
			s[l] = s[k];
			s[k] = temp;

			
		}

		i = j1 + 1;
	}

	for (i = length; i >= 0; i--)
		printf("%c", s[i]);

}