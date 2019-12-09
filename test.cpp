#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 100

void main()
{
	char a[N], b[N], S[N];
	gets(a);
	gets(b);
	Tong(char a[], char b[], char S[]);
	puts(S);
}

void Tong(char a[], char b[], char S[])
{
	strrev(a);
	strrev(b);
	int d=strlen(a);
	int no=0;
	for (int i=0 ; i<d ; i++)
	{
		int T=(a[i] + b[i] - 2*'0') + no;
		S[i] = T%10 + '0';
		no = T/10;
	}
	S[d] = '\0';
	strrev(S);
}

