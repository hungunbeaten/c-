#include<conio.h>
#include<stdio.h>
void hoan_vi(int *a, int *b);
void sap_xep_chon(int a[], int n);
void hien_thi(int a[], int n);
int main(void)
{
	int x[] = {7,3,66,-5,22,-77,2};
	sap_xep_chon(x,8);
	hien_thi(x,8);
	getch();
	return 1;
}
void hoan_vi(int *a, int *b)
{
	int t;
	t=*a; *a=*b; *b=t;
}
void sap_xep_chon(int a[], int n)
{
	int i,j;
	for(i=0; i<n-1 ; i++)
		for(j=i+1; j<n; j++)
		if(a[i]>a[j])
		hoan_vi(&a[i], &a[j]);
}
void hien_thi(int a[], int n)
{
	int i;
	printf("\n");
	for(i=0 ; i<n ; i++)
	printf("%d\t", a[i]);
}
