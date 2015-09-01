#include<stdio.h>
#include<conio.h>
char stringfun(int);
char a[10];
void main()
{
	int i, k;
	char j;
	printf("enter string\n");
	gets_s(a, 10);
	printf("enter k:\n");
	scanf_s("%d", &k);
	j=stringfun(k);
	printf("%c", j);
	system("pause");

}
char stringfun(int k)
{
	int i, j;
	for (i = 0, j = k; a[j] != '\0'; i++, j++);
	if (a[j] == '\0')
	{
		return a[i];
	}
}