#include<stdio.h>
#define max 20
main()
{
	int a[max];
	int i, so_am=0;
	int tong=0;
	printf("Nhap cac phan tu cua mang\n");
	for(i=0 ; i<max ; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for(i=0 ; i<max ; i++)
	{
	tong += a[i];
	if(a[i] < 0) so_am += 1;
	}
	printf("Tong ma la: %d\n", tong);
	printf("Mang co %d so am", so_am);
}
