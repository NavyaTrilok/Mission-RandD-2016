#include<stdio.h>
#include<conio.h>
void datetoword(int);
void monthtoword(int);
void yeartoword(int);
void main()
{
	int date, month, year;

	printf("enter date (date,month,year using enter key)separately");
	scanf_s("%d%d%d", &date, &month, &year);
	if (date > 31||(month==2&&date>=30)||((year%4==0||year%400||year%100==0)&&date>=30))
	{
		printf("invalide date");
	}
	else
	{

		datetoword(date);
		monthtoword(month);
		yeartoword(year);
	}

	system("pause");
}
void datetoword(date)
{
	char *word[] = { " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	char *ten[] = { " ", " ", "twenty", "thirty" };
	(date>19) ? printf("%s %s", ten[date / 10], word[date % 10]) : printf("%s", word[date]);
}
void monthtoword(month)
{
	int i;
	char *mon[] = { " ", "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	for (i = 0; i<12; i++)
	{
		if (month == i)
			printf("%s", mon[i]);
	}
}
void yeartoword(year)
{
	char *word[] = { " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	char *ten[] = { " ", " ", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	if (year / 1000 != 0)printf("%s Thousand", word[year / 1000]);
	if (((year % 1000) / 100) != 0)printf("%s Hundred", word[((year % 1000) / 100)]);
	year = year % 100;
	(year>19) ? printf("%s %s", ten[year / 10], word[year % 10]) : printf("%s", word[year]);
}
