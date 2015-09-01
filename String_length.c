#include<stdio.h>
#include<conio.h>
char a[20];
int lenght(char*);
void main()
{
	int l;
	printf("enter a string:");
	gets_s(a,20);
	l = lenght(a);
	printf("the lenght of string is:%d", l);
	system("pause");

}
int lenght(char *a)
{
	int i,l=0;
	for (i = 0; a[i] != '\0'; i++)
	{
		l++;
	}
	return l;
}