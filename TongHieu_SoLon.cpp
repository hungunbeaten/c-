#include<stdio.h>
#include<string.h>
#include<conio.h>
#define N 100

void Tong(char a[], char b[], char S[]);
void Hieu(char a[], char b[], char H[]);
void Canbang(char a[], char b[]);
void Them(char n[], int t);

int main()
{
	FILE *fptr;
    char filename[] = "data.txt";
    char a[N], b[N], c[N], S[N], H[N];  
    fptr = fopen(filename, "r+");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        return 0;
    }
    fgets(a, N, fptr);
    fgets(b, N, fptr);
		while(fgets(c, N, fptr) != NULL);
    a[strlen(a) - 1] = '\0';
    b[strlen(b) - 1] = '\0';
    printf("a = %s \nb = %s", a, b);
	Canbang(a, b);
	Tong(a, b, S);
	printf("\nTong la: %s", S);
	fprintf(fptr, "\nTong la: %s", S);
	Hieu(a, b, H);
	printf("\nHieu la: %s", H);
	fprintf(fptr, "\nHieu la: %s", H);
	fclose(fptr);
	return 1;
}

void Canbang(char a[], char b[])
{
	int da=strlen(a);
	int db=strlen(b);
	if(da>db)
		Them(b, da-db);
	else
		Them(a, db-da);
}

void Them(char n[], int t)
{
	strrev(n);
	int d=strlen(n);
	for (int i=0 ; i<t ; i++)
		n[d+i] = '0';
	n[d+t] = '\0';
	strrev(n);
}	

void Tong(char a[], char b[], char S[])
{
	strrev(a);
	strrev(b);
	int d=strlen(a);
	int no=0;
	for (int i=0 ; i<d ; i++)
	{
		int T=a[i] + b[i] - 2*'0' + no;
		S[i] = T%10 + '0';
		no = T/10;
	}
	if(no!=0) S[d]=no+'0';
	strrev(S);
}

void Hieu(char a[], char b[], char H[])
{
	bool check;
	int T=0, d=strlen(a);
	int no=0, k;
	int x = d-1;
	while(a[x] == b[x]) {
		x--;
	}
	check = a[x] > b[x];
	for (int i=0 ; i<d ; i++)
	{
		int T= (check ? a[i] - b[i] : b[i] -a[i]) - no;
		if(T<0)
		{
			H[i] = T + 10 + '0';
			no = 1;
		}
		else
		{
			H[i] = T + '0';
			no = 0;
		}
	}
		if (!check) H[d]= '-' + '\0';  else H[d] = '\0';
	 strrev(H);
}
