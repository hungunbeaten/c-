#include<stdio.h>
int tong_chu_so(int n)
{
	int tong, du;
	while(n>0)
	{
		du = n%10;
		tong = tong + du;
		n = n/10;
	}
	return tong;
}
main()
{
	tong_chu_so(125);
	printf("%d", tong_chu_so(125));
}

