#include<stdio.h>
#include<math.h>
main()
{
	int n,i, d=0;
	printf("nhap n:");
	scanf("%d", &n);
	for(i=2;i<=sqrt(n);i++)
	if (n%i==0)
	d++;
	if(d==0)
	printf("%d la so nguyen to", n);
	else
	printf("%d khong la so nguyen to", n);
	}
