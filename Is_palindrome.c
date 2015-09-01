int palindrome();
char a[10];
void main()
{
	int flag, i = 0, l = 0;
	printf("enter the string:");
	gets_s(a, 10);
	while (a[i] != '\0')
	{
		l++;
		i++;
	}

	flag = palindrome(l);


	/*if (flag == 1)
	{
	printf(" not a palindrome");
	}
	else
	{
	printf("palindrome");
	}*/
	system("pause");
}
int palindrome(int l)
{
	int i, j, flag = 2;
	for (i = 0, j = l - 1; i <= j; i++, j--)
	{


		if (a[i] != a[j])
		{
			flag = 1;
			break;
		}

	}
	if (flag == 1)
		printf("not a palindrome");
	else
		printf("palindrome");
}