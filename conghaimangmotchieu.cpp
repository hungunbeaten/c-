#include<stdio.h>
#define kt 5
main()
{
	int i;
	int a[kt]={1,2,3,4,5}, b[kt]={6,8,9,10,11}, c[kt];
	for(i=0 ; i<kt ; i++)
		c[i]=a[i]+b[i];
	printf("Mang gom co cac phan tu: \n");
	for(i=0 ; i<kt ; i++)
	printf("c[%d] = %d\n", i, c[i]);
}
