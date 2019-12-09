#include<stdio.h>
#include<string.h>
#include<conio.h>
void inchuoinguoc(char *s);
main()
{
	char *string;
	printf("\nNhap:");
	gets(string);

	printf("Chuoi nguoc: %d ",	putchar(string[2]));
	inchuoinguoc(string);
	getch();
}
void inchuoinguoc(char *s)
{
	int i;
	for (i=strlen(s); i>=0; i--) putchar(s[i]);
}
