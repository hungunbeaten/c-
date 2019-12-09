#include<stdio.h>
#include<string.h>
#include<conio.h>

#define M 1000
#define N 100

void Tong(char a[], char b[], char S[]);
void Hieu(char a[], char b[], char H[]);
void Canbang(char a[], char b[]);
void Them(char n[], int t);
void Taofile();
FILE* DocFile(char *filename, char *a, char *b);



int main()
{
	Taofile();
	FILE *fptr;
    char filename[] = "THSL.txt";
    char a[N], b[N], c[N], S[N], H[N];  
    fptr = DocFile(filename, a, b);
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
void Taofile()
{    char line1[M], line2[M];
    FILE * fPtr;
    fPtr = fopen("THSL.txt", "w");
    if(fPtr == NULL)
    {
        printf("Unable to create file.\n");
        return;
    }
    printf("Nhap a b: \n");
    fgets(line1, M, stdin);
    fgets(line2, M, stdin);
    fputs(line1, fPtr);
    fputs(line2, fPtr);
    fclose(fPtr);
}
FILE* DocFile(char *filename, char *a, char *b)
{
	FILE *fptr = fopen(filename, "r+");
	char *c;
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
	return fptr;
}
