#include<stdio.h>
#define MAX 3
main()
{
	int a[MAX];
	int i;
	for (i=0 ; i < MAX ; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("\nMang a gom co cac phan tu");
	for (i=0 ; i < MAX; i++)
	printf("\n a[%d]= %d", i, a[i]);
}
