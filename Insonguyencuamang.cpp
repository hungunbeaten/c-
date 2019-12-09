#include<stdio.h>
#define max 10
main()
{
	int a[max];
	int i;
	printf("Nhap cac phan tu cua mang\n");
	for(i=0 ; i<max ; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\nMang a gom co cac phan tu:\n");
	for(i=0 ; i<max ; i++)
	{
	printf("a[%d]=%d\n", i, a[i]);
	}
}
