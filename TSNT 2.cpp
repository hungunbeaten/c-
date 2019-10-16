#include<stdio.h>
main()
{
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
            if(n > i){
                printf(" * ");
            }
    }
}
