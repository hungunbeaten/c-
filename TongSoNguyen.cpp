#include<stdio.h>
int tong_chu_so(int n)
{
	int tong = 0, du;
	while(n>0)
	{
		du = n%10;
		tong = tong + du;
		n = n/10;
	}
	return tong;
}
int tang_dan(int n)
{
	while(n>=10)
	{
		int dv = n % 10;
		n = n / 10;
		if(dv < n%10) return 0;
	}
	return 1;
}
main()
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	if((tong_chu_so(n) % 10) > 7 && tang_dan(n)) printf("Tong cac chuc so cua so %d la: %d", n, tong_chu_so(n));
	else printf("%d khong phai la so dep", n);
}	
