#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>
#define MAX 10
// nhap mang 10 so, nhap tiep so nguyen n, kiem tra xem co 2 so nao tong = n in ra
main()
{
	int h,i,n,so[MAX];
		printf("nhap n:");
		scanf("%d\n", &n);
	for(i=0 ; i<MAX ; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &so[i]);
		h=n-so[i];
		printf("%d",h);
	}
	for(i=0;i<MAX;i++)
	{
		if (so[i]=h)
		printf("%d va %d\n", so[i], h;
	}
}
