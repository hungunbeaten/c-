#include<stdio.h>
#include<math.h>

int UCLN(int a, int b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if(a > b) return UCLN(a-b, b);
	else
	return UCLN(b, b - a);
}
int UCLN2(int a, int b) {
	if(a%b == 0) return b;
	return UCLN2(b, a%b);
}
main()
{
	printf("UCLN %d %d", UCLN(55, 15), UCLN2(55, 15));
}
