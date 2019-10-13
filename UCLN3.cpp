#include<stdio.h>
#include<math.h>
main()
{
	int a, b, x, y;
	printf("Nhap a,b");
	scanf("%d %d", &x, &y);
	a=abs(x);
	b=abs(y);
 	while(a>0 && b>0)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	printf("UCLN cua %d va %d la %d", x, y, a+b);
}
