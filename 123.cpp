#include<stdio.h>
main()
{
	printf("\nnhap %d ^ %d:\n", 4,5);
	int n, mu;
	printf("nhap n:");
	scanf("%d", &n);
for(int i = 2; i <= n; i++)
{
        mu = 0;
        while(n % i == 0){
            mu++;
            n /= i;
        }
            if(mu > 1) printf("%d^%d", i, mu);
            else printf("%d", i);
    }
    
    printf("\nnhap %d^%d:", 4,5);
}
