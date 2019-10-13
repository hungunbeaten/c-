#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i, n;
	do
	{
	printf("\nNhap n: ");
	scanf("%d", &n);

	   if(n <= 0)
		   printf("\nn phai > 0. Xin nhap lai !");

	}while(n <= 0);
	if (sqrt((float)n) == (int)sqrt((float)n))  
	{
		printf("\n%d La so chinh phuong", n);
	}
	else
	{
		printf("\n%d Khong la so chinh phuong", n);
	}

	getch();
	return 0;
