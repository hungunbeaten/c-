#include<stdio.h>
#include<math.h>
int UCLN(int a, int b) 
{
	if (a == 0) return b;
	if (b == 0) return a;
	if(a > b) return UCLN(a-b, b);
	return UCLN(b, b - a);
	}
main()
{
	int a, b;
	printf("Nhap a,b");
	scanf("%d %d", &a, &b);
	printf("%d la UCLN", UCLN(a, b));
}
