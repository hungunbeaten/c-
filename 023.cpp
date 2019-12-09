#include<stdio.h>
#include<conio.h>
#include<string.h>
main(void)
{
	char str1[8]="Good";
	char *str2= "Hung";
	strcmp(str1, str2);
	if(strcmp(str1, str2)==0) printf("G");
	else printf("K");
}
