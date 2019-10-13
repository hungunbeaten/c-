#include<stdio.h>
#include<math.h>
int GCD(int a, int b)
{
	a = abs(a);
	b = abs(b); 

 	while (a > 0 && b > 0) {
		if (a > b) a -= b;
		else b -= a;
	}

	return a + b;
}
int main()
{
	int x, y;
	printf("Nhap x,y");
	scanf("%d %d", &x, &y);
	printf("UCLN cua %d va %d la %d", x, y, GCD(x, y));
}
