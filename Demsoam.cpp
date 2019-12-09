#include<stdio.h>
#define MAX 20
main()
{
	float x[MAX], s;
	int i, so_am;
	printf("n= "); scanf("%d", &n);
	for (i=0; i < n; i++) {
    	printf(" x[%d]= ", i );
	    scanf("%f", &x[i]);
    } 
    for (s=0,i=0; i < n; i++)
    	s+=x[i];
    printf("\n Tong S= %f", f);
    for (so_am=0,i=0; i < n; i++)
    if (x[i]<0) so_am += 1;
    printf("\n Co %d so am trong x.", so_am);
}
